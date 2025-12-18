/* ---------------- */
// Date: 04/09/2025
/* ---------------- */
   
/**
 * 
 * Operators in JavaScript
 * 
 * 1. Arithmatic 
 * 2. Assignment
 * 3. Comparision
 * 4. Logical
 * 5. Conditional
 * 6. Plus +  
 */

// let a = 6;
// let b = 7;
// let c = 8;

// let ans = (++c)-(b--)-(++a)*(b++)-(--a)-(--c)*(++b);
// console.log(ans);


let a = 9;
let b = 8;

console.log('===================');

// Arithmatic Operators
console.log(a+b);
console.log(a-b);
console.log(a*b);
console.log(a/b);
console.log(a+b);
console.log(a%b);
console.log(a++);
console.log(a--);
console.log(++a);
console.log(--a);

console.log('===================');

// Assignment Operators
console.log(a = a + b);
console.log(a += b);

console.log(a = a - b);
console.log(a -= b);

console.log(a = a * b);
console.log(a *= b);

console.log(a = a / b);
console.log(a /= b);

console.log('===================');

// Comparision Operators
console.log(a > b); // t
console.log(a < b); // f
console.log(a >= b); // t
console.log(a <= b); // f
console.log(a == b); // f
console.log(a !== b); // t
console.log(a === b);// f

console.log('===================');

// Logical Operators

c = 4;

if (a > b && a > c) {
    console.log('A is the gratest')
} else if (b > b && b > c){
    console.log('B is the gratest')
} else {
    console.log('C is the gratest')
}

if (a > 18 || a > b) {
    console.log('Go for Vote')
} else {
    console.log('Keep Waiting...')
}

console.log(!(a == b));

console.log('===================');

// + Operators

let a1 = -7.0;
let b1 = 3.5;

console.log(a1 + b1);
console.log(a1 / b1);

console.log('===================');

/**
 * For in loop
 */

let arr = [10, 20, 23, 67, 89, 54]
console.log(arr);

// Print values
for (i in arr) {
    console.log(arr[i]);
}

// Print index
for (i in arr) {
    console.log(i);
}

console.log('===================');

// Print the even index 
for (i in arr) {
    if(i % 2 == 0)
    console.log(i);
}

console.log('===================');

for (i in arr) {
    if(i % 2 == 0)
    console.log(arr[i]);
}

console.log('===================');

for (i in arr) {
    if(arr[i] % 2 == 0)
    console.log(arr[i]);
}

console.log('===================');

/**
 * For of loop
 */

for (i of arr) {
    console.log(i);
}

console.log('===================');

for (i of arr) {
    console.log(arr.indexOf(i));
}

console.log('===================');

for (i in arr) {
    console.log(arr.indexOf(arr[i]));
}

console.log('===================');

/**
 * Practice programs
 */

// take a staic array[8, 9, 5, 4, 3, 2]
// find smallest element.

let arr1 = [8, 9, 5, 4, 3, 2];
let small = arr1[0];

for (i in arr1) {
    if (small > arr1[i]) 
    small = arr1[i];
}

console.log(small);

console.log('===================');

// Take an array for number and string ['pune', 38, 34, 78, 'ahmd', 8, 9, 'rjkt', 'surat'] 
// find count of number element and string elements

let arr2 = ['pune', 38, 34, 78, 'ahmd', 8, 9, 'rjkt', 'surat'];

let str = 0;
let no = 0;

for (i in arr2) {
    if (typeof(arr2[i]) == 'string')
    str++;
}
console.log(str);

for (i in arr2) {
    if (typeof(arr2[i]) == 'number')
    no++;
}
console.log(no);
