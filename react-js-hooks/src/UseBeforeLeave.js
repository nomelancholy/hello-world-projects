import React, { useEffect, useCallback } from "react";


const useBeforeLeave =  (onBefore) => {

    const handle = useCallback((event) => {
        if (typeof onBefore !== "function") {
            return
        }

        console.log('event :>> ', event);
        const { clientY, clientX } = event;

        if (clientY <= 0 || clientX <= 0) {
            onBefore();
        }
    },[onBefore])

    useEffect(() => {
        document.addEventListener("mouseleave", handle);
        return () => document.removeEventListener("mouseleave", handle);
      }, [handle]);

}


const UseBeforeLeave = () => {

    const begForLife = () => console.log("pls don't leave");
    useBeforeLeave(begForLife);

    return (
        <div className="App" >
            <h1>hello</h1>
        </div>
    )
}

export default UseBeforeLeave;