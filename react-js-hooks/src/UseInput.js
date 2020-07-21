import React, { useState } from 'react';

const useInput = (initialValue, validator) => {
    const [value, setValue] = useState(initialValue);
    const onChange = event => {
        const {
            target: { value }
        } = event;
        let willUpdate = true;
        if (typeof validator === "function") {
            willUpdate = validator(value);
        }
        if (willUpdate) {
            setValue(value);
        }
    }
    return { value, onChange };
}

const UseInput = () => {
    const maxLen = value => value.length <= 10;
    const name = useInput("Mr.", maxLen);
    return (
        <div>
            <h1>hello</h1>
            {/* <input value = {name.value} onChange={name.onChange}/> */}
            {/*  위의 구문은 아래와 같이 줄일 수 있다. 
                 단 이 떄는 value나 onChange라는 이름이 변해선 안된다
                 value로 쓸 값은 value라는 이름으로 onChange로 쓸 값은 onChange라는 이름으로 넘어와야 한다
              */}
            <input {...name} ></input>
        </div>
    )
}

export default UseInput;