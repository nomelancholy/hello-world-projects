import React from "react";
import { render, fireEvent } from "@testing-library/react";
import Profile from "../components/Profile";

describe("<Profile />", () => {
  it("matches snapshot", () => {
    const utils = render(<Profile userName="TakeKnowledge" name="jae-uk" />);
    console.log('utils', utils)
    expect(utils.container).toMatchSnapshot();
  });

  it("input text", () => {
    const utils = render(<Profile userName="TakeKnowledge" name="jae-uk" />);
    const input = utils.getByPlaceholderText("anything");
    fireEvent.change(input, { target: { value: "hello" } });
  });
});
