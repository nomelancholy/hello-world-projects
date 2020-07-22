let map = new Map([['id','test']]);
// map 선언 ( 앞이 key, 뒤가 value가 된다 )
map.set('testId','test');
// map에 key와 value 추가 ( 역시 앞이 key, 뒤가 value가 된다 )

console.log(map);
// Map { 'id' => 'test', 'testId' => 'test' }

console.log(map.get('testId'));
// test
// key에 해당하는 value 출력

console.log(map.size);
// 2
// map 크기 출력

console.log(map.has('testId'));
// true
// map에 특정 key가 있는지 확인

console.log(map.entries());
// [Map Iterator] { [ 'id', 'test' ], [ 'testId', 'test' ] }
// map안의 모든 요소를 key, value 형태의 array로 집어넣은 iterator 반환

console.log(map.keys());
// [Map Iterator] { 'id', 'testId' }
// map안의 모든 key를 반환

console.log(map.values());
// [Map Iterator] { 'test', 'test' }
// map안의 모든 value를 반환

console.log(map.delete('testId'));
// true
// map 안에서 특정 key에 해당하는 key-value쌍 삭제

console.log(map.size);
// 1
map.clear();
// map안의 모든 값 삭제
console.log(map.size);
// 0

// Set

const set = new Set([1,1,1,1,1,1,1,2,4,4,4,3,3,3]);
// set 선언
set.add(4);
set.add(5);
// set에 값 추가
console.log(set);
// Set { 1, 2, 4, 3, 5 }
console.log(set.size);
// 5 

// Set은 중복을 허용하지 않는다

set.delete(5);
// Set에서 특정 값 삭제
console.log(set.size);
// 4
set.clear();
// Set의 모든 값 삭제
console.log(set.size);
// 0