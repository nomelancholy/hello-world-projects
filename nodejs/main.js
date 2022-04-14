const http = require("http");
const fs = require("fs");
const url = require("url");

const app = http.createServer((req, res) => {
  let _url = req.url;

  const queryData = url.parse(_url, true).query;
  console.log("queryData.id :>> ", queryData.id);
  let title = queryData.id;

  const template = `
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
    </body>
    </html>
  `;

  res.writeHead(200);
  res.end(template);
});

app.listen(3000);
