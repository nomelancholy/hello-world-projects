import React from "react";
import { render, fireEvent } from "@testing-library/react";
import { TodoModel } from "../model/Todo";
import TodoItem from "../components/TodoItem";

describe("<TodoItem />", () => {
  const sampleTodo = {
    id: 1,
    text: "TDD 배우기",
    done: false,
  } as TodoModel;

  it("has span and button", () => {
    const utils = render(<TodoItem todo={sampleTodo} />);
    const { getByText } = utils;
    const span = getByText(sampleTodo.text);
    const button = getByText("삭제");

    expect(span).toBeTruthy();
    expect(button).toBeTruthy();
  });

  it("shows line-through on span when done is true", () => {
    sampleTodo.done = true;
    const utils = render(<TodoItem todo={sampleTodo} />);
    const { getByText } = utils;
    const span = getByText(sampleTodo.text);
    expect(span).toHaveClass("on");
  });

  it("does not show line-through on span when done is false", () => {
    sampleTodo.done = false;
    const utils = render(<TodoItem todo={sampleTodo} />);
    const { getByText } = utils;
    const span = getByText(sampleTodo.text);
    expect(span).not.toHaveClass("on");
  });

  it("calls onToggle", () => {
    const onToggle = jest.fn();
    const utils = render(<TodoItem todo={sampleTodo} onToggle={onToggle} />);
    const { getByText } = utils;
    const span = getByText(sampleTodo.text);
    fireEvent.click(span);
    expect(onToggle).toBeCalledWith(sampleTodo.id);
  });

  it("calls onRemove", () => {
    const onRemove = jest.fn();
    const utils = render(<TodoItem todo={sampleTodo} onRemove={onRemove}/>);
    const { getByText } = utils;
    const button = getByText('삭제');
    fireEvent.click(button);
    expect(onRemove).toBeCalledWith(sampleTodo.id);
  });
});
