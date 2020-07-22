// ArrowFunction

const years = [
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

const result = years.filter(function(data){
    return data.year > 2008;
});

console.log(result);
// [ { year: 2015, data: '리액트네이티브' }, { year: 2019, data: '올해' } ]

const arrowReulst = years.filter((data) => data.year > 2008);

console.log(arrowReulst);
// [ { year: 2015, data: '리액트네이티브' }, { year: 2019, data: '올해' } ]