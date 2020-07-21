import React, {useState, useEffect} from 'react'

const useTitle = initialTitle => {
    const [title, setTitle] = useState(initialTitle);
    const updateTitle = () => {
        const htmlTitle = document.querySelector("title");
        htmlTitle.innerText = title;
    };
    useEffect(updateTitle, [title]);
    return setTitle;
}

const UseTitle = () => {
    const titleUpdater = useTitle("Loading...");
    setTimeout(() => titleUpdater("Home"),3000);
    return (
        <div className="App">
            <div>hi</div>
        </div>
    )
}

export default UseTitle;