# 정규표현식

이고잉님의 [정규표현식](https://opentutorials.org/course/909/5142) 강의 실습 코드입니다

## 참조 사이트

[zbon](http://zvon.org/comp/r/tut-Regexp.html#Pages~Page_1)

### 정규표현식 패턴들

- 정규표현식은 대소문자와 띄어쓰기를 구분한다
- ^ : 시작 위치에 있는 문자를 찾을 때 사용한다
- $ : 끝나는 위치에 있는 문자를 찾을 때 사용한다
- \ : 뒤에 오는 문자를 정규표현식 패턴이 아닌 단순 문자로 인식하게 할 때 사용한다 (escape)
- . : 모든 문자를 찾을 때 사용한다
- [] : 특정 문자 후보군을 의미할때 사용한다. 문자를 명시할 수도 있고 -를 활용해 범위를 지정할 수도 있다. ^을 [] 안에서 사용하면 부정의 의미를 가진다.
- | : 또는의 의미로 사용한다
- () : 서브패턴

### 예제

'''
1단계 new_id의 모든 대문자를 대응되는 소문자로 치환합니다.
2단계 new_id에서 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자를 제거합니다.
3단계 new_id에서 마침표(.)가 2번 이상 연속된 부분을 하나의 마침표(.)로 치환합니다.
4단계 new_id에서 마침표(.)가 처음이나 끝에 위치한다면 제거합니다.
5단계 new_id가 빈 문자열이라면, new_id에 "a"를 대입합니다.
6단계 new_id의 길이가 16자 이상이면, new_id의 첫 15개의 문자를 제외한 나머지 문자들을 모두 제거합니다.
     만약 제거 후 마침표(.)가 new_id의 끝에 위치한다면 끝에 위치한 마침표(.) 문자를 제거합니다.
7단계 new_id의 길이가 2자 이하라면, new_id의 마지막 문자를 new_id의 길이가 3이 될 때까지 반복해서 끝에 붙입니다.
'''

'''js
function solution(new_id) {
    
    let step1 = new_id.toLowerCase();
    // console.log('step1 : ',step1);
    let step2 = step1.replace(/[^a-z|0-9|\-|\_|\.]|/gi,'');
    // console.log('step2 : ',step2);
    let step3 = step2.replace(/\.\.+/gi,'.');
    // console.log('step3 : ',step3);
    let step4 = step3.replace(/^\.|\.$/, '')
    // console.log('step4 : ',step4);
    let step5 = step4.length === 0 ? 'a' : step4;
    // console.log('step5 : ',step5);
    let step6 = step5.length > 15 ? step5.substring(0,15) : step5;
    // console.log('step6 : ',step6);
    // console.log('step6.length', step6.length)
    let step6sub = step6.replace(/\.$/,'');
    let step7 = step6sub;
    
    if(step7.length <= 2){
        let lastChar = step7.charAt(step7.length - 1)
        // console.log('lastChar',lastChar)
        while(step7.length <3){
            step7 = step7.concat(lastChar)
        }
    }
    
    console.log('step7 : ',step7);
    
    var answer = step7;
    return answer;
}
'''