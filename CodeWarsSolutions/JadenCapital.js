String.prototype.toJadenCase = function () {
  let str = this.split(" ");
  return str.map(a=>a[0].toUpperCase() + a.slice(1)).join(" ");
};