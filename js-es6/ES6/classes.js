//es5

function Animal() {
    this.type = 'chosic';
    this.tail = false;
}

Animal.prototype.setType = function (type) {
    this.type = type;
}

Animal.prototype.getType = function () {
    return this.type;
}

// es6

class Ani {
    constructor(type,tail){
        // 생성자 지원
        this.type = type;
        this.tail = tail;
    }

    cry(value = 'Woof Woof'){
        // 메소드 지원
        console.log(value);
    }

    static instance(){
        // static 함수도 지원
        console.log('instance!!');
    }
}

let dog = new Ani('Dog',true);
console.log(dog);
// Ani { type: 'Dog', tail: true }

dog.cry('woof');
// woof

Ani.instance();
// instance!!

// 상속도 지원
class Cat extends Ani{
    constructor(type,tail,color){
        super(type,tail);
        this.color = color;
    }

    cry(value = 'Meow Meow'){
        // 메소드 오버라이딩도 지원
        console.log(value);
    }
}

let cat = new Cat('Cat', true, 'yellow');
console.log(cat);
// Cat { type: 'Cat', tail: true, color: 'yellow' }
cat.cry();
// Meow Meow