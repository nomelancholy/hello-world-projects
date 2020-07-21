# React Context AP

## 개요

[리액트 Context API 40분 마스터하기](https://academy.nomadcoders.co/courses/enrolled/324423) 실습 코드 저장소입니다.

## 진행 및 학습 내용

1. setup

2. Creating the Store

    React.createContext(null) 활용해 Store 생성

    Store.Provider로 활용

3. Consuming the Store

    state를 value로 주입하고

    Store.Consumer 활용해 사용

    Counsumer의 child 함수는 함수여야만 한다.

    Store를 Provide하는 쪽에서 componentDidMount 등의 생명주기 함수를 활용해서 state를 변경해도 잘 반영된다

4. Updating the Store

    event를 주입할 수도 있다.

    단 이 때 사용할 이벤트는 render 함수 내부에 정의해서 전달해야 한다.

5. Rendering the Notifications

    state를 활용해 컴포넌츠를 렌더링 하는 것도 가능

6. Counting Unseen Notifications

    이벤트로 상태 변경

7. Deleting and Seeing Notifications

    이벤트로 상태 변경
