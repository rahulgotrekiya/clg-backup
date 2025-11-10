/* ---------------- */
// Date: 02/09/2025
/* ---------------- */

// let marks = prompt('Enter Marks');

// switch (false) {
//     case (marks <= 90 && marks >= 80):
//         console.log('Grade A');
//         break;
//     case (marks < 80 && marks >= 70):
//         console.log('Grade B');
//         break;
        
//     case (marks < 70 && marks >= 60):
//         console.log('Grade C');
//         break;
        
//     default:
//         console.log('Faill');
//         break;
// }

// Create a program to take salary fromj employee, 
// if salary <= 70,000
// class-1 employee 

// if salary <= 50,000
// class-2 employee 

// if salary <= 20,000
// class-3 employee 

// let salary   = prompt('Enter Marks');

// switch (true) {
//     case (salary <= 70000 && salary >= 50000):
//         console.log('class-1');
//         break;
//     case (salary < 50000 && salary >= 20000):
//         console.log('class-2');
//         break;
        
//     case (salary < 20000):
//         console.log('class-3');
//         break;
        
//     default:
//         console.log('Unvalid');
//         break;
// }

// String

// let str1 = "Hello";
// let str2 = "GOOD morning";

// // Uppercase
// console.log(str1.toUpperCase());

// // Lowercase
// console.log(str1.toLowerCase());

// // string merge or concate
// console.log(str1.concat(str2));
// console.log(str2.concat(str1));

// // Convert into string (unless when variable is of string)
// console.log(str1.toString());

// // return a index of mentioned character or string
// console.log(str1.indexOf('el'));

// // return a character placed at of mentioned  or string
// console.log(str2.charAt(3));

// // remove the white space from starting of string
// console.log(str2.trim());

// // return last index of mentioned character
// console.log(str1.lastIndexOf('l'));

// console.log(str1.length);
// console.log(str2.slice(0, 2));
// console.log(str2.substring(0, 2));

// console.log(str1.slice(-1));
// console.log(str1.substring(-1));

// Take a name from user if the lenghth of name is even then convert it in uppercase if length is odd then print last 3 characater of the name

let nameOfUser = prompt('Enter you name');
// let nl = nameOfUser.length;
// if (nl % 2 == 0) {
//     console.log(nameOfUser.toUpperCase());
// } else {
//     console.log(nameOfUser.slice(-3));
// }

// Take a email from user print index of @ from emailid.
let emailId = prompt('Enter you Email');

console.log(emailId.indexOf('@'));

// take a name from user. if name ends with vowels then concate ot with "js example" else print its length.

// let last = nameOfUser.slice(-1);
// if (last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u' ) {
//     console.log(nameOfUser.concat('js example'));
// } else {
//     console.log(nameOfUser.length);
// }