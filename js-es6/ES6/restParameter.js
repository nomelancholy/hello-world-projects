function printYears(years) {
    console.log(years);
    // 2000
}

printYears(2000, 2001, 2010, 2015, 2018);

function printYearsWithRestParameter(...years){
    console.log(years);
    // [ 2000, 2001, 2010, 2015, 2018 ]
}

printYearsWithRestParameter(2000, 2001, 2010, 2015, 2018);