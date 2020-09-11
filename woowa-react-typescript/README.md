# 우아한 테크러닝 3기 - React & Typescript

우아한 테크러닝 3기 React & Typescript 강의를 듣고 실습한 내용을 정리한 저장소입니다

## 1일차

- 주요 신청 고민 내용 : 코드품질, 아키텍처, 적정기술

- 강의 목표

1. 도구에 대한 이야기 (Typescript, React, redux, mobx, Redux-Saga, Blueprint, Testing Library)
2. (상태 State), 환경(Env), 제품 Prod;, 목표(Mission)), 코드 (Quality], 상대적 {E=mc2}

### Typescript

#### 문법

- 타입 추론할 수 있는 유형은 타입스크립트가 알아서 타입을 추론해준다.

```ts
let foo = 10;
// 타입스크립트가 foo의 type을 숫자로 추론해서 타이핑해준다.
```

- 명시적인 선언

```ts
let foo: number = 10;
// 위와 같이는 명시할 수 있다
```

명시적인 것이 좋은지 암묵적인 것이 좋은지는 트렌드를 탄다. 최근엔 명시적인 것이 선호되는 경향이 있다.

- Type Alias

Primitive Type은 범용성에 있어 좋지만 본인이 원하는 타입을 표현할 수 없다. 타입스크립트는 이런 문제를 해결하기 위해 Type Alias 기능을 제공한다.

```ts
type Age = number;

let age: Age = 10;
```

이런 Type Alias는 트랜스파일링이 되면 사라진다. 이는 컴파일 타이밍때만 작동된다.

이렇듯 타입스크립트에는 크게 두가지 요소 가 있다.

1. 컴파일 타이밍에만 작동하는 요소
2. 런타임때도 작동되는 요소

- 객체 타입

```ts
type Age = number;

type Foo = {
  age: Age;
  name: string;
};

const foo: Foo = {
  age: 31,
  name: "choi",
};
```

Typescript 에서 객체를 선언할 방법은 위와 같다

- interface와 type의 차이

```ts
type Age = number;

type Foo = {
  age: Age;
  name: string;
};

interface Bar {
  age: Age;
  name: string;
}

const foo: Foo = {
  age: 31,
  name: "choi",
};

const Bar: Bar = {
  age: 31,
  name: "choi",
};
```

To be Continue..

### React

#### Create React App

React App을 쉽게 시작할 수 있도록 도와주는 패키지. 토이 프로젝트 수준에선 문제가 없을 수도 있지만 제품 개발을 CRA로 할 시엔 문제가 발생할 수도 있다

#### tsconfig.json

Typescript 세팅을 설정해주는 파일

#### ReactDOM

Virtual Dom. render 메소드를 활용하며 React Component를 렌더링해준다.

#### JSX

