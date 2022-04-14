const http = require("http");
const fs = require("fs");
const fsPromises = fs.promises;
const url = require("url");
const path = require("path");
const qs = require("querystring");

const templateHTML = (title, list, body, control) => {
  return `
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8" />
        <meta http-equiv="X-UA-Compatible" content="IE=edge" />
        <meta name="viewport" content="width=device-width, initial-scale=1.0" />
        <title>${title}</title>
    </head>
    <body>
        <h1>${title}</h1>
        ${list}
        ${control}
        ${body}
    </body>
    </html>
    `;
};

const templateList = (fileList) => {
  return `<ul>
    ${fileList
      .map((file) => `<li><a href="/?id=${file}">${file}</a></li>`)
      .join("")}
    </ul>`;
};

const app = http.createServer(async (req, res) => {
  let _url = req.url;

  const queryData = url.parse(_url, true).query;
  const pathname = url.parse(_url, true).pathname;
  let title = queryData.id ? queryData.id : "welcome";

  let list = [];

  try {
    list = await fsPromises.readdir("./data");
  } catch (error) {
    console.log("error :>> ", error);
  }

  let processedList = await templateList(list);

  let desc = "";

  try {
    desc = await fsPromises.readFile(`./data/${title}`);
  } catch (error) {
    console.log("error :>> ", error);
  }
  console.log("pathname :>> ", pathname);

  if (pathname == "/") {
    res.writeHead(200);
    res.end(
      templateHTML(
        title,
        processedList,
        `<p>${desc}</p>`,
        queryData.id
          ? `<a href="/create">create</a><a href="/update?id=${title}">update</a><form action="delete_process" method="post"><input type="hidden" name="id" value="${title}"><button>delete</button></form>`
          : '<a href="/create">create</a>'
      )
    );
  } else if (pathname == "/create") {
    res.writeHead(200);
    res.end(
      templateHTML(
        title,
        processedList,
        `
            <form action="http://localhost:3000/create_process" method="post">
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
      )
    );
  } else if (pathname === "/create_process") {
    let body = "";
    req.on("data", (data) => {
      body += data;
    });

    req.on("end", () => {
      let post = qs.parse(body);
      let title = post.title;
      let description = post.description;

      fs.writeFile(`data/${title}`, description, "utf8", (err) => {
        res.writeHead(302, { Location: `/?id=${title}` });
        res.end();
      });
    });
  } else if (pathname === "/update") {
    res.writeHead(200);
    res.end(
      templateHTML(
        title,
        processedList,
        `
            <form action="http://localhost:3000/update_process" method="post">
            <input type="hidden" name="id" value=${title}></input>
            <p><input type="text" name="title" placeholder="title" value=${title}></p>
            <p>
                <textarea name="description" placeholder="description">${desc}</textarea>
            </p>
            <p>
                <input type="submit">
            </p>
            </form>
        `,
        ""
      )
    );
  } else if (pathname === "/update_process") {
    let body = "";
    req.on("data", (data) => {
      body += data;
    });

    req.on("end", () => {
      let post = qs.parse(body);
      let id = post.id;
      let title = post.title;
      let description = post.description;

      fs.rename(`data/${id}`, `data/${title}`, (err) => {
        fs.writeFile(`data/${title}`, description, "utf8", (err) => {
          res.writeHead(302, { Location: `/?id=${title}` });
          res.end();
        });
      });
    });
  } else if (pathname === "/delete_process") {
    let body = "";
    req.on("data", (data) => {
      body += data;
    });

    req.on("end", () => {
      let post = qs.parse(body);
      let id = post.id;

      fs.unlink(`data/${id}`, (err) => {
        res.writeHead(302, { Location: `/` });
        res.end();
      });
    });
  } else {
    console.log("else");
    res.writeHead(404);
    res.end("Not Found");
  }
});

app.listen(3000);
