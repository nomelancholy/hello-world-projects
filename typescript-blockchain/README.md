# 타입스크립트 - 블록체인

[타입 스크립트로 블록체인 만들기](https://academy.nomadcoders.co/courses/enrolled/303219) 강의를 보고 실습한 저장소 입니다

## 타입스크립트란?

javascript 의 superset
컴파일하면 javascript가 나온다.

엄격한 규칙이 없는 javascript의 장점이자 단점을 보완하기 위해 탄생

## 타입스크립트 설치

- yarn 초기화

```cmd
yarn init
```

- typescript 설치

```cmd
yarn global add typescript
```

- tsc watch 설치 (live reload)

```cmd
yarn add tsc-watch --dev
```

- tsconfig.json 생성 및 설정

[tsconfig.json](./tsconfig.json) 파일 참고

[공식문서](https://www.typescriptlang.org/docs/handbook/tsconfig-json.html) 참고

- package.json script 설정

[package.json](./package.json) 파일 참고

## types

string, number 등 기본 자료형을 명시해 줄 수 있다.

## interface

객체의 자료형을 명시할 때와 같은 경우에 사용한다. javascript로 컴파일 되지 않는다.

## class

정의한 내용이 js로도 컴파일 되야 할 경우엔 class를 사용할 수 있다. (private으로 선언한 속성의 경우엔 컴파일 되지 않음)
