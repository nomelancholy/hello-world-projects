const express = require("express");
const router = express.Router();
const app = express();
const fs = require("fs");
const template = require("./lib/template");
const sanitizeHtml = require("sanitize-html");
const path = require("path");
const bodyParser = require("body-parser");
const compression = require("compression");
const helmet = require("helmet");

app.use(express.static("public"));
app.use(bodyParser.urlencoded({ extended: false }));
app.use(compression());
app.use(helmet());
app.get("*", (req, res, next) => {
  fs.readdir("./data", (err, fileList) => {
    req.list = fileList;
    next();
  });
});

app.get("/", (request, response) => {
  const title = "welcome";
  const description = "Hello, Express";
  const list = template.list(request.list);
  const html = template.HTML(
    title,
    list,
    `<h2>${title}</h2>${description}<img src="images/sky.jpg"></img`,
    `<a href="/create">create</a>`
  );
  response.send(html);
});

app.get("/page/:pageId", (request, response, next) => {
  var filteredId = path.parse(request.params.pageId).base;
  fs.readFile(`data/${filteredId}`, "utf8", (err, description) => {
    if (err) {
      next(err);
    } else {
      var title = request.params.pageId;
      var sanitizedTitle = sanitizeHtml(title);
      var sanitizedDescription = sanitizeHtml(description, {
        allowedTags: ["h1"],
      });

      var list = template.list(request.list);
      var html = template.HTML(
        sanitizedTitle,
        list,
        `<h2>${sanitizedTitle}</h2>${sanitizedDescription}`,
        ` <a href="/create">create</a>
                  <a href="/update/${sanitizedTitle}">update</a>
                  <form action="/delete_process" method="post">
                    <input type="hidden" name="id" value="${sanitizedTitle}">
                    <input type="submit" value="delete">
                  </form>`
      );
      response.send(html);
    }
  });
});

app.get("/create", function (request, response) {
  var title = "WEB - create";
  var list = template.list(request.list);
  var html = template.HTML(
    title,
    list,
    `
        <form action="/create_process" method="post">
          <p><input type="text" name="title" placeholder="title"></p>
          <p>
            <textarea name="description" placeholder="description"></textarea>
          </p>
          <p>
            <input type="submit">
          </p>
        </form>
      `,
    ""
  );
  response.send(html);
});

app.post("/create_process", function (request, response) {
  var post = request.body;
  var title = post.title;
  var description = post.description;
  fs.writeFile(`data/${title}`, description, "utf8", function (err) {
    response.writeHead(302, { Location: `/?id=${title}` });
    response.end();
  });
});

app.get("/update/:pageId", function (request, response) {
  var filteredId = path.parse(request.params.pageId).base;
  fs.readFile(`data/${filteredId}`, "utf8", function (err, description) {
    var title = request.params.pageId;
    var list = template.list(request.list);
    var html = template.HTML(
      title,
      list,
      `
          <form action="/update_process" method="post">
            <input type="hidden" name="id" value="${title}">
            <p><input type="text" name="title" placeholder="title" value="${title}"></p>
            <p>
              <textarea name="description" placeholder="description">${description}</textarea>
            </p>
            <p>
              <input type="submit">
            </p>
          </form>
          `,
      `<a href="/create">create</a> <a href="/update/${title}">update</a>`
    );
    response.send(html);
  });
});

app.post("/update_process", function (request, response) {
  var post = request.body;
  var id = post.id;
  var title = post.title;
  var description = post.description;
  fs.rename(`data/${id}`, `data/${title}`, function (error) {
    fs.writeFile(`data/${title}`, description, "utf8", function (err) {
      response.redirect(`/page/${title}`);
    });
  });
});

app.post("/delete_process", function (request, response) {
  var post = request.body;
  var id = post.id;
  var filteredId = path.parse(id).base;
  console.log("filteredId :>> ", filteredId);
  fs.unlink(`data/${filteredId}`, function (error) {
    if (error) {
      console.error("error :>> ", error);
    }

    response.redirect("/");
  });
});

app.use(function (req, res, next) {
  res.status(404).send("Sorry cant find that!");
});

app.use(function (err, req, res, next) {
  console.error(err.stack);
  res.status(500).send("Something broke!");
});

app.listen(3000, () => console.log("Example app listening on port 3000!"));
