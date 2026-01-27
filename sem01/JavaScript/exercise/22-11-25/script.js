// const getPromise = () => {
//     return new Promise((resolve, reject) =>{
//         console.log('Its a promise program');
//         resolve('Done');
//     })
// }

// let promise = getPromise();

// promise.then((resolve) => {
//     console.log('Fullfilled', resolve);
// })

// promise.catch((reject) => {
//     console.log('Rejected', reject);
// })

// async function data() {
//     console.log('Fetching data');
//     try{
//         const resoponse = await fetch('https://api.genderize.io?name=luc');
//         const resoponse1 = await fetch('https://official-joke-api.appspot.com/random_joke');
//         const data = await resoponse.json();
//         const data1 = await resoponse1.json();
        
//         console.log(data);
//         setTimeout(() => {
//             console.log(data1);
//         }, 5000);
 
//         return data1;
//     }catch (error) {
//         console.error(error);
//         throw error;
//     }finally {
//         console.log('fetch data');
//     }
// }

// data();

function* countUpTo(limit) {
    let i=1;
    while (i <= limit) {
        yield i;
        i++;
    }
}

const counter = countUpTo(3);
console.log(counter.next())
console.log(counter.next())
console.log(counter.next())
console.log(counter.next())