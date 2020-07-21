import React, { useEffect, useRef } from "react";


const useFadeIn = (duration = 1, delay= 0) => {

    const element = useRef();
    useEffect(() => { 

        if(typeof duration !== 'number' || typeof delay !== 'number'){
            return;
        } 

        if(element.current){
            const { current } = element
            current.style.transition = `opacity ${duration}s ease-in-out ${delay}s`
            current.style.opacity = 1;
        }
    },[duration, delay])

    return { ref: element, style: { opacity: 0 } }
}


const UseFadeIn = () => {

    const fadeInH1 = useFadeIn(1,2);
    const fadeInP = useFadeIn(2,4);

    console.log(fadeInH1);

    return (
        <div className="App" >
            <h1 {...fadeInH1}>hello</h1>
            <p {...fadeInP}>Test</p>
        </div>
    )
}

export default UseFadeIn;