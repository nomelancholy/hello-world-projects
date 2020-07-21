# Enzyme를 활용한 리액트 컴포넌트 테스트

## 개요
---

[Enzyme 을 사용한 리액트 컴포넌트 테스트](https://velog.io/@velopert/react-testing-with-enzyme) 포스팅을 읽고 실습한 저장소입니다.

## 진행 과정 및 학습 내용
---

1. CRA로 프로젝트 설치

2. enzyme, enzyme-adapter-react-16 설치

3. 스냅샷 테스팅

    enzyme-to-json 설치
    
    test를 실행하면 enzyme에 있는 `mount` 함수를 활용해 리액트 컴포넌트를 렌더링 -> 스냅샷으로 저장

    코드 변경시 저장된 스냅샷을 기준으로 테스트

    save시 자동으로 테스트 되고 u를 누르면 스냅샷이 업데이트 된다

4. props 접근

    Enzyme에서는 컴포넌트 인스턴스에 접근할 수 있다. props 값 테스트 가능

5. DOM 확인

    `find` 함수를 활용해 DOM의 특정 엘리먼트 값에도 접근 가능. 
    
    이 때 사용하는 선택자는 CSS에서 활용하는 querySelector와 같다

6. 클래스형 컴포넌트의 테스팅

    enzyme 내부의 `shallow` 함수 활용

    컴포넌트 내부에 또다른 리액트 컴포넌트가 있는 경우  `mount`는 내부 내용까지 전부 렌더링하지만 `shallow`는 이 작업을 생략한다

    `mount` 의 최상위 요소는 컴포넌트 자체지만 `shallow`의 최상위 요소는 div다. 

    `shallow`로 state를 조회할 때는 `state()`를 활용한다.

    내장 메서드를 호출할 때는 `instace()`로 인스터를 조회 후 메서드를 호출할 수 있다.

7. DOM 이벤트 시뮬레이트

    `findWhere()` 함수를 사용해 원하는 버튼 태그를 좀 더 상세한 조건으로 선택할 수 있다.

    `simulate()` 함수의 인자로 'click', 'change' 등을 넣어 이벤트를 시뮬레이트 할 수 있다.

8. 함수형 컴포넌트와 Hooks 테스팅

    Hooks를 테스트 할 때는 `shallow`가 아닌 `mount`를 사용해야 한다. `useEffect` Hook은 `shallow` 에서 작동하지 않고, `shallow` 를 활용하면 클릭 이벤트를 두번 시뮬레이트해도 결과값이 2가 아닌 1이 되기 때문이다.