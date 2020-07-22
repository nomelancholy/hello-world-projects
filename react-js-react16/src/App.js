import React, { Component } from "react";

const MAX_PIZZAS = 20;

class Controlled extends Component {
  state = {
    pizzas: 0
  };
  render() {
    const { pizzas } = this.state;
    return (
      <button onClick={this._handleClick}>{`I have eaten ${pizzas} ${
        pizzas === 1 ? "pizza" : "pizzas"
      }`}</button>
    );
  }
  _handleClick = () => {
    this.setState(eatPizaa);
    // eatPizaa를 활용해 state를 업데이트 합니다
  };
}


const eatPizaa = (state, props) => {
  // eatPizaa에선
  const { pizzas } = state;
  if (pizzas < MAX_PIZZAS) {
    return {
      pizzas: pizzas + 1
      // pizzas가 MAX_PIZZAS 보다 작을 경우 1 즈악한 pizzas를 리턴하지만
    };
  } else {
    return null;
    // 그렇지 않으면 null을 리턴합니다
  }
};

class App extends Component {
  render() {
    return <Controlled />;
  }
}

export default App;
