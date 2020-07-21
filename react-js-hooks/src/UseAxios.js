import React from 'react'
import defaultAxios from 'axios';
import { useState, useEffect } from 'react';

const useAxios = (opts, axiosInstance = defaultAxios) => {

    const [state, setState] = useState({
        lodaing: true,
        error: null,
        data: null
    })

    const [trigger, setTrigger] = useState(0)

    const refetch = () => {
        setState({
            ...state,
            loading: true
        })
        setTrigger(Date.now());
    }

    useEffect(() => {
        if (!opts.url) {
            return;
        }

        axiosInstance(opts).then(data => {
            setState({
                ...state,
                loading: false,
                data
            })
        }).catch(error => {
            setState({ ...state, lodaing: false, error })
        });
    }, [trigger])

    return { ...state, refetch };
}

const UseAxios = () => {
    // const { loading, data, error } = useAxios({ url: "https://yts.lt/api/v2/list_movies.json", headers: { "Access-Control-Allow-Origin": "*" } })
    const { loading, data, error, refetch } = useAxios({ url: "https://yts-proxy.now.sh/list_movies.json" })

    console.log(data);

    return (
        <div className="App" >
            <h1>{data && data.status}</h1>
            <h2>{loading && "Loading"}</h2>
            {data && data.data.data.movies.map(i => (
                <div key={i.id}>{i.title}</div>
            ))}
            <button onClick={refetch}>Refetch</button>
        </div>
    )
}

export default UseAxios;