let years = [2001, 2010,2015, 2018];
const str = 'Test';

// es5

// for(변수 in 배열) 을 사용하면 키 값이 출력된다 ( 사용 권장하지 않음 )

for(let year in years){
    console.log(year);
    // 0, 1, 2, 3
}

// forEach의 경우 출력은 똑같이 되지만 가독성이 떨어지고 
// 내부에서 break 문 등을 사용할 수 없다. ( 사용 권장하지 않음 )

years.forEach((year) => {
    console.log(year);
    // 2001, 2010, 2015, 2018
})

// es 6

for(let year of years){
    console.log(year);
    // 2001
    if(year == 2001){
        break;
    }
    // 내부에서 break 문 사용 가능
}

for(let char of str){
    console.log(char);
    // T, e, s, t
}
