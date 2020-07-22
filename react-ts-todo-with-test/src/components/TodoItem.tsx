import React from "react";
import { TodoModel } from "../model/Todo";
import "./TodoItem.css";

interface Params {
  todo: TodoModel;
  onToggle?: (id: number) => void;
  onRemove?: (id: number) => void;
}

const TodoItem = ({ todo, onToggle, onRemove }: Params) => {
  const { id, text, done } = todo;

  return (
    <li>
      <span className={`${done && 'on'}`} onClick={() => onToggle!(id)}>{text}</span>
      <button onClick={() => onRemove!(id)}>삭제</button>
    </li>
  );
};

export default TodoItem;
