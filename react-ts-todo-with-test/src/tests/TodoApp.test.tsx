import React from "react";
import { render, fireEvent } from "@testing-library/react";
import TodoApp from "../components/TodoApp";

describe("<TodoApp />", () => {
  it("matches snapshot", () => {
    const utils = render(<TodoApp />);
    expect(utils.container).toMatchSnapshot();
  });
  it(`renders TodoForm and TodoList`, () => {
    const { getByText, getByTestId } = render(<TodoApp />);
    getByText("등록");
    getByTestId("TodoList");
  });

  it("renders two defaults todos", () => {
    const { getByText } = render(<TodoApp />);
    getByText("TDD 배우기");
    getByText("react-testing-library 사용하기");
  });

  it('creates new todo', () => {
    const { getByPlaceholderText, getByText } = render(<TodoApp />);
    fireEvent.change(getByPlaceholderText('할 일을 입력하세요'), {
        target: {
            value : '새 항목 추가하기'
        }
    });
    fireEvent.click(getByText('등록'));
    getByText('새 항목 추가하기')
  })

  it('toggles todo', () => {
      const { getByText } = render(<TodoApp />);
      const todoText = getByText('TDD 배우기');
      expect(todoText).toHaveClass('on')
      fireEvent.click(todoText);
      expect(todoText).not.toHaveClass('on')
      fireEvent.click(todoText);
      expect(todoText).toHaveClass('on')
  })

  it('removes todo', () => {
      const { getByText } = render(<TodoApp />);
      const todoText = getByText('TDD 배우기');
      const removeButton = todoText.nextElementSibling!;
      fireEvent.click(removeButton);
      expect(todoText).not.toBeInTheDocument();
  })
});
