# gitflow-model 강의

이고잉님의 [git flow model 강의](https://www.youtube.com/watch?v=EzcF6RX8RrQ&t=301s)를 듣고 실습한 저장소입니다.

## git flow

branch를 어떻게 운용할지에 대한 좋은 사례. 하나의 branch model이다

- feature branches : 기능을 개발하는 브랜치
- develop : 다음 출시 버전을 개발하는 브랜치
- release branches : 이번 출시 버전을 준비하는 브랜치
- hotfixes : 출시 버전에서 발생한 버그를 수정하는 브랜치
- master : 제품으로 출시될 수 있는 브랜치

## 활용 방법

1. master 브랜치의 최신 버전은 언제나 실행 가능한 상태여야 한다. 다음 버전을 만들어가는 과정은 develop 브랜치에서 진행한다. 즉 develop 브랜치는 master에서부터 시작된 브랜치다.
2. develop 브랜치에서는 상시로 버그를 수정한 커밋들이 추가된다. 새로운 기능 추가 작업이 필요할 경우 develop 브랜치에서 feature 브랜치를 생성해 진행한다. 작업이 완료되면 develop 브랜치는 feature 브랜치를 merge한다.
3. 모든 기능이 merge되어 QA를 진행해야 할 때는 release 브랜치를 활용한다. 이 때 발생한 버그들은 release 브랜치에서 수정한다. qa를 무사히 통과하면 release 브랜치를 master와 develop 브랜치로 merge 한다. 이 때 master 브랜치에는 버전 태그를 추가하고, merge commit 이 남도록 한다.
4. master 브랜치에서 긴급한 수정이 필요할 경우엔 hotfix 브랜치를 활용한다.
