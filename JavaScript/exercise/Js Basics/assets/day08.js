/*-----------*/
// 10/09/2025
/*-----------*/

// let arr = [2, 1, 3, 5, 6, 8, 9, 0, 0, 4];
// let newArr = arr.filter((value) => {
    // return value % 2 !== 0;
// });

// console.log(arr);
// console.log(newArr);

let arr = [2, 1, 3, 5, 6];
// let square = ((arr1) => {
//     console.log(arr1*arr1)
// });

// console.log(square);

let newArr = arr.map((val) => {
    return val*val;
});

// console.log(arr2);
// console.log(newArr2);

let output = arr.reduce((res, arr) => {
    return res+arr;
});
console.log(arr);
console.log(output);

// ---------------------------
// Practice programs

// Create array for studnet 5 object marks.
// find %.
let marks = [40, 60, 80, 90, 75];
let per = marks.reduce((res, marks) => {
    return res + marks;
});

ans = per/marks.length;

console.log(ans);


// Create array of first 10 even numbers and perform /2 operation on each element.
let even = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20];

let half = even.map((even) => {
    return even/2;
});

console.log(half);

// Create array of 10 employee salary. print only salary > 20000
let empSalary = [10000, 24000, 34000, 19000, 23000, 65000, 33000, 22000, 45000, 32000];

let filterSal = empSalary.filter((empSalary) => {
    return empSalary > 20000;
});

console.log(filterSal);


// taken from user as input. create array of 1 to n. calculate sum and product of no. also print square of each number
// 1 2 3 4 
// sum = 10 product = 24


let input = parseInt(prompt('Enter Number'));

let arrEx = [];

for (let i = 1; i <= input; i++) {
    arrEx.push(i);
}

console.log(arrEx); 

let sum = arrEx.reduce((res, arrEx) => {
    return res+arrEx;
});

console.log(sum); 

let product = arrEx.reduce((res, arrEx) => {
    return res*arrEx;
});

console.log(product); 


// ------------------- -------------------------------
// OBJECTS
console.log('==================Object=======================');

let student = {
	id: 1,
	name: 'Rahul',
	city: 'ahmd',
	college: 'LJ',
	sem: 1,
};

console.log(student);
console.log(typeof student);

for(let i in student) {
    console.log(i);
}

for(let i in student) {
    console.log(student[i]);
}

for(let i in student) {
    console.log(i + ' ' + student[i]);
}