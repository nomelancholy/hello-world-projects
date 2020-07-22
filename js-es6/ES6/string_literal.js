const val1 = 'my string';
const val2 = 'my string2';

// es5

const conVal = val1 + ', '+ val2;

console.log(conVal);
// my string, my string2

// es6

const litVal = `${val1}, ${val2}`

console.log(litVal);
// my string, my string2

// - String Literal

// ES6의 String Literal을 활용하면 문자열을 좀 더 직관적으로 결합할 수 있다.
// ( 여기서 사용되는 ` 은 Tab키 위에 있는 ` 다. 작은 따옴표 아님 )