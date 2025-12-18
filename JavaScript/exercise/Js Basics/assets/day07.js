/* ---------------- */
// Date: 08/09/2025
/* ---------------- */
   
// Functions in JavaScript
// There are two ways to create a function
// 1) Regular way using function keyword
// 2) Arrow function

// Syntax
function function_name() {
    //code
}

// ex:
function displayEx(){
    console.log('Hello good noon');     
}

function display(a, b) {
    console.log(a+b);
}

// display(10, 20);

// Function with return statement 
function sum(x, y) {
    s = x+y;
    return s;
}

// sum(2, 3);
// let ans = sum(2, 3);
// console.log(s);

// Write a program to take n from user and print prime number between 1 to n

function isPrime(num) {
    if(num <= 1) return false;
    for (let i = 2; i < num/2; i++) {
        if(num % i == 0) return false;   
    }
    return true;
}

function printPrime(n) {
    for (let i = 2; i <= n; i++) {
        if(isPrime(i)) console.log(i);
    }
}

let input = prompt('Enter Number: ');

printPrime(input);

// Arrow Function 
//      - Its a compact way to write a function.

/*
// Syntax:
const function_name = (parameter1, parameter2, ...) => {
    // code
}
*/

// Ex:
let sumArrow = (a, b) => {
    console.log(a+b);
}

// sumArrow(3, 4);

// callback function:=

// recursion

let arr = [2, 1, 3, 5, 6, 8, 9, 0, 0, 4];
let newArr = arr.filter((val) => {
    return val % 2 != 0
});

console.log(newArr);