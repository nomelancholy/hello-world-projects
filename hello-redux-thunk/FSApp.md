# FSApp 이해

## Next JS

### 특징

- react 기반 프레임 워크
- Server Side Rendering, SEO 등에 강점이 있다

### react와 다른 주요 개념

- 폴더 구조로 간단하게 라우팅을 처리할 수 있다.
- [id]를 활용해 간단하게 동적 라우팅을 처리할 수 있다.
  - 페이지간 이동은 next/link에 있는 Link를 사용해 href로 이동하거나 next/router에 있는 useRouter() 를 활용해 router를 생성, push 메소드로 이동하거나 Router로 이동해야 한다.
- 모든 페이지를 사전에 렌더링 한다. 종류는 정적 생성과 ServerSideRendering이 있다.

  - 정적 생성 : 빌드 될 때 props를 한번 가져오고 그 값은 변하지 않는 정적인 값으로 쓰인다. getStaticProps()로 불러올 수 있다.

  - serverside : 요청할 때 마다 props를 서버에서 가져온다. getServerSideProps()로 불러올 수 있다.

  - useEffect와의 차이 : useEffect는 컴포넌트가 마운트 된 후 클라이언트 사이드에서 일어나는 과정이고 preRender는 그 전에 일어난다.

  - getSTaticProps와 getServerSideProps 디버깅 방법 : exppress를 같이 쓰는 custom app이라 어떻게 해야 할지..?

## Redux, Redux-Thunk

### 특징

- Redux는 중앙에서 state를 관리한다.
- Redux-Thunk는 Redux middleware로 Redux를 활용한 비동기 작업을 수월하게

### 작동 방식

- (현재 세팅되어 있는 방식 기준)

- state/actions/ 하단에 있는 xxx ActionConstants에 관리할 Action 명을 정의한다.

- 같은 폴더의 xxxActionCreators에 비동기 작업을 처리할 함수를 정의한다.(axios 처리 방식, parameter)

- state/reducers/ 하단에 있는 xxxReducer, switch ~ case 문에 있는 Case 부분에 Action 명에 따라 추가적으로 작업할 것들을 수행하고 redux store에 저장할 state들과 그 상태를 정의해 return 한다.

- xxxActionCreators로 돌아와서, then 절에는 성공시 수행할 작업을 정의한 type(action명)과 payload를 파라미터로 넣고 dispatch함수를 호출한다. 그럼 값을 수행하고 store의 state 들을 변경한다.

- 화면에서는 xxxActionCreators에 있는 메소드를 파라미터와 타입을 집어 넣어 호출해 부른다.

- 위와 같은 과정을 거쳐 변경된 store의 state는 각 컴포넌트 하단에 정의된 connect()() 함수로 인해 컴포넌트로 주입되고, 따라서 컴포넌트의 파라미터로 들어오는 props에서 확인할 수 있다.

## Next with Redux

- Next에서 Redux를 사용하기 위해 Next-redux-wrapper를 사용한다.

## 오류

- spot : gnb를 통해 이동할 때 spot.js를 불러오면 head 내용이 날아간다. (js 모듈을 못 불러와서 naver undefinded 오류 발생)
- index : gnb를 통해 이동하면 가끔 user not defined 발생 (index.js 16번째 줄) 컴포넌트에 들어오는 props를 못 찾음 (link 방식 변경 후 수정 완료)

## 회의 정리

1. 첫째주는 프로젝트 전체 구조와 next, redux-thunk 파악하는 데 집중

2. redux-thunk 작동 방식은 이해가 되서 다래님이 요청하신 부분은 어느 정도 처리 (feature-user branch - 문의하기 상위 카테고리 요청해서 하위 카테고리 보여주는 부분은 기획 미정으로 미진행 )

3. getStaticProps는 거의 쓰는 곳이 없고 getServerProps도 initialize 할 때만 사용하고, 거의 useEffect로 처리하던데 문제가 없는지

4. 일례로 notification count를 일단 useEffect로 컴포넌트 마운트 될 때 불러와서 header에 아래 보여지도록 세팅했는데 이것보다는 getServerSideProps로 가져오는 게 맞을 것 같아 시도했지만 디버깅이 잘 안되서 어려움. initialize.js 보면 context를 파라미터로 넘겨서 처리하는 부분들이 있던데 노하우 공유 필요

5. action을 활용해 redux-thunk로 부르지 않고 컴포넌트 내 useEffect에서 바로 axios 요청 후 처리하는 부분들이 좀 있는데 아마 리팩토링 필요할 듯

6. next-redux-wrapper 사용한 이유는 알겠는데 express 붙여서 server.js 구성한 이유가 궁금. admin도 redux 붙여야 할텐데 동일하게 세팅해야 할지 문의

7. 당장 이번 스프린트 이슈는 아닌데 gnb로 이동시 spot 부분 클릭하면 naver undefinded 에러 발생. 페이지가 바로 에러 페이지로 넘어가서 브라우저에서 console 보면 meta 태그가 날아간 것 처럼 보이지만 head.js에서 props를 console로 찍어보면 script 태그도 잘 들어간 것 확인 됨.

아마 타이밍이 안 맞아서 스크립트로 불러온 네이버 지도 객체를 좌표 이동될 때 마다 작동하는 useEffect에서 확인하지 못하는 것 같은데 원인을 모르겠음.

react-naver-maps로 변경하는 것도 고려해서 작은 next app 만들어서 붙여보려 했는데 잠깐 테스트한 거라 확실하진 않지만 next에선 에러 발생하면서 잘 붙지 않음. help 필요 (index에서 user undefinded 에러 나던 부분은 gnb에서 next/router로 이동하게 변경 후 해결)

7. admin redux 세팅
