import React, { useEffect, useState } from "react"

const useScroll = () => {
    const [state, setState] = useState({
        x: 0,
        y: 0
    })

    const onScroll = () => {
        setState({ y: window.scrollY, x: window.scrollX})
        console.log('window.scrollY :>> ', window.scrollY, 'window.scrollX :>> ', window.scrollX);
    }

    useEffect(() => {
        window.addEventListener("scroll", onScroll);
        return () => window.removeEventListener("scroll", onScroll)
    }, [])

    return state
}

const UseScroll = () => {
    const {y} = useScroll();
    return (
        <div className="App" style={{ height : "1000vh"}}>
            <h1 style={{ color: y > 100 ? "red" : "blue" }}>헬로우</h1>
        </div>
    )
}

export default UseScroll;