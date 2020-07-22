const defaultValue = [
    {
        year: 2000,
        data: '크리스마스',
    },
    {
        year: 2001,
        data: '로스트메모리즈',
    },
    {
        year: 2002,
        data: '월드컵',
    },
    {
        year: 2015,
        data: '리액트네이티브',
    },
    {
        year: 2019,
        data: '올해',
    },
];

function printYears(years = defaultValue){
    // default Value를 default Parameter로 설정해줄 수 있다
    console.log(years)
}

console.log('인자 없이 호출')
printYears();

// 인자 없이 호출
// [ { year: 2000, data: '크리스마스' },
//   { year: 2001, data: '로스트메모리즈' },
//   { year: 2002, data: '월드컵' },
//   { year: 2015, data: '리액트네이티브' },
//   { year: 2019, data: '올해' } ]

console.log('인자 넣고 호출')
printYears({
    year:1864,
    data:'크리스마스',
});

// 인자 넣고 호출
// { year: 1864, data: '크리스마스' }