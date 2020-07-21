import React, { useState } from 'react'

const content = [
    {
        tab: "Section 1",
        content: " I'm the content of the Section 1"
    },
    {
        tab: "Section 2",
        content: " I'm the content of the Section 2"
    }
];

const useTabs = (initialTab, allTabs) => {
    // if (!allTabs || !Array.isArray(allTabs)) {
    //     return;
    // }
    // 조건문 관련해 확인 필요

    const [currentIndex, setCurrentIndex] = useState(initialTab);
    return {
        currentItem: allTabs[currentIndex],
        changeItem: setCurrentIndex
    }
}

const UseTab = () => {

    const { currentItem, changeItem } = useTabs(0, content);
    return (
        <div className="App" >
            {content.map((section, index) => (
                <button onClick={() => changeItem(index)}>{section.tab}</button>
            ))}
            <div>{currentItem.content}</div>
        </div >
    )
}

export default UseTab;