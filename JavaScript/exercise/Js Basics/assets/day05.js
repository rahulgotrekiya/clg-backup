/* ---------------- */
// Date: 03/09/2025
/* ---------------- */

// Array

let cities = ["pune", "rajkot", "ahemdabad", "bhavnagar"];
let states = ["gujarat", "rajasthan", "UP", "MP"];

// console.log(cities.length);

// console.log(cities.push('surat'))
// console.log(cities);

// console.log(cities.unshift('hshs'))
// console.log(cities);

// console.log(cities.pop())
// console.log(cities);

// console.log(cities.shift())
// console.log(cities);

// console.log(cities.concat(states))

// console.log(cities.toString())

// console.log(cities.slice(1, 3));
// console.log(states.splice(1, 3));

// practice programs

// crate a static array of numbers. if array lenghth is even then add one element at starting of the arrya. if its odd then add two elements at ending of the arrya.

// let numbers = [2, 3, 4, 5, 6, 7];
// console.log(numbers.length);

// if (numbers.length % 2 == 0) {
//   console.log(numbers.push(10));
//   console.log(numbers);
// } else {
//   console.log(numbers.push(10, 11));
//   console.log(numbers);
// }

// crate arrays: [2, 3, 4, 5, 6, 7]
//          O/P: [7, 6, 5, 4, 3, 2]

// let numbers2 = [2, 3, 4, 5, 6, 7];
// console.log(numbers2.reverse());

// crate arrays: [ 3, 4, 5, 6, 7 ] & [ 9, 8, 7, 6, 5]
// add two arrays if first array lenght is even, subtract two arrays if second arrya length is odd.

let arr1 = [3, 4, 5, 6, 7, 3];
let arr2 = [9, 8, 7, 6, 5];

if (arr1.length % 2 == 0) {
  for (let i = 0; i < arr2.length; i++) {
    console.log(arr1[i] + arr2[i]);
  }
}

if (arr2.length % 2 !== 0) {
  for (let i = 0; i < arr2.length; i++) {
    console.log(arr1[i] - arr2[i]);
  }
}

// create an array of five elements. add one element at end, delete two elements from starting again add three element at end. calculate3 the final updated lenght of array

let five = [4, 5, 6, 3, 7];

five.push("one");
console.log(five);
console.log("========");

five.shift();
five.shift();
console.log(five);
console.log("========");

five.push("A", "B", "C");
console.log(five);
console.log("Final length:", five.length);
