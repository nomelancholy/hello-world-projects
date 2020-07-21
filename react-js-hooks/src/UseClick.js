import React, { useRef, useEffect } from "react"

const useClick = (onClick) => {
    const element = useRef();
    useEffect(() => {
        if (element.current) {
            element.current.addEventListener("click", onClick);
        }
        return () => {
            if (element.current) {
                element.current.removeEventListener("click", onClick);
            }
        }
    },[])
    return element;
}

const UseClick = () => {
    const onClick = () => console.log("say Hello");
    const title = useClick(onClick);
    return (
        <div className="App">
            <h1 ref={title}>헬로우</h1>
        </div>
    )
}

export default UseClick;