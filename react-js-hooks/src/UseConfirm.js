import React from "react";


const useConfirm = (message= "", onConfirm, onCancel) => {
    if (!onConfirm ||  typeof onConfirm !== "function"){
        return; 
    }

    if (onCancel && typeof onCancel !== "function"){
        return; 
    }

    const confrimAction = () => {

        if(window.confirm(message)){
            onConfirm();
        }else {
            onCancel();
        }
    }
    return confrimAction
}


const UseConfirm = () => {
    const deleteWorld = () => console.log("Deleting the world..");
    const abort = () => console.log("Aborted");
    const confirmDelete = useConfirm("Are you sure", deleteWorld, abort)
    return (
        <div className="App">
            <button onClick={confirmDelete}>delete the world</button>
        </div>
    )
}

export default UseConfirm;