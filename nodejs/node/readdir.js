const fs = require("fs");

fs.readdir("./node", (error, fileList) => {
  console.log("fileList :>> ", fileList);
});
