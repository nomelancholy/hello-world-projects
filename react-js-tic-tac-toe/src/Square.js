import React from 'react';
import styled from 'styled-components';

function Square(props) {
  return (
    <SquareElement onClick={props.onClick}>
      {props.value}
    </SquareElement>
  );
}

const SquareElement = styled.button`
      background: #fff;
      border: 1px solid #999;
      float: left;
      font-size: 40px;
      font-weight: bold;
      line-height: 34px;
      height: 150px;
      margin-right: -1px;
      margin-top: -1px;
      padding: 0;
      text-align: center;
      width: 150px;
      &:focus {
        outline: none;
        background: #ddd;
      } 
  `

export default Square