// var 과 let의 차이

if(true) {
    var varId = 'test';
    // var로 선언
}

console.log(varId);
// test
// scope가 다른데도 varId가 출력된다

if(true) {
    let hoistingId = 'test';
    // let으로 선언
}

//console.log(hoistingId);
// error로 실행 불가
// scopre가 다르기 때문에 당연히 에러 발생

// let과 const 차이

let letId = 'testBefore';
letId = 'testAfter';

console.log(letId);
// testAfter

const constId = 'testBefore';
//constId = 'testAfter';
// const로 선언된 변수를 재할당 하려하면 error 발생으로 실행불가
// 즉 const 로 선언된 변수의 값은 변하지 않는다.

// const로 객체와 배열을 선언했을 때 예외사항

const fruit = {};
// fruit = {test : 'apple'};
// fruit 값을 직접 바꾸려 하면 에러가 발생하지만

fruit.first = 'apple';
console.log(fruit);
// { first: 'apple' }

// 위와 같은 방식으로 객체 내부의 값을 바꾸는 것은 가능하다.

const numbers = [0,1,2];
numbers[0] = 5;
console.log(numbers);
// [ 5, 1, 2 ] 
// 배열도 객체와 마찬가지다