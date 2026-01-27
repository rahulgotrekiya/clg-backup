// let a = 67.8;
// console.log(Math.floor(a));
// console.log(Math.ceil(a));
// console.log(Math.sqrt(a));
// console.log(Math.abs(a));
// console.log(Math.acos(a));
// console.log(Math.acosh(a));
// console.log(Math.sin(a));
// console.log(Math.sign(a));
// console.log(Math.atan(a));
// console.log(Math.log(a));
// console.log(Math.sin(a));


/*
    Practice Programs
*/

// WAP to print all non prime numbers between 1 to 500 on submit buttion click event 

function isPrime(num) {
    if(num <= 1) return false;
    for(let i = 2; i < num; i++) {
        if(num % i == 0) return false;
    }
    return true;
}

function printNotPrime(n) {
    for (let i = 2; i < n; i++) {
        if(!isPrime(i)) console.log(i);
    }
}

let primeBtn = document.querySelector('#primeBtn');

primeBtn.addEventListener("click", function () {
    printNotPrime(500); 
});
  
// WAP to subtract two static array

const arr1 = [10, 20, 30, 40, 50];
const arr2 = [5, 15, 25, 35, 45];
const subtractedArray = [];

for (let i = 0; i < arr1.length; i++) {
    subtractedArray.push(arr1[i] - arr2[i]);
}

console.log(subtractedArray);

// WAP to print sum of all  array elements

const numbers = [10, 20, 30, 40, 50];

let sum = 0;

for (let i = 0; i < numbers.length; i++) {
  sum += numbers[i];
}

console.log(sum);

  
// WAP to print last 3 letters of string entered by the user

let input = prompt("Enter Any String");

console.log(input.slice(-3));