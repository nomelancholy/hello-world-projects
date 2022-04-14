const M = {
  v: "v",
  f: () => {
    console.log("f");
    console.log("this :>> ", this);
    console.log(this.v);
  },
};

module.exports = M;
