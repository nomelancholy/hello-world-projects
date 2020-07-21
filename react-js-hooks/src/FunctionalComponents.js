import React, {useState} from 'react';

const FuctionalComponent = () => {

    const [count, setCount] = useState(0);
    const [email, setEmail] = useState("");

    const updateEmail= e => {
        // const {
        //     target : {value}
        // }= e;

        const value =  e.target.value;

        setEmail(value);
    }

    return (
        <>
            <div>{count}</div>
            <button onClick={() =>setCount(count + 1)}>Increment</button>
            <button onClick={() =>setCount(count - 1)}>Decrement</button>
            <input value={email} onChange={updateEmail}></input>
        </>
    )

}

export default FuctionalComponent;