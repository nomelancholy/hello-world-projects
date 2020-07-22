# React Redux

## 소개

이고잉님의 [React-Redux](https://opentutorials.org/module/4518) 수업을 보고 실습한 내용입니다

## 학습내용

### React App Without Redux

컴포넌트 간의 State 전파가 Props로 이뤄진다 (복잡성 증가)

### React App With Redux

컴포넌트 간의 State 전파가 Store를 통해 바로 이뤄진다 (복잡성 감소)

그러나 store 제어를 컴포넌트 내부에 명시해뒀기 때문에 컴포넌트의 재사용성이 사라진다

```js

const AddNumber = () => {

    const [size, setSize] = useState(1);
    const handleChange = (e) => {
        setSize(Number(e.target.value));
    }

    const handleClick = () => {
        let action = {type:'INCREMENT', size: size}
        store.dispatch(action)
    }

    return (
        <div>
            <h1>Add Number</h1>
            <button onClick={handleClick}>+</button>
            <input type="text"
                value={size}
                onChange={handleChange}
            />
        </div>
    )
}

// 다른 곳에서 사용할 땐 INCREMENT하고 싶지 않을 수도 있는데 명시되어 있어서 변경할 방법이 없다
```

### React App With Redux, Container / Presentational Pattern

React Component에 Container / Presentainer 패턴을 도입하면 위의 문제를 해결할 수 있다.

- Container 컴포넌트 : Redux의 Store를 핸들링하는 역할을 담당

- Presentational 컴포넌트 : Redux에 종속되지 않고 화면에 무언가를 표현하는 역할을 담당

### React App with React-Redux

Container / Presentational Pattern을 도입하며 재사용성 문제는 해결했지만 코드량이 급격히 증가했고 Root - Container - Presentational Component간에는 Props를 활용해 state를 전파하게 돼버렸다. 이런 문제를 해결하기 위해 등장한 것이 React-Redux다.

#### connect & provider

- connect()를 실행하면 함수가 Return된다. 그 함수에 Wrapping할 컴포넌트를 인자로 넣어 다시 실행해주면 Container Component와 같이 Wrapping된 Component가 return 된다. 이를 export 해주면 직접 Container Component를 만들어 export 시킨 것과 동일하게 사용 가능한다.

```js
import DisplayNubmer from '../components/DisplayNumber'
import { connect } from 'react-redux';
export default connect()(DisplayNubmer);
```

위의 코드는

```js
import React, { useState, useEffect } from 'react';
import DisplayNubmer from '../components/DisplayNumber'
import store from '../store'

const DisplayNumberContainer = () => {

    const [number, setNumber] = useState(0);
    useEffect(() => {
      store.subscribe(() => {
        setNumber(store.getState().number)
      })
    }, []);

    return (
        <DisplayNubmer number={number} />
    )
}

export default DisplayNumberContainer;
```

이 코드와 같다

- Provider

react-redux를 사용하면 store를 모든 컴포넌트마다 선언해 줄 필요가 없다. index.js에서 App Component를 Provider로 감싸고 거기에 store를 주입해주면 모든 컴포넌트에서 store에 접근할 수 있게 된다

```js
import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';
import App from './App';
import { Provider } from 'react-redux';
import store from './store'

ReactDOM.render(
  <Provider store={store}>
    <App />
  </Provider>,
  document.getElementById('root')
);
```

#### mapStateToProps

connect 첫번째 괄호의 첫번째 인자로 전달된다. mapReduxStateToReactProps가 좀 더 정확한 느낌이다. return 값으로 객체를 주고, property의 이름은 presentational 컴포넌트에 전달하려는 props 이름으로 props를 전해줘야 한다. 호출될 때 redux store의 state값을 인자로 받도록 약속되어 있다.

#### mapDispatchToProps

connect 첫번째 괄호의 두번째 인자로 전달된다.mapReduxDispatchToReactProps가 좀 더 정확한 느낌이다. 역시 return 값으로 객체를 주고, presentational 컴포넌트에 전달하려는 event props 이름으로 함수를 전해줘야 한다. 호출될 때 redux store의 dispatch 함수를 인자로 받도록 약속되어 있다.

### react-redux의 내부 코드

[link](https://gist.github.com/gaearon/1d19088790e70ac32ea636c025ba424e)
