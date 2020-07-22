# react-testing-library 를 사용한 리액트 테스트

## [리액트 컴포넌트 테스트](https://velog.io/@velopert/react-testing-library)

### 진행 및 학습 내용

#### setup

yarn add @testing-library/jest-dom @testing-library/react -D

src/setupTests.js에

```js
import '@testing-library/react/cleanup-after-each';
import '@testing-library/jest-dom/extend-expect';
```

#### 첫 테스트

react-testing-library에서 컴포넌트를 렌더링 할 때에는 `render()` 함수 사용
이 함 수의 결과물에는 DOM을 선택할 수 있는 다양한 쿼리들과 container(최상위 DOM)가 포함되어 있다.

- 스냅샷 테스팅

container를 활용해 스냅샷 테스트를 할 수 있다.

스냅샷 업데이트는 u 버튼을 눌러 가능하다.

- 다양한 쿼리

dom-testing-library 는 다양한 쿼리들을 지원한다.

이 쿼리들은 Variant 와 Queries의 조합으로 이루어져 있다.

자세한 건 [포스팅](https://velog.io/@velopert/react-testing-library) 참조

#### 이벤트 다루기

이벤트 발생은 `fireEvent()` 함수를 활용한다.

```js
fireEvent.이벤트이름(DOM, 이벤트객체);
```

clcik 이벤트가 아닌 경우엔 다음과 같이 이벤트 객체를 넣어줘야 한다.

```js
fireEvent.change(myInput, { target: { value: 'hello world' } });
```

## [Todo List 만들기 실습](https://velog.io/@velopert/tdd-with-react-testing-library)

---

### 실습 순서

Test 코드 작성 -> 통과 코드 작성 -> 리팩토링

form UI 구성

input attr

submit 이벤트 ( `jest.fn()` 은 jest에서 제공하는 mock 함수. 이를 활용하면 `toBeCalled`나 `toBeCalledWith` 같은 matcher를 사용해 어떤 파라미터가 호출되었는지 확인 할 수 있다. )

Refactoring : TodoForm.test.js

TodoItem UI 구성

TodoItem 이벤트 추가

TodoList UI 구성

TodoList 이벤트 추가

TodoApp UI 구성

TodoApp 기본 TodoList 노출

TodoApp TodoItem 추가

TodoApp toggle 기능 추가

TodoApp 삭제 기능 추가

Refactoring

## [비동기 테스트](https://velog.io/@velopert/react-testing-library-%EC%9D%98-%EB%B9%84%EB%8F%99%EA%B8%B0%EC%9E%91%EC%97%85%EC%9D%84-%EC%9C%84%ED%95%9C-%ED%85%8C%EC%8A%A4%ED%8A%B8)

