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
