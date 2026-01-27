// function getData(dataid, getNextData) {
//     setTimeout(() => {
//         console.log('Data', dataid);
//         if (getNextData) {
//             getNextData();
//         }
//     }, 2000);
// }

// getData(1, () => {
//     console.log("Data 2");
//     getData (2, () => {
//         console.log('Data 3');
//         getData (3, () => {
//             console.log('Data 4');
//             getData(4);
//         })
//     })
// })  


// Print the roll numbers and name of the students

// function getData(dataid, studName, getNextData) {
//     setTimeout(() => {
//         console.log('Roll No', dataid, 'Name:', studName);
//         if (getNextData) {
//             getNextData();
//         }
//     }, 2000);
// }


// getData(1, 'Kamlesh', () => {
//     getData (2, 'Kartik', () => {
//         getData (3, 'Utsav', () => {
//             getData(4, 'Nayan')
//         })
//     })
// })  


// function getData(dataid, getNextData) {
//     return new Promise((resolve, reject) =>{
//         setTimeout(() => {
//             console.log('Data', dataid);
//             resolve('Success');
//             if(getNextData){
//                 getNextData();
//             }
//         }, 5000)
//     })
// }

// getData(1);



// const getPromise= () => {
//     return new Promise((resolve, reject) => {
//         console.log("Its promise");
//         resolve("Error")
//     });
// }

// let promise = getPromise();
// promise.then((res)=>{
//     console.log("FullFilled", res);
// });

// promise.catch((err) => {
//     console.log("Rejected", err)
// })


function asyncFunction() {
    return new Promise((resolve, reject) => {
        console.log("Data 1");
        resolve('Success');
    }, 5000)
}

function asyncFunction2() {
    return new Promise((resolve, reject) => {
        console.log("Data 2");
        resolve('Success');
    }, 7000)
}

console.log("Fetching data");
let p1 = asyncFunction();
let p2 = asyncFunction2();
p1.then((res) => {
    console.log(res);
})