# React Hooks 강의 실습 Repo

Nomad Coder의 [실전형 리액트 Hooks 강의](https://academy.nomadcoders.co/courses/enrolled/546456)를 듣고 실습한 저장소입니다.

## 학습 내용

### Hooks란

Functional Component가 State를 가질 수 있게 해준다

ex)

[기존의 Class Component](./src/ClassComponent.js)

[Hooks를 활용한 Functional Components](./src/FunctionalComponents.js)

### useState

초기 값을 넣어주면 state와 setState를 배열로 리턴한다

```js
const [state, setState] = useSate(0);
```

- [useInput](./src/UseInput.js) : 검증 기능이 있는 input
- [useTabs](./src/UseTabs.js) : State를 활용해 Tab 제어

### useEffect

componenetWillUnmount, componenetDidMount, componenetWillUpdate와 비슷한 역할을 한다.
(공식문서엔 componentDidMount와 componentDidUpdate, componentWillUnmount가 합쳐진 것으로 생각해도 좋다고 나와 있다.)

첫번째 인자로는 함수를, 두번째 인자로는 dependency를 받는다 ( 이건 없을 수도 있다. 이럴 때는 빈 배열 전달 ) deps가 있다면 리스트에 있는 값이 변할 때만 function이 실행된다.

```js
const sayHello = () => console.log('hello');
useEffect(() => {
    sayHello();
}, []);

```

- [useTitle](./src/UseTitle.js) : useEffect를 활용해 react document의 tilte을 컨트롤
- [useClick](./src/UseClick.js) : element를 클릭하는 시점을 발견하고 useEffect를 활용해 eventListener를 add / remove
- [useFadeIn](./src/UseFadeIn.js) : 어떤 Element든 상관없이 애니메이션을 Element 안으로 서서히 사라지게 만든다
- [useFullScreen](./src/UseFullScreen.js) : 어떤 element든 풀스크린으로 만들거나 일반 화면으로 돌아가게 한다
- [useNetwork](./src/UseNetwork.js) : Online 또는 Offline 상태인지를 감지한다
- [useNotification](./src/UseNotification.js) : notification API를 사용할 때 유저에게 알림을 보내준다
- [useScroll](./src/UseScroll.js) : 스크롤을 사용할 때를 감지해 알려준다
- [usePreventLeave](./src/UsePreventLeave) : 유저가 변경사항을 저장하지 않고 페이지를 벗어나길 원할 때 한번 더 확인한다
- [useConfirm](./src/UseConfirm.js) : 버튼 confrim
- [useBeforeLeave](./src/UseBeforeLeave.js) : 마우스가 브라우저 밖으로 나갈 경우 감지
- [useAxios](./src/UseAxios.js) : axios를 위한 wrapper
