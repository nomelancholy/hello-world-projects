const fs = require("fs");

fs.readFile("./node/sample.txt", "utf8", (err, data) => {
  console.log("data :>> ", data);
});
