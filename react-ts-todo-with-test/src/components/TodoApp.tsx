import React, { useState, useRef } from "react";
import TodoForm from "./TodoForm";
import { TodoModel } from "../model/Todo";
import TodoList from "./TodoList";

const TodoApp = () => {
  const [todos, setTodos] = useState<TodoModel[]>([
    {
      id: 1,
      text: "TDD 배우기",
      done: true,
    },
    {
      id: 2,
      text: "react-testing-library 사용하기",
      done: true,
    },
  ]);

  const [nextId, setNextId] = useState(3);

  const onInsert = (value: string) => {
    setTodos(
      todos.concat({
        id: nextId,
        text: value,
        done: false,
      })
    );

    setNextId(nextId + 1);
  };

  const onToggle = (id: number) => {
    setTodos(
      todos.map((todo) =>
        todo.id === id ? { ...todo, done: !todo.done } : todo
      )
    );
  };

  const onRemove = (id:number) => {
      setTodos(todos.filter(todo => todo.id !== id));
  }

  return (
    <>
      <TodoForm data-testid="helloworld" onInsert={onInsert} />
      <TodoList todos={todos} onToggle={onToggle} onRemove={onRemove} />
    </>
  );
};

export default TodoApp;
