import React, { Component } from 'react';
import styled, { createGlobalStyle, ThemeProvider } from "styled-components";
import theme from "./theme";

createGlobalStyle`
  body{
    margin:0;
    padding:0;
  }
`
const Card = styled.div`
  background-color: pink;
`;

const Container = styled.div`
  height: 100vh;
  width: 100%;
  background-color: pink;
  ${Card}{
    background-color : blue;
  }
`;

const Button = styled.button`
    border-radius: 30px;
    padding: 25px 15px;
    background-color: ${props => props.theme.dangerColor};
    `;

class App extends Component {
  render() {
    return (
      <ThemeProvider theme={theme}>
        <Container>
          <Form />
        </Container>
      </ThemeProvider>
    )
  }
}



const Form = () => (
  <Card>
    <Button>Hello</Button>
  </Card>
);



export default App;
