# gitflow-model 강의

이고잉님의 [git flow model 강의](https://www.youtube.com/watch?v=EzcF6RX8RrQ&t=301s)를 듣고 실습한 저장소입니다.

## git flow

branch를 어떻게 운용할지에 대한 좋은 사례. 하나의 branch model이다

- feature branches : 기능 개발에 branch
- develop :
- release branches : 출시에 사용하는 branch
- hotfixes : 긴급한 수정사항 반영에 사용하는 branch
- master :

## 원칙

1. master branch의 최신 버전은 언제나 실행 가능한 상태여야 한다. 실행 가능한 버전을 만들어가는 과정은 develop branch에서 진행한다
2. 기능 개선을 끝내고 출시 준비를 할 때는 release branch를 활용한다. release에 이상이 없으면 branch를 master로 변경해 merge commit을 남기며 release와 병합하고
3. 추
