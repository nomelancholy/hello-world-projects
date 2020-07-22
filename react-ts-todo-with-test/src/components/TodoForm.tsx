import React, { useState } from "react";

interface Param {
  onInsert?: (value: string) => void;
}

const TodoForm = ({ onInsert }: Param) => {
  const [value, setValue] = useState("");
  const handleChange = (e: any) => {
    setValue(e.target.value);
  };
  const handleSubmit = (e: any) => {
    if (onInsert) {
      onInsert(value);
    }

    setValue("");
    e.preventDefault();
  };

  return (
    <form onSubmit={handleSubmit}>
      <input
        placeholder="할 일을 입력하세요"
        value={value}
        onChange={handleChange}
      />
      <button type="submit">등록</button>
    </form>
  );
};

export default TodoForm;