HTML + JS. JSX 문법에 따라 작성하면 React가 제공하는 JSX 트랜스파일러가 해당 코드를 React.createElement 메소드를 활용하는 코드로 만들어준다. 상세 내용은 babel 사이트의 [playground](https://babeljs.io/repl#?browsers=defaults%2C%20not%20ie%2011%2C%20not%20ie_mob%2011&build=&builtIns=false&spec=false&loose=false&code_lz=Q&debug=false&forceAllTransforms=false&shippedProposals=false&circleciRepo=&evaluate=false&fileSize=false&timeTravel=false&sourceType=module&lineWrap=true&presets=env%2Creact%2Cstage-2%2Cenv&prettier=false&targets=&version=7.11.5&externalPlugins=)를 활용해 확인할 수 있다

#### React.StrictMode

React 개발에 도움을 주는 인포들을 알려준다.

#### State

여러 컴포넌트가 관심 갖는, 전역 State를 관리하기 위해 처음으로 등장한 건 Flux다. 이를 개선하고 정형화 한 것이 redux다. redux와 1:1로 비교하기 힘들만큼 다른 패러다임으로 접근하지만 상태를 관리하는 다른 library로는 mobx가 있다.

## 2일차

- 진행 내용

1. javascript A-Z
2. redux

### javascript A-Z

변수 선언, 자료형 부분 처럼 매우 간단한 내용은 skip

#### 함수

프로그래밍 언어는 서양에서 발명되었다. 그래서 서양에서 주로 공유되는 합리주의적인 방식, 그러니까 불변의 공리 하나를 정하고 그 원칙에 맞춰 내용을 쌓아나가는 방식을 프로그래밍 언어는 ㄱ

자바스크립트에서 공유되는 원칙은 다음과 같다

1. 값은 변수에 넣을 수 있다.
2. javscript에선 함수도 값으로 본다. 거의 모든 것이 값이다.

```js
let x = 10;
// 10도 값이고
x = { a: b };
// 객체도 값이고
x = function foo() {};
// 함수도 값이다
```

javascript의 모든 함수는 값을 반환한다. 리턴 값이 있으면 리턴값을, 없으면 undefinded를 반환한다.

```js
function foo() {
  return 0;
}
// 함수 정의문 (세미콜론이 없는 이유)

const bar = function () {};
// 함수 정의식 (세미콜론이 있는 이유)

bar();
// 함수를 값으로 가지고 있기 때문에 호출이 가능하다.
// 함수를 값으로 취급할 때는 함수 이름을 생략할 수 있다.

fucntion(){

}
// 그렇기 때문에 위와 같은 식으론 선언할 수 없다. 이걸 값으로 취급하려면

(function(){

})()
// 이렇게 괄호를 사용해줘야 한다. 이런 함수를 호출하려면 선언한 바로 그 곳에서 바로 호출해줘야 한다. 이런 걸 immediatly function call

function foo(x){
  // js에서 인자로 들어가는 것도 값이고
  return 0;
  // 리턴하는 것도 값이다
}

// 이말인 즉 함수를 인자로 넣거나 리턴할 수도 있다는 말이다. 따라서

function foo(x) {
  x();
  return function(){

  }
}

const y = foo(function () {

})
// 위와 같이 사용가능하다. 이렇게 인자로 넣는 함수를 콜백 함수라고 한다. 함수를 인자로 받고 함수를 리턴하는 함수를 일급 함수 (HOC라고도 함)라고 한다

const foo = function foo() {
  foo()
};
// 재귀 호출을 할 때는 값으로 넣는다해도 이름이 있어야 한다

const bar = () => {

}

// 모든 자바스크립트 코드는 식과 문으로 나눌 수 있다

// 결과가 값이 나오면 식
0;
1 + 10;
foo();
1 + 10 + foo();
isTrue ? 1 : 2;
// 삼항연산자

// 식의 마무리는 세미콜론으로 하고

// 실행했을 때 값이 안나오면 '문'이다
// if 문, condition 문
// 문의 마무리엔 세미콜론을 붙이지 않는다.

// 반복

// 함수는 입력값을 받고 계산해서 어떤 값을 돌려준다.

const x = 10;
const y = () => 10;

x와 y는 같다

// 화살표 함수

const y = (x,y) => x * 2
// 한줄 함수는 무엇을 리턴할지 명시할 필요가 없다

const y = (x,y) => {
  return x * 2
}
// 그러나 여러 줄을 표현하려면 어떤 것을 리턴할지 명시해 줘야 한다

// new 연산자

function foo () {

}

new foo();

// new 연산자를 호출하면 빈 객체를 만들고 그 객체를 함수에게 전달한다.

fucntion foo() {
  this.obj = 10;
}

// 동적 바인딩

const x = {}

x.name = 10;

// 빈 객체의 name들어간다.

function foo() {
  this.name = 10;
}

const y = new foo();

console.log(y); // {name : 10}

if (y instanceof foo) {

}
// y가 foo 함수에서 만들어진 것인지 확인

// es6엔 class 등장. 내부적으론 함수다

class bar {
  constructor() {
    this.name = 10;
  }
}

console.log(new bar())

// 위의 방법보다 클래스를 활용하면 훨씬 명시적이다
// foo 함수엔 new 연산자를 강제할 수는 없지만 bar는 클래스여서 new로만 호출할 수 있다.

// this , 함수 합성, closure

// 실행 컨텍스트

const person = {
  name: '최재욱',
  getName() {
    return this.name;
  }
}

cosole.log(person.getName())
// 최재욱

// javscript 엔진이 실행될 때 ( 호출하는 순간 ) 소유자를 확인한다

const man = person.getName;

console.log(man())
// 실행되지 않음. man에 담길 때 소유자가 벗겨져서 확인되지 않기 때문
// 소유자가 확인되지 않으면 window 객체에

button.addEventListener('click', person.getName)
// man에 넣는 것과 마찬가지

button.addEventListener('click', person.getName.bind(person))
// 모든 함수가 제공하는 helper함수 bind로 소유자를 입력값 객체로 바인딩 해주면 문제를 해결할 수 있다, call, aplly도 확인 필요

// 클로져

function foo(x){
  return function bar() {
    return x;
  }
}

// 스코프가 존재하는데 클로져라는 것이 값을 보호하기 위해

const f = foo(10);

console.log(f())
// 10

const person = {
  age: 10,
}

function makePerson() {
  let age = 10;
  return {
    getAge(){
      return age;
    },
    setAge(x) {
      age = x > 1 && x < 130 ? x : age
    }
  }
}

let p = makePerson();

console.log(p.getAge())

// 클로져

// 호이스팅

// 비동기

1. 콜백 함수 활용

setTimeout(function (x) {
  console.log('실행')
  setTimeout(function (y) {
    console.log('다시')
  })
}, 5000);

// 콜백지옥

2. promise

const p1 = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve('응답1');
  }, 1000);

  reject();
})

const p2 = new Promise((resolve, reject) => {
  setTimeout(() => {
    resolve('응답2');
  }, 1000);
})

p1
  .then(p2)
  .then(function (r) {
     console.log(r);
  }).catch(function () {

  })

// 프라미스에 인자로 넘겨준 함수는 즉시 실행된다.
// resolve 를 호출하면 then 안에 기술된 함수를 호출한다
// reject 를 호출하면 catch안에 기술된 함수를 호출한다

3. async

const delay = ms => new Promise(resolve => setTimeout(resolve, ms))

async function main() {
  console.log('1');
  try {
    await delay(2000);
  } catch (e) {
    console.error(e);
  }
  console.log('2');
}

// await = 지시어. promise 객체가 resolve가 실행됐을 때 그 값이 넘어온다. reject가 실행되면 try catch에 잡힌다

// generator

```

### redux

앱 - 수많은 ui 조각들의 합

서로 다른 ui에서 함께 사용하려는 data가 있을 경우 처리가 힘듦

한 곳에 몰아넣고 모두에게 주는 컨셉을 생각함. 다만 데이터가 변경될시 그걸 사용하는 모든 컴포넌트가 변경되야 하는 한계 때문에 실행되진 못함

그러나 react가 virtual dom 컨셉을 들고 등장함. flux도 redux로 개선해서 등장

#### redux 만들기

```js
// redux.js

export function createStore(reducer) {
  let state;
  const listeners = [];
  const getState = () => ({ ...state });

  const dispatch = (action) = {
    state = reducer(state, action);
    listeners.forEach((fn) => fn());
  }
  const subscribe = (fn) => {
    listeners.push(fn);
  }
  return {
    getState,
    dispatch,
    subscribe,
  };
}
```

```js
// index.js
import { createStore } from "./redux";

const INCREMENT = "increment";
const RESET = "reset";

function reducer(state = {}, action) {
  if (action.type === INCREMENT) {
    return {
      ...state,
      count: state.count ? state.count + 1 : 1,
    };
  } else if (action.type === RESET) {
    return {
      ...state,
      count: 0,
    };
  }
}

const store = createStore(reducer);
// 상태를 바꿔주는

function update() {
  console.log(store.getState());
}

store.subscribe(update);

function actionCreator(type, data) {
  return {
    ...data,
    type: type,
  };
}

function increment() {
  store.dispatch(actionCreator(INCREMENT));
}

store.getState();
// store.person = {}
// 위와 같이 컴포넌트가 직접적으로 데이터를 바꾸는 위와 같은 일은 할 수 없게 해야한다. 다른 컴포넌트에서 값이 바뀌었다는 걸 알 수 없기 때문
```

## 3일차

### react

브라우저는 태그를 화면에 그려주는 역할을 한다. 그러나 태그는 따지자면 그냥 문자열이다. 이를 바로 브라우저에 그리는 건 힘든 일이기 때문에 브라우저는 태그를 DOM Tree로 만들고 이를 가지고 브라우저에 입력한 내용을 그린다. React의 Virtual DOM도 이와 비슷한 컨셉이다. 은 Real DOM을

```js
// App.js

/* @jsx createElement */
import { createElement, render } from "./tiny-react";

function Hello(props) {
  return <li className="item">{props.label}</li>;
}

function App() {
  return (
    <div>
      <h1>hello world</h1>
      <ul className="board" onClick={() => null}>
        <Hello label="Hello" />
        <Hello label="World" />
        <Hello label="React" />
      </ul>
    </div>
  );
}

render(<App />, document.getElementById("root"));

// tiny-react.js

function renderElement(node) {
  if (typeof node === "string") {
    return document.createTextNode(node);
  }

  if (node === undefined) return;

  const $el = document.createElement(node.type);

  node.children.map(renderElement).forEach((node) => {
    $el.appendChild(node);
  });

  return $el;
}

export function render(vdom, container) {
  container.appendChild(renderElement(vdom));
}

export function createElement(type, props, ...children) {
  if (typeof type === "function") {
    return type.apply(null, [props, ...children]);
  }
  return { type, props, children };
}
```

## 4일차
