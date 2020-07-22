// Spread Operateor

let years = [2001, 2010,2015, 2018];
let yearsCp = [2000, ...years, 2020];

let newArr = [2000, 2020];

concatArr = newArr.concat(years);

console.log(concatArr);

console.log(yearsCp);

let koreanHistory = {
    liberate : 1945,
    625: 1950
};

let worldHistory = {
    worldWar1: 1914,
    worldWar2: 1945,
}

let history = {...worldHistory, ...koreanHistory}

console.log(history);

console.log(worldHistory);

console.log(koreanHistory);

// const assignObj = Object.assign(worldHistory,koreanHistory);

// console.log(assignObj);

// console.log(koreanHistory);

// console.log(worldHistory);

