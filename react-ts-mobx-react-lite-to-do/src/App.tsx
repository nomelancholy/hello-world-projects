import React from 'react';
import './App.css';
import { FriendsMaker } from './components/FriendMaker';
import { StoreProvider } from './context/StoreContext';

function App() {
  return (
    <StoreProvider>
      <div className="App">
        <FriendsMaker></FriendsMaker>
      </div>
    </StoreProvider>
  );
}

export default App;
