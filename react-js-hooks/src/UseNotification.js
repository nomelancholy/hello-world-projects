import React from "react";

const useNotification = (title, options) => {
    if (!("Notification" in window)) {
        return;
    }
    const fireNotification = () => {
        if (Notification.permission !== "granted") {
            Notification.requestPermission().then(permission => {
                if (permission === "granted") {
                    new Notification(title, options);
                } else {
                    return;
                }
            })
        } else {
            new Notification(title, options);
        }

    };

    return fireNotification

}

const UseNotification = () => {

    const triggerNotification = useNotification("Test Notification", {body: "test"});

    return (
        <div className="App" >
            <button onClick={triggerNotification}>Noti</button>
        </div>
    )
}

export default UseNotification;