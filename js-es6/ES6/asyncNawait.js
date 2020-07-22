function resolvePromise() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            resolve('done');
        }, 2000);
    })
}

async function getPromise1(){
    const result = await resolvePromise();
    console.log(result);
    // 2초 경과 후 done 
    await resolvePromise();
    console.log(result);
    // 2초 경과 후 done 
    await resolvePromise();
    console.log(result);
    // 2초 경과 후 done 
    await resolvePromise();
    console.log(result);
    // 2초 경과 후 done 
    await resolvePromise();
    console.log(result);
    // 2초 경과 후 done 
}

getPromise1();