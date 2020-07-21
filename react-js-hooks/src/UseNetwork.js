import React, { useEffect } from "react";
import { useState } from "react";


const useNetwork = onChange => {
    const [status, setStatus] = useState(navigator.onLine);

    useEffect(() => {
        const handleChange = () => {
            if (typeof onChange === "function") {
                onChange(navigator.onLine);
            }
            setStatus(navigator.onLine);
        };

        window.addEventListener("online", handleChange);
        window.addEventListener("offline", handleChange);
        return () => {
            window.removeEventListener("online", handleChange);
            window.removeEventListener("offline", handleChange);
        };
    }, [onChange]);
    return status;
};


const UseNetwork = () => {
    const handleNetworktChange = (online) => {
        console.log(online ? "online" : "offline");
    }
    const online = useNetwork(handleNetworktChange);
    return (
        <div className="App" >
            <h1 >{online ? "OnLine" : "OffLine"}</h1>
        </div>
    )
}

export default UseNetwork;