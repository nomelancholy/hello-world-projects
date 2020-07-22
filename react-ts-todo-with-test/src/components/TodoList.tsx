import React from "react";
import { TodoModel } from "../model/Todo";
import TodoItem from "./TodoItem";

interface Params {
  todos: TodoModel[];
  onToggle?: (id: number) => void;
  onRemove?: (id: number) => void;
}

const TodoList = ({ todos, onToggle, onRemove }: Params) => {
  return (
    <ul data-testid="TodoList">
      {todos.map((todo) => (
        <TodoItem
          key={todo.id}
          todo={todo}
          onToggle={onToggle}
          onRemove={onRemove}
        />
      ))}
    </ul>
  );
};

export default TodoList;
