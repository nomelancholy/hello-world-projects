# webpack-build-practice
## 🚀개요
---
[React 개발 환경을 구축하면서 배우는 웹팩(Webpack) 기초](https://velog.io/@jeff0720/React-%EA%B0%9C%EB%B0%9C-%ED%99%98%EA%B2%BD%EC%9D%84-%EA%B5%AC%EC%B6%95%ED%95%98%EB%A9%B4%EC%84%9C-%EB%B0%B0%EC%9A%B0%EB%8A%94-Webpack-%EA%B8%B0%EC%B4%88#%ED%94%84%EB%A1%9C%EC%A0%9D%ED%8A%B8-%EC%84%A4%EC%A0%95%ED%95%98%EA%B8%B0) 포스팅 실습 코드 저장소입니다

## 🔍 webpack이란?
---

여러개로 나누어져 있는 파일을 하나의 파일로 만들어주는 모듈 번들러의 일종입니다. 모듈 번들러는 하나의 웹페이지에서 수많은 자바스크립트를 각각 요청해 발생하던 비효율을 해결하기 위해 등장하였습니다. 

## 🛴 진행
---

### 1. 프로젝트 설정
- 초기화 
- @babel/core @babel/preset-env @babel/preset-react babel-loader clean-webpack-plugin css-loader html-loader html-webpack-plugin mini-css-extract-plugin node-sass react react-dom sass-loader style-loader webpack webpack-cli webpack-dev-server 설치
### 2. 웹팩으로 자바스크립트 파일 빌드
-  webpack.config.js 작성
    - entry : 빌드할 파일 명시
    - output : 빌드 파일 생성 정보
    - mode : webpack 빌드 옵션 
        - production : 최적화
        - development : 빠르게 빌드
        - none : 아무 기능 없이 빌드
- package.json에 build script 추가
- build 명령어로 webpack 실행
- build/bundle.js 생성 완료
### 3. 웹팩으로 HTML 파일 빌드
> 웹팩에선 loader 를 활용해 자바스크립트가 아닌 파일들도 모듈로 활용할 수 있다
- index.html 추가
- webpack.config.js 수정
    - module - html-loader 추가 
    - HtmlWebPackPlugin 추가
- yarn build
### 4. 웹팩으로 리액트 빌드
- index.js / Root.js 생성
- .babelrc 생성 후 presets 추가
- webpack.config.js 수정
    - entry : index.js로 수정
    - babel-loader 추가
- yarn build
### 5. 웹팩에서 css 사용
- style.css 생성 
- Root.js에 import
- webpack.config.js 수정
    - css-loader 추가
    - build시 css 파일을 추출해 저장하게 해주는 MiniCssExtractPlugin 추가
- yarn build
### 6. 웹팩에서 scss 사용
- style.scss 생성
- Root.js에 import
- webpack.config.js 수정
    - sass-loader 추가
- yarn build
### 7. 웹팩 개발 서버 적용
- webpack.config.js 수정
    - dev-server 추가
- package.json 수정
    - start script 추가
- yarn start
### 8. 빌드 디렉터리 깨끗하게 하기
- webpack.config.js 수정
    clean-webpack-plguin 추가
- yarn build
### 9. 웹팩 빌드 모드 나누기
- mode를 development / productiondm으로 나눠 
    - config/webpack.config.dev.js 
    - config/webpack.config.prod.js 생성
- package.json 수정
    - start, build script 수정