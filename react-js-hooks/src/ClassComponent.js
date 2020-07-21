import React, { Component } from 'react';

class ClassComponent extends Component {
    state = {
        count: 0
    }
    increment = (n) => {
        this.setState({
            count: n
        })
    }

    render() {
        const { count } = this.state;

        return (
            <>
                <div>{count}</div>
                <button onClick={() => this.increment(count + 1)}>increment</button>
            </>
        )
    }

}

export default ClassComponent;