import React, { useRef } from "react"

const useFullScreen = (callback) => {
    const element = useRef()

    const triggerFull = () => {
        if (element.current) {
            if (element.current.requestFullscreen) {
                element.current.requestFullscreen();
            } else if (element.current.mozRequestFullScreen) {
                element.current.mozRequestFullScreen();
            } else if (element.current.webkitRequestFullscreen) {
                element.current.webkitRequestFullscreen();
            } else if (element.current.msRequestFullscreen) {
                element.current.msRequestFullscreen();
            }
            if (callback && typeof callback === "function") {
                callback(true)
            }
        }
    }

    const exitFull = () => {
        if (document.exitFullscreen) {
            document.exitFullscreen();
        } else if (document.mozCancelFullScreen) {
            document.mozCancelFullScreen();
        } else if (document.webkitExitFullscreen) {
            document.webkitExitFullscreen();
        } else if (document.msExitFullscreen) {
            document.msExitFullscreen();
        }
        if (callback && typeof callback === "function") {
            callback(false)
        }
    }

    return { element, triggerFull, exitFull }
}

const UseFullScreen = () => {

    const onFullS = (isFull) => {
        console.log(isFull ? "We are Full" : "We are small");
    }

    const { element, triggerFull, exitFull } = useFullScreen(onFullS);
    return (
        <div className="App" style={{ height: "1000vh" }}>
            <div ref={element}>
                <img
                    alt="nature"
                    src="https://images.unsplash.com/photo-1513836279014-a89f7a76ae86?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=634&q=80"
                />
                <button onClick={exitFull}> Exit Fullscreen</button>
            </div>
            <button onClick={triggerFull}> Make Fullscreen</button>
        </div>
    )
}

export default UseFullScreen;