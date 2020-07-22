# Redux

## 소개

이 저장소는 이고잉님의 [redux강의](https://opentutorials.org/module/4078/24935) 를 보고 실습한 저장소입니다

## 학습내용

## 1 . 이론

### store

글로벌한 State 저장소

state, reducer, subscribe, dispatch, getState 모두 store에 속해있다

### state와 render

render : 현재 state를 반영한 UI를 만든다.

과정

```js
render -> store.getState() /* state에 직접 접근은 금지 되어 있기 떄문에 */ -> state를 가져옴 -> store.getState() -> render -> UI
```

subscribe : State값이 바뀔 때 마다 render 함수를 호출하는 역할을 한다. 아래와 같이 등록한다

```js
// render -> subscribe

store.subscribe(render);
```

### action과 reducer

action : click 혹은 change로  이벤트 실행시에 dispatch에게 전달되는 객체

```js
<form onsubmit="  
    ///...
    store.dispatch({type:'create', payload:{title:title, desc:desc}});
                    // type과 payload를 담고 있는 위의 객체 부분
">
```

dispatch : 두가지 역할을 한다

1. reducer를 호출해서 state의 값을 바꾼다. 이 때 전달하는 값은 현재 state의 값과 action 데이터 두개다.

    reducer : state를 입력받고 action을 참조해서 새로운 state를 가공하는 가공자

2. state값이 변경되면 subscribe에 등록되어 있는 구독자들의 render를 전부 호출해서 UI가 업데이트 되도록 해준다.

### Redux 사용시 장점

1. 중앙 집중적 data store를 통해 애플리케이션을 쉽게 개발할 수 있다.

2. redux-devtool을 활용해 시간 여행을 할수 있다

## 2. 실습

### store 생성

`Redux.createStore` 로 스토어를 생성한다. 이 인자로는 reducer를 넘겨주고 reducer는 기존 state값과 action을 받는다. 만약 기존에 정의된 state값이 없다면 (undefined 라면) return으로 초기값을 세팅해준다. 위와 같이 설정한 state를 getState() 로 가져올 수 있다

```js
function reducer(state, action) {
    if (state === undefined) {
        return { color: 'yellow' }
    }
}

var store = Redux.createStore(reducer);
console.log(store.getState());
```

### reducer와 action 이용해 새로운 state 만들기

store의 state를 변경하고 싶다면 `store.dispatch()` 를 활용해 action을 전달한다. 이때 type은 필수적으로 포함되어야 한다.

```html
<input type="button" value="fire" onclick="
                        store.dispatch({type:'CHANGE_COLOR', color: 'red'});
                    ">
```

dispatch를 호출하면 store를 생성할 때 제공한 reducer를 호출하도록 약속되어 있다. 이 때 기존의 state값과 입력한 action을 인자로 준다. 그렇기에 reducer 내부에서 action 내부의 type에 따라 변경할 내용을 입력해두면 의도한대로 state를 제어할 수 있다.

```js
    if(action.type === 'CHANGE_COLOR'){
        newState = Object.assign({}, state, {color:'red'});
    }
```

위에서 newState값을 직접 바꾸지 않고 `Object.assign()` 을 활용해 복제해서 입력하는 것은 redux의 고급 기능들의 혜택을 누리기 위함이다. ( 자세한 내용은 불변성 관련 내용 확인 필요 - [강의](https://opentutorials.org/module/4075) )

### state의 변화에 따라 UI 반영하기

위의 과정을 거쳐 변경된 newState를 render에 반영하기 위해선 그 render 함수를 store가 구독하고 있으면 된다.

```js
store.subscribe(red);
```

위와 같이 등록해놓으면 관련된 state가 변경될 때 마다 render 함수가 새로 호출된다
