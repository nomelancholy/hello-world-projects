import { createStore } from 'redux';

const reducer = (state, action) => {

    if(state === undefined){
        return {number : 0}
    }

    if(action.type === 'INCREMENT'){
        return { ...state, number : state.number + action.size}
    }

    return state;
}

export default createStore(reducer,  window.__REDUX_DEVTOOLS_EXTENSION__ && window.__REDUX_DEVTOOLS_EXTENSION__() );

