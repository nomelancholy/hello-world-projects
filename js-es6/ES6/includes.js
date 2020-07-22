let years = [2001,2010,2015, 2018];
const fruits = ['apple','banana','potato'];

// es5

console.log(years.indexOf(2014) !== -1);
// false
console.log(fruits.indexOf('apple') !== -1);
// true

// es6

console.log(years.includes(2015));
// false
console.log(fruits.includes('apple'));
// true

// import / export test 변수


