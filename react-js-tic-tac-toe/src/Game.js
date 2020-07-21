import Board from './Board'
import React, { Component } from 'react';
import GlobalStyles from './GlobalStyles';
import styled, { ThemeProvider } from "styled-components";
import theme from './theme'

class Game extends Component {
  constructor(props) {
    super(props);
    this.state = {
      history: [{
        squares: Array(9).fill(null)
      }],
      stepNumber: 0,
      xIsNext: true,
      coordinate: [],
    };
  }

  jumpTo(step) {
    this.setState({
      stepNumber: step,
      xIsNext: (step % 2) === 0,
    })
  }

  handleClick(i) {

    const history = this.state.history.slice(0, this.state.stepNumber + 1);
    const current = history[history.length - 1];
    const squares = current.squares.slice();
    const coordinate = this.state.coordinate.slice();

    if (calculateWinner(squares) || squares[i]) {
      return;
    }

    const currentCoordinate = caclulateCoordinate(i);

    coordinate.push(currentCoordinate);

    squares[i] = this.state.xIsNext ? 'X' : 'O';
    this.setState({
      history: history.concat([{
        squares: squares
      }]),
      stepNumber: history.length,
      xIsNext: !this.state.xIsNext,
      coordinate: coordinate,
    });
  }

  render() {
    const history = this.state.history;
    const current = history[this.state.stepNumber];
    const winner = calculateWinner(current.squares);
    const coordinate = this.state.coordinate.slice();

    let moving;

      for(const [i,v] of coordinate) {
        console.log(i);
        if(i === coordinate.length){
          moving += v;
          break;
        }
          moving += v + " => ";
      }

    

    const moves = history.map((step, move) => {

      const desc = move ?
        'Go to move #' + move :
        'Go to game start';

      return (
        <List key={move}>
          <GoToButton onClick={() => this.jumpTo(move)}>{desc}</GoToButton>
        </List>
      );
    });

    let status;
    if (winner) {
      status = 'Winner: ' + winner;
    } else {
      status = 'Next player: ' + (this.state.xIsNext ? 'X' : 'O');
    }

    return (
      <ThemeProvider theme={theme}>
        <GlobalStyles />
        <Header>Tic-Tac-Toe</Header>
        <GameWrap>
          <GameBoard>
            <Board
              squares={current.squares}
              onClick={(i) => this.handleClick(i)}
            />
          </GameBoard>
          <GameInfo>
            <Status>{status}</Status>
            <OrderedList>{moves}</OrderedList>
          </GameInfo>
        </GameWrap>
      </ThemeProvider>
    );
  }
}

function calculateWinner(squares) {
  const lines = [
    [0, 1, 2],
    [3, 4, 5],
    [6, 7, 8],
    [0, 3, 6],
    [1, 4, 7],
    [2, 5, 8],
    [0, 4, 8],
    [2, 4, 6],
  ];
  for (let i = 0; i < lines.length; i++) {
    const [a, b, c] = lines[i];
    if (squares[a] && squares[a] === squares[b] && squares[a] === squares[c]) {
      return squares[a];
    }
  }
  return null;
}

function caclulateCoordinate(i) {

  let x;
  let y;

  if (i >= 0 && i <= 2) {
    x = 1;
    y = i + 1;
  } else if (i >= 3 && i <= 5) {
    x = 2;
    y = i - 2;
  } else {
    x = 3;
    y = i - 5;
  }

  return x + ',' + y;
}

const Header = styled.header`
  height: 200px;
  width: 600px;
  text-align: center;
  text-shadow: 2px 2px 2px gray;
  font-size: 50px;
  font-weight: bold;
  line-height: 200px;
  color: #130f40;
  margin: 0 auto;
`

const GameWrap = styled.div`
  width : 650px;
  margin: 50px auto;
  &::after {
    display: block;
    clear: both;
    content: '';
  }
`

const GameBoard = styled.div`
 float: left;
`

const GameInfo = styled.div`
  float: left;
  margin : 0 25px;
  width: 150px;
`

const Status = styled.div`
  height: 35px;
  line-height: 35px;
  font-size: 20px;
  font-weight: bold;
`

const OrderedList = styled.ol`
  margin-top : 10px;
`

const List = styled.li`
  margin-bottom:10px;
`

const GoToButton = styled.button`
  width: 150px;
  height: 30px;
`

export default Game;