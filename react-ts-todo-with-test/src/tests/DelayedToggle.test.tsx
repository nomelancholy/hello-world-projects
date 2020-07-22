import React from "react";
import {
  render,
  fireEvent,
  wait,
  waitForElement,
  waitForDomChange,
  waitForElementToBeRemoved,
} from "@testing-library/react";
import DelayedToggle from "../components/DelayedToggle";

describe("<DelayedToggle />", () => {
  it("reveals text when toggle is ON", async () => {
    const { getByText } = render(<DelayedToggle />);
    const toggleButton = getByText("toggle");
    fireEvent.click(toggleButton);
    await wait(() => getByText("hello"), { timeout: 1000 });
  });

  it("toggles text ON/OFF", async () => {
    const { getByText } = render(<DelayedToggle />);
    const toggleButton = getByText("toggle");
    fireEvent.click(toggleButton);
    const text = await waitForElement(() => getByText("ON"));
    expect(text).toHaveTextContent("ON");
  });

  it("changes something when button is clicked", async () => {
    const { getByText, container } = render(<DelayedToggle />);
    const toggleButton = getByText("toggle");
    fireEvent.click(toggleButton);
    const mutations = await waitForDomChange({ container });
  });

  it("removes text when toggle is OFF", async () => {
    const { getByText, container } = render(<DelayedToggle />);
    const toggleButton = getByText("toggle");
    fireEvent.click(toggleButton);
    await waitForDomChange({ container });
    getByText("hello");
    fireEvent.click(toggleButton);
    await waitForElementToBeRemoved(() => getByText("hello"));
  });
});
