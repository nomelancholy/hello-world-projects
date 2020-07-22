import React, { useState } from 'react';

const AddNumber = ({ handleClick }) => {

    const [size, setSize] = useState(1);

    const handleChange = (e) => {
        setSize(Number(e.target.value));
    }

    return (
        <div>
            <h1>Add Number</h1>
            <button onClick={() => handleClick(size)}>+</button>
            <input type="text"
                value={size}
                onChange={handleChange}
            />
        </div>
    )
}

export default AddNumber;