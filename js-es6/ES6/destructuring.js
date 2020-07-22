// - 객체 비구조화 ( Object Destructuring )

// 객체에 들어있는 값들 각각을 꺼내 쓸 수 있다.

const address = {
    country: 'South Korea',
    city : 'Seoul',
    street: 'Gangnam',
    str_num: 141,
    postcode:'00510',
  }
  
  const { country, city, street, str_num, postcode } = address;
  
  console.log(country);
  // South Korea
  console.log(city);
  // Seoul
  console.log(street);
  // Gangnam
  console.log(str_num);
  // 141
  console.log(postcode);
  // 00510

//   - 객체 리터럴 ( Object Literal )

//   ES6에선 객체 프로퍼티 이름이 로컬 변수 이름과 같으면 콜론과 값 없이 작성해도 된다.  
//   값을 직접 명시해주는 경우와 함께 사용할 수도 있다

function getAddress(country, city, street) {
    const myAddress  = {
      country, 
      city, 
      street,
      str_num:888,
      postcode: '9999'
    };
    console.log(myAddress);
    // { country: 'Korea',
    //   city: 'Seoul',
    //   street: 'Euncheon',
    //   str_num: 888,
    //   postcode: '9999' }
  }
  
  getAddress('Korea','Seoul','Euncheon');