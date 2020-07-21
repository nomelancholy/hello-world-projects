import React from "react";


const usePreventLeave = () => {

    const listener = (e) => {
        e.preventDefault();
        e.returnValue="";
    }
    const protect = () => window.addEventListener("beforeunload",listener)
    const unprotect = () => window.removeEventListener("beforeunload",listener)

    return {protect, unprotect}
}


const UsePreventLeave = () => {

    const {protect, unprotect} = usePreventLeave();

    return (
        <div className="App" >
            <button onClick={protect}>Protect</button>
            <button onClick={unprotect}>UnProtect</button>
        </div>
    )
}

export default UsePreventLeave;