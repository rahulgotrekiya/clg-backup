// try {
//     console.log(x);
// }
// catch (e) {
//     console.log(e);
//     throw new Error("Custom Error");
// }


// Asynchronouns Programing

// function display() {
//     console.log("Helllo");
// }

// setTimeout(display, 4000);
// function show() {
//     console.log("Hey");
// }

// setTimeout(show, 1000);

// Get the username from user if username contains the `@` then get the password from user after the 3000ms otherwise print the Invalid message

// let emailId = prompt('Enter Username');
// let isContains = emailId.indexOf('@');

// function pass() {
//     let password = prompt("Enter Password: ");
//     console.log("Name is " + n + "\n pass is " + password);
// }

// if(ch != 1){
//     setTimeout(password, 3000);
// } else {
//     console.log("Invalid")
// }

// Get phone number from the user and if the uccurucne of the 3 digit is more than one then throw the error 

// let phone = prompt("Enter phone number: ")


// try {
//     for (let i  = 0; i < phone.length; i++) {
//         for (let j = i+1; j < phone.length; j++) {
            
            
//         }
// }

// } catch (error) {
//     console.log(error);
// }

function getData(dataid, getNextData) {
    setTimeout(() => {
        console.log('Data', dataid);
        if (getNextData) {
            getNextData();
        }
    }, 2000);
}

getData(1, () => {
    console.log("Data 2");
    getData (2, () => {
        console.log('Data 3');
        getData (3, () => {
            console.log('Data 4');
            getData(4);
        })
    })
})