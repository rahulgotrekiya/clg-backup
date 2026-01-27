// try {
//     console.log("Try starts");
//     console.log(x,y );
//     console.log("Try Ends");

// }
// catch (e) {
//     console.log(e + " Error Caught");
// }
// finally{
//     console.log("Final code...");
// }


// try {
//     let arr = [2, 3, 4, 5, 6];
//     console.log(arr[2]);
//     console.log(arr[8]);
// }
// catch (e) {
//     console.log(e + " Error Caught");
// }



try {
    let a = 8/0;
    console.log(a);
}
catch (e) {
    console.log(e + " Error Caught");
}