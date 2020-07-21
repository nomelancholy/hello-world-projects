# flexbox

## flexbox란

뷰포트 혹은 요소의 크기가 불명확하거나 동적으로 변할 때에도 효율적으로 요소를 배치, 정렬, 분산할 수 있는 방법을 제공하는 CSS3의 새로운 레이아웃 방식

복잡한 계산 없이 요소의 크기와 순서를 유연하게 배치할 수 있는 장점이 있다

## 구성

flexbox는 부모 요소인 flex container와 복수의 자식 요소인 flex item으로 구성된다

`display:flex` 속성이 적용된 요소가 부모인 containter가 되고 그 자식 요소들이 flex item이 된다

flex item의 정렬은 부모인 flex container의 `flex-direction` 속성에 따라 결정된다.

이 때 flex container에서 결정하는 것을 '주축(main axis)'이라고 하는데 따로 지정하지 않으면 웹에서 주축의 기본값은 flex item들을 왼쪽에서 오른쪽으로 흐르게하는 row고 react-native에서 주축의 기본값은 flex item들을 위에서 아래로 흐르게 하는 column이다.

## 부모 요소와 자식 요소에 정의하는 속성 구분

flexbox에서 전체적인 정렬이나 흐름에 관련된 속성은 부모인 flex container에 정의하고 자식 요소의 크기나 순서에 관련된 속성은 flex item에 정의한다. 이를 정리하면 아래와 같다.

- flex container 속성: flex-direction, flex-wrap, justify-content, align-items, align-content
- flex item 속성: flex, flex-grow, flex-shrink, flex-basis, order

## flex

### flex 개념

flex : flex-grow flex-shrink flex-basis (flex item의 크기와 관련된 속성)

- flex-grow

```text
flex item의 확장에 관련된 속성. 0과 양의 정수를 속성값에 사용한다
속성값이 0이면 container의 크기가 커져도 item의 크기가 커지지 않고 원래 크기로 유지된다.
속성값이 1이상이면 item의 원래 크기와 상관없이 container를 채우도록 item의 크기가 커진다
```

- flex-shrink

```text
flex item의 축소에 관련된 속성. 0과 양의 정수를 속성값에 사용하고 기본값은 1이다  
속성값이 0이면 container의 크기가 item보다 작아져도 item의 크기가 줄어들지 않고 원래 크기로 유지된다.
속성값이 1이상이면 container의 크기가 item보다 작아질 때 item의 크기가 container에 맞춰 줄어든다.
```

- flex-basis

```text
flex item의 기본 크기를 결정하는 속성. 기본값은 auto다
flex-basis 속성의 값을 auto로 설정하면 item은 relative flex item이 되어 콘텐츠의 크기를 기준으로 크기가 결정되고
flex-basis 속성의 값을 0으로 설정하면 item은 absolute flex item이 되어 container의 크기를 기준으로 크기가 결정된다.
flex-basis 속성의 값을 30px, 50%같이 설정하면 명시한 크기로 item의 크기가 고정된다
```

- flex : 1

```text
flex : 1 == flex-grow: 1 flex-shrink: 1 flex-basis: 0이 되어  
컨테이너 크기에 따라 item 크기가 결정되고 또 커지거나 작아진다는 의미
```

### flex 축약 설정값 정리

| flex | flex-grow | flex-shrink | flex-basis |
|--|:-:|:--:|:--:|
| initial(기본값) | 0 | 1 |  auto |
| none | 0 | 0 | auto |
| auto | 1 | 1 | auto |
| 양의 정수 | 숫자 | 1 | 0 |

## flex item 정렬

item에 margin을 적용하면 item의 정렬을 쉽게 할 수 있다.

### item을 수평으로 배치하려 할 때

- margin-right: auto: 바깥 여백이 오른쪽의 모든 공간을 차지하기 위해 flex item을 오른쪽에서 왼쪽으로 민다.
- margin: 0 auto: 바깥 여백이 flex item을 양쪽에서 밀기 때문에 flex item이 수평 중앙에 위치한다.
- margin-left: auto: 바깥 여백이 왼쪽의 모든 공간을 차지하기 위해 flex item을 왼쪽에서 오른쪽으로 민다.

### item을 수직으로 배치하려 할 때

- margin-bottom: auto: 바깥 여백이 아래쪽의 모든 공간을 차지하기 위해 flex item을 아래쪽에서 위쪽으로 민다.
- margin: auto 0: 바깥 여백이 flex item을 위아래로 밀기 때문에 flex item이 수직 중앙에 위치한다.
- margin-top: auto: 바깥 여백이 위쪽의 모든 공간을 차지하기 위해 flex item을 위쪽에서 아래쪽으로 민다.

## justify-content

### justify-content 개념

주축을 기준으로 flex item을 정렬한다

### justify-content의 다섯가지 속성 값

- flex-start(기본값): 주축의 시작 부분을 기준으로 flex item을 정렬한다.
- center: 주축의 중앙을 기준으로 flex item을 정렬한다.
- flex-end: 주축의 끝부분을 기준으로 flex item을 정렬한다.
- space-around: 주축을 기준으로 flex item을 일정한 간격으로 정렬한다.
- space-between: 첫 번째와 마지막 flex item은 주축의 시작 부분과 끝부분에 정렬하고 나머지 flex item을 일정한 간격으로 정렬한다.

## align-items

### align-items 개념

교차축을 기준으로 flex item을 정렬한다

### align-items의 다섯가지 속성 값

- stretch(기본값): flex item의 높이를 늘려 flex container의 전체 높이를 채운다.
- flex-start: 교차축의 시작 부분을 기준으로 flex item을 정렬한다.
- center: 교차축의 중앙을 기준으로 flex item을 정렬한다.
- baseline: 글꼴의 기준선인 baseline을 기준으로 flex item을 정렬한다.
- flex-end: 교차축의 끝부분을 기준으로 flex item을 정렬한다.

## 실습 목록

- [레이아웃 1 - 스크롤 없는 100% 레이아웃](./src/flex-layout01.html)
- [레이아웃 2 - 내비게이션 영역](./src/flex-layout02.html)
- [레이아웃 3 - 브라우저 화면 아래에 붙는 푸터](./src/flex-layout03.html)
- [레이아웃 4 - 정렬이 다른 메뉴](./src/flex-layout04.html)
- [레이아웃 5 - 폼 레이블 수직 중앙 정렬](./src/flex-layout05.html)
- [레이아웃 6 - 중앙 정렬 박스](./src/flex-layout06.html)
- 레이아웃 7 - 유동 너비 박스
- 레이아웃 8 - 말줄임과 아이콘
- 레이아웃 9 - 위아래로 흐르는 목록
- 레이아웃 10 - 가로세로 비율을 유지하는 반응형 박스
- Holy Grail layout

## 참조

[flexbox로 만들 수 있는 10가지 레이아웃](https://d2.naver.com/helloworld/8540176)
[생활코딩 - flex](https://opentutorials.org/course/2418/13526)

[7](https://codepen.io/witblog/pen/oPyvEa)
[8](https://codepen.io/witblog/pen/eLKOrG)
[9](https://codepen.io/witblog/pen/vzrBVw)
[10](https://codepen.io/witblog/pen/LJrPoq)
