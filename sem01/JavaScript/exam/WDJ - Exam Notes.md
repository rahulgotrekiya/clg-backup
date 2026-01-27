### Table of Contents
```table-of-contents
title: 
style: nestedList # TOC style (nestedList|nestedOrderedList|inlineFirstLevel)
minLevel: 0 # Include headings from the specified level
maxLevel: 2 # Include headings up to the specified level
include: 
exclude: 
includeLinks: true # Make headings clickable
hideWhenEmpty: false # Hide TOC if no headings are found
debugInConsole: false # Print debug info in Obsidian console
```

---

# Unit I - JavaScript Basics & DOM

## 1. JavaScript Introduction

### What is JavaScript?

- **Client-side scripting language** that runs in the browser
- Makes web pages interactive and dynamic
- Can manipulate HTML and CSS

### Variables: var, let, const

```javascript
// var - function scoped, can be re-declared
var name = "John";
var name = "Jane"; // ✓ Allowed

// let - block scoped, cannot be re-declared
let age = 25;
age = 26; // ✓ Can update
// let age = 27; // ✗ Error

// const - block scoped, cannot be changed
const PI = 3.14;
// PI = 3.15; // ✗ Error
```

### Data Types

```javascript
// Primitive Types
let str = "Hello";        // String
let num = 42;             // Number
let decimal = 3.14;       // Number
let isActive = true;      // Boolean
let nothing = null;       // Null
let notDefined;           // Undefined

// Check type
console.log(typeof str);  // "string"
```

---

## 2. Control Structures

### If-Else Statement

```javascript
let marks = 85;

if (marks >= 90) {
    console.log("Grade A");
} else if (marks >= 80) {
    console.log("Grade B");
} else if (marks >= 70) {
    console.log("Grade C");
} else {
    console.log("Fail");
}
```

### Switch Case

**Example from your repository:**

```javascript
let day = new Date().getDay();

switch (day) {
    case 1:
        console.log('Monday');
        break;
    case 2:
        console.log('Tuesday');
        break;
    case 3:
        console.log('Wednesday');
        break;
    // ... more cases
    default:
        console.log('Invalid day');
}
```

### Loops

```javascript
// For loop
for (let i = 1; i <= 5; i++) {
    console.log(i);
}

// While loop
let count = 0;
while (count < 5) {
    console.log(count);
    count++;
}

// For...in (for arrays/objects)
let arr = [10, 20, 30];
for (let i in arr) {
    console.log(arr[i]);
}

// For...of (for values)
for (let value of arr) {
    console.log(value);
}
```

---

## 3. Functions

### Function Declaration

```javascript
function greet(name) {
    return "Hello, " + name;
}
console.log(greet("Rahul")); // Hello, Rahul
```

### Arrow Functions

```javascript
// Traditional function
const add = function(a, b) {
    return a + b;
}

// Arrow function
const addArrow = (a, b) => {
    return a + b;
}

// Shorter arrow function (implicit return)
const multiply = (a, b) => a * b;

console.log(multiply(5, 3)); // 15
```

**Example from your repository:**

```javascript
let arr = [2, 1, 3, 5, 6, 8, 9, 0, 0, 4];
let newArr = arr.filter((val) => {
    return val % 2 != 0
});
console.log(newArr); // [1, 3, 5, 9]
```

### Closures

**What is a Closure?** A closure is when an inner function has access to variables from its outer function, even after the outer function has finished executing.

**Example from your repository:**

```javascript
function createCounter() {
    let count = 0; // Private variable

    return function() {
        count++;
        return count;
    }
}

const counter1 = createCounter();
console.log(counter1());    // 1
console.log(counter1());    // 2

const counter2 = createCounter(); // New independent closure
console.log(counter2());    // 1
```

**Original Example:**

```javascript
function makeMultiplier(x) {
    return function(y) {
        return x * y;  // 'x' is remembered from outer function
    }
}

const multiplyBy5 = makeMultiplier(5);
console.log(multiplyBy5(3));  // 15
console.log(multiplyBy5(10)); // 50
```

---

## 4. Arrays

### Array Methods

```javascript
let cities = ["pune", "rajkot", "ahmedabad"];

// Add/Remove
cities.push("surat");      // Add at end
cities.pop();              // Remove from end
cities.unshift("mumbai");  // Add at start
cities.shift();            // Remove from start

// Others
cities.length;             // Get length
cities.indexOf("pune");    // Find index
cities.slice(0, 2);        // Extract portion
cities.reverse();          // Reverse array
```

### Array Higher-Order Methods

```javascript
let numbers = [1, 2, 3, 4, 5];

// map() - Transform each element
let squared = numbers.map(num => num * num);
console.log(squared); // [1, 4, 9, 16, 25]

// filter() - Keep elements that pass test
let evens = numbers.filter(num => num % 2 === 0);
console.log(evens); // [2, 4]

// reduce() - Reduce to single value
let sum = numbers.reduce((total, num) => total + num, 0);
console.log(sum); // 15
```

**Example from your repository:**

```javascript
let marks = [40, 60, 80, 90, 75];
let per = marks.reduce((res, marks) => {
    return res + marks;
});
let percentage = per / marks.length;
console.log(percentage); // 69
```

---

## 5. Objects

### Creating Objects

```javascript
// Object Literal
let student = {
    id: 1,
    name: "Rahul",
    city: "Ahmedabad",
    college: "LJ",
    sem: 1
};

// Accessing properties
console.log(student.name);     // Rahul
console.log(student["city"]);  // Ahmedabad

// Loop through object
for (let key in student) {
    console.log(key + ": " + student[key]);
}
```

### Constructor Functions

**Example from your repository:**

```javascript
class Restaurant {
    constructor(item, qty) {
        console.log('Constructor of restaurant !!!');
        this.item = item;
        this.qty = qty;
    }
    
    showMenu() {
        console.log('Pasta, Noodles, Dosa');
    }
    
    showBill() {
        console.log('Your bill is 12,00,000 INR');
    }
}

let order = new Restaurant('Dosa', 2);
order.showMenu();
order.showBill();
```

### Inheritance

**Example from your repository:**

```javascript
class University {
    constructor() {
        console.log('Constructor of University class');
    }
    
    start() {
        console.log('University start method');
    }
}

class College extends University {
    stop() {
        console.log('College stop method');
    }
}

let student = new College();
student.start();  // Inherited from University
student.stop();   // Own method
```

---

## 6. DOM Manipulation

### What is DOM?

- **Document Object Model** - tree structure of HTML elements
- JavaScript can access and modify HTML elements

### Selecting Elements

```javascript
// By ID
let btn = document.getElementById('btn');

// By Class
let buttons = document.getElementsByClassName('button');

// By Tag
let paragraphs = document.getElementsByTagName('p');

// Query Selector (CSS selectors)
let firstBtn = document.querySelector('.button');
let allBtns = document.querySelectorAll('.button');
```

**Example from your repository:**

```javascript
let div = document.querySelector('div');
console.log(div);

div.style.backgroundColor = 'red';
div.style.height = '100px';

let button = document.getElementById('button_id');
button.style.backgroundColor = 'green';
button.style.height = '40px';
```

### Modifying Elements

```javascript
// Change content
element.textContent = "New text";
element.innerHTML = "<strong>Bold text</strong>";

// Change attributes
element.setAttribute('class', 'active');
element.getAttribute('id');

// Change styles
element.style.color = "red";
element.style.fontSize = "20px";
```

### Creating Elements

**Example from your repository:**

```javascript
let btn1 = document.createElement("button");
btn1.textContent = 'Button';
btn1.style.backgroundColor = 'green';
document.body.append(btn1);

btn1.addEventListener("click", function() {
    btn1.style.backgroundColor = 'yellow';
});
```

---

## 7. Event Handling

### Event Listeners

```javascript
// Method 1: HTML attribute
<button onclick="handleClick()">Click Me</button>

// Method 2: JavaScript property
button.onclick = function() {
    console.log("Clicked!");
}

// Method 3: addEventListener (BEST)
button.addEventListener("click", function() {
    console.log("Clicked!");
});
```

### Common Events

**Example from your repository:**

```javascript
let btn1 = document.querySelector('button');

// Click event
btn1.onclick = () => {
    console.log('Button clicked!');
}

// Double click
btn1.ondblclick = () => {
    console.log('Button double clicked!');
}

let div = document.querySelector('div');

// Mouse events
div.onmouseover = () => {
    console.log('Mouse entered div');
}

div.onmouseleave = () => {
    console.log('Mouse left div');
}

// Keyboard events
let input = document.querySelector('#input-no');

input.onkeyup = () => {
    console.log('Key released');
}

input.onkeydown = () => {
    console.log('Key pressed');
}
```

---

# Unit II - Forms, AJAX, JSON

## 1. Form Handling

### Form Elements

```javascript
// Text input
let firstName = document.getElementById('first');
let value = firstName.value;  // Get value
firstName.value = "New Name"; // Set value

// Button
let submitBtn = document.getElementById('submit');

// Checkbox
let checkbox = document.getElementById('agree');
let isChecked = checkbox.checked;

// Radio button
let radio = document.querySelector('input[name="gender"]:checked');

// Select dropdown
let dropdown = document.getElementById('country');
let selectedValue = dropdown.value;
```

### Calculator Example from your repository

**HTML:**

```html
<h1>Simple Calculator</h1>
Enter 1st value: <input type="number" id="first">
<br><br>
Enter 2nd value: <input type="number" id="second">
<br><br>

<div class="calc-btns">
    <button onclick="add()">+</button>
    <button onclick="sub()">-</button>
    <button onclick="mult()">*</button>
    <button onclick="div()">/</button>
</div>

Answer: <input type="number" id="answer">
```

**JavaScript:**

```javascript
function add() {
    let a = Number(document.getElementById('first').value);
    let b = Number(document.getElementById('second').value);
    let c = a + b;
    document.getElementById('answer').value = c;
}

function sub() {
    let a = Number(document.getElementById('first').value);
    let b = Number(document.getElementById('second').value);
    let c = a - b;
    document.getElementById('answer').value = c;
}

function mult() {
    let a = Number(document.getElementById('first').value);
    let b = Number(document.getElementById('second').value);
    let c = a * b;
    document.getElementById('answer').value = c;
}

function div() {
    let a = Number(document.getElementById('first').value);
    let b = Number(document.getElementById('second').value);
    let c = a / b;
    document.getElementById('answer').value = c;
}
```

---

## 2. Cookies

### What are Cookies?

Small pieces of data stored in the browser to remember user information.

### Setting Cookies

```javascript
// Set a cookie
document.cookie = "username=John; expires=Fri, 31 Dec 2025 23:59:59 GMT; path=/";

// Set multiple properties
document.cookie = "theme=dark; max-age=3600; path=/"; // Expires in 1 hour
```

### Reading Cookies

```javascript
// Get all cookies
console.log(document.cookie); // "username=John; theme=dark"

// Parse cookies
function getCookie(name) {
    let cookies = document.cookie.split(';');
    for (let cookie of cookies) {
        let [key, value] = cookie.trim().split('=');
        if (key === name) return value;
    }
    return null;
}

console.log(getCookie('username')); // "John"
```

---

## 3. Asynchronous Programming

### What is Asynchronous?

- Code that doesn't run immediately
- Allows other code to run while waiting
- Used for API calls, timers, file reading

### Callbacks

**Example from your repository:**

```javascript
function getData(dataid, getNextData) {
    setTimeout(() => {
        console.log('Data', dataid);
        if (getNextData) {
            getNextData();
        }
    }, 2000);
}

// Callback Hell (nested callbacks)
getData(1, () => {
    console.log("Getting data 2");
    getData(2, () => {
        console.log('Getting data 3');
        getData(3, () => {
            console.log('Getting data 4');
            getData(4);
        })
    })
})
```

### Promises

**What is a Promise?** An object representing eventual completion or failure of an async operation.

```javascript
// Creating a Promise
function fetchData() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            let success = true;
            if (success) {
                resolve("Data fetched successfully!");
            } else {
                reject("Error fetching data");
            }
        }, 2000);
    });
}

// Using a Promise
fetchData()
    .then((result) => {
        console.log(result); // Success case
    })
    .catch((error) => {
        console.log(error);  // Error case
    });
```

**Example from your repository:**

```javascript
function asyncFunction() {
    return new Promise((resolve, reject) => {
        console.log("Fetching Data 1");
        resolve('Success');
    });
}

let p1 = asyncFunction();
p1.then((res) => {
    console.log(res); // "Success"
});
```

### Async/Await

```javascript
// Modern way to handle promises
async function fetchUserData() {
    try {
        const response = await fetch('https://api.example.com/user');
        const data = await response.json();
        console.log(data);
        return data;
    } catch (error) {
        console.error('Error:', error);
    } finally {
        console.log('Fetch complete');
    }
}

fetchUserData();
```

---

## 4. AJAX & Fetch API

### What is AJAX?

- **Asynchronous JavaScript And XML**
- Fetch data from server without reloading page
- Modern approach: use Fetch API

### Fetch API

```javascript
// GET request
fetch('https://api.example.com/data')
    .then(response => response.json())
    .then(data => {
        console.log(data);
    })
    .catch(error => {
        console.error('Error:', error);
    });

// POST request
fetch('https://api.example.com/data', {
    method: 'POST',
    headers: {
        'Content-Type': 'application/json'
    },
    body: JSON.stringify({
        name: 'John',
        age: 25
    })
})
.then(response => response.json())
.then(data => console.log(data));
```

**Example from your repository:**

```javascript
async function data() {
    console.log('Fetching data');
    try {
        const response = await fetch('https://api.genderize.io?name=luc');
        const response1 = await fetch('https://official-joke-api.appspot.com/random_joke');
        
        const data = await response.json();
        const data1 = await response1.json();
        
        console.log(data);
        console.log(data1);
        
        return data1;
    } catch (error) {
        console.error(error);
        throw error;
    } finally {
        console.log('Fetch complete');
    }
}

data();
```

---

## 5. JSON

### What is JSON?

- **JavaScript Object Notation**
- Text format for storing and exchanging data
- Language-independent

### JSON Syntax

```json
{
    "name": "John",
    "age": 30,
    "city": "New York",
    "hobbies": ["reading", "gaming"],
    "address": {
        "street": "123 Main St",
        "zipCode": "10001"
    }
}
```

### Working with JSON

```javascript
// JavaScript object
let person = {
    name: "John",
    age: 30,
    city: "New York"
};

// Convert to JSON string (Serialization)
let jsonString = JSON.stringify(person);
console.log(jsonString); 
// '{"name":"John","age":30,"city":"New York"}'

// Convert from JSON string (Parsing)
let jsonParsed = JSON.parse(jsonString);
console.log(jsonParsed.name); // "John"
```

### Real-world Example

```javascript
// Storing in localStorage as JSON
let userData = {
    username: "john_doe",
    preferences: {
        theme: "dark",
        language: "en"
    }
};

localStorage.setItem('user', JSON.stringify(userData));

// Retrieving from localStorage
let storedUser = JSON.parse(localStorage.getItem('user'));
console.log(storedUser.preferences.theme); // "dark"
```

---

## 6. Exception Handling

### Try-Catch-Finally

**Example from your repository:**

```javascript
try {
    console.log("Try starts");
    console.log(x, y); // Error: x and y not defined
    console.log("Try Ends");
} catch (e) {
    console.log(e + " Error Caught");
} finally {
    console.log("Final code - Always runs");
}
```

### Throwing Custom Errors

```javascript
function checkAge(age) {
    try {
        if (age < 18) {
            throw new Error("Age must be 18 or older");
        }
        console.log("Access granted");
    } catch (error) {
        console.log("Error:", error.message);
    }
}

checkAge(15); // Error: Age must be 18 or older
```

---

## 7. ES6+ Features

### Template Literals

```javascript
let name = "Rahul";
let age = 25;

// Old way
console.log("My name is " + name + " and I am " + age + " years old");

// ES6 way
console.log(`My name is ${name} and I am ${age} years old`);
```

### Destructuring

```javascript
// Array destructuring
let [a, b, c] = [1, 2, 3];
console.log(a); // 1

// Object destructuring
let person = { name: "John", age: 30, city: "NY" };
let { name, age } = person;
console.log(name); // "John"
```

### Spread Operator

```javascript
let arr1 = [1, 2, 3];
let arr2 = [4, 5, 6];

// Combine arrays
let combined = [...arr1, ...arr2];
console.log(combined); // [1, 2, 3, 4, 5, 6]

// Copy array
let copy = [...arr1];
```

### Modules (Import/Export)

```javascript
// math.js
export function add(a, b) {
    return a + b;
}

export const PI = 3.14;

// main.js
import { add, PI } from './math.js';
console.log(add(5, 3)); // 8
console.log(PI);        // 3.14
```

---

## 8. Web Storage

### localStorage

```javascript
// Store data (persists even after browser closes)
localStorage.setItem('username', 'John');
localStorage.setItem('theme', 'dark');

// Get data
let username = localStorage.getItem('username');
console.log(username); // "John"

// Remove item
localStorage.removeItem('theme');

// Clear all
localStorage.clear();
```

### sessionStorage

```javascript
// Similar to localStorage but clears when tab closes
sessionStorage.setItem('tempData', 'value');
let temp = sessionStorage.getItem('tempData');
```

---

# Unit III - Built-in Objects & Browser APIs

## 1. String Object

### String Methods

```javascript
let str = "Hello World";

// Case conversion
str.toUpperCase();      // "HELLO WORLD"
str.toLowerCase();      // "hello world"

// Search
str.indexOf("World");   // 6
str.lastIndexOf("o");   // 7
str.includes("World");  // true

// Extract
str.charAt(0);          // "H"
str.slice(0, 5);        // "Hello"
str.substring(0, 5);    // "Hello"
str.slice(-5);          // "World"

// Modify
str.replace("World", "JS");  // "Hello JS"
str.trim();             // Remove whitespace
str.split(" ");         // ["Hello", "World"]
```

**Example from your repository:**

```javascript
let nameOfUser = prompt('Enter your name');
let emailId = prompt('Enter your Email');

// Check if name length is even/odd
if (nameOfUser.length % 2 == 0) {
    console.log(nameOfUser.toUpperCase());
} else {
    console.log(nameOfUser.slice(-3)); // Last 3 characters
}

// Find @ index in email
console.log(emailId.indexOf('@'));
```

---

## 2. Math Object

### Math Methods

```javascript
let num = 4.7;

Math.round(num);     // 5
Math.floor(num);     // 4
Math.ceil(num);      // 5
Math.abs(-5);        // 5
Math.sqrt(16);       // 4
Math.pow(2, 3);      // 8
Math.max(5, 10, 3);  // 10
Math.min(5, 10, 3);  // 3
Math.random();       // Random number 0-1

// Random integer between min and max
function getRandomInt(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}
console.log(getRandomInt(1, 10)); // Random 1-10
```

**Example from your repository:**

```javascript
// Check if number is prime
function isPrime(num) {
    if (num <= 1) return false;
    for (let i = 2; i < num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Print non-prime numbers
function printNotPrime(n) {
    for (let i = 2; i < n; i++) {
        if (!isPrime(i)) console.log(i);
    }
}

let primeBtn = document.querySelector('#primeBtn');
primeBtn.addEventListener("click", function() {
    printNotPrime(500);
});
```

---

## 3. Date Object

### Working with Dates

```javascript
// Create date
let now = new Date();
let specific = new Date('2025-12-23');
let custom = new Date(2025, 11, 23); // Month is 0-indexed

// Get components
now.getFullYear();    // 2025
now.getMonth();       // 0-11 (January = 0)
now.getDate();        // Day of month
now.getDay();         // Day of week (0-6, Sunday = 0)
now.getHours();       // 0-23
now.getMinutes();     // 0-59
now.getSeconds();     // 0-59

// Set components
now.setFullYear(2026);
now.setMonth(5);
now.setDate(15);

// Format
now.toDateString();        // "Mon Dec 23 2025"
now.toTimeString();        // "14:30:00 GMT+0530"
now.toLocaleDateString();  // "23/12/2025"
```

**Original Example:**

```javascript
// Day of week checker
let today = new Date();
let dayNum = today.getDay();

let days = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 
            'Thursday', 'Friday', 'Saturday'];
            
console.log("Today is " + days[dayNum]);
```

---

## 4. Array Methods (Advanced)

### Array Methods

```javascript
let arr = [1, 2, 3, 4, 5];

// forEach - Loop through array
arr.forEach((item, index) => {
    console.log(`Index ${index}: ${item}`);
});

// find - Find first matching element
let found = arr.find(num => num > 3);
console.log(found); // 4

// findIndex - Find index of first match
let index = arr.findIndex(num => num > 3);
console.log(index); // 3

// some - Check if any element passes test
let hasEven = arr.some(num => num % 2 === 0);
console.log(hasEven); // true

// every - Check if all elements pass test
let allPositive = arr.every(num => num > 0);
console.log(allPositive); // true

// includes - Check if array contains value
arr.includes(3); // true

// join - Convert to string
arr.join('-'); // "1-2-3-4-5"
```

---

## 5. Browser Objects

### Window Object

```javascript
// Alert, Prompt, Confirm
window.alert("Hello!");
let name = window.prompt("Enter name:");
let confirmed = window.confirm("Are you sure?");

// Window properties
window.innerWidth;   // Browser width
window.innerHeight;  // Browser height

// Open new window
window.open("https://google.com", "_blank");

// Scroll
window.scrollTo(0, 500); // Scroll to position
window.scrollBy(0, 100); // Scroll by amount
```

### Document Object

```javascript
// Already covered in DOM section
document.getElementById('id');
document.querySelector('.class');
document.title = "New Title";
document.URL;
```

### Navigator Object

```javascript
// Browser information
navigator.userAgent;     // Browser details
navigator.language;      // "en-US"
navigator.onLine;        // true/false (internet connection)
navigator.platform;      // Operating system
navigator.cookieEnabled; // Cookies enabled?

// Geolocation
navigator.geolocation.getCurrentPosition((position) => {
    console.log(position.coords.latitude);
    console.log(position.coords.longitude);
});
```

### History Object

```javascript
// Browser history
history.back();      // Go back one page
history.forward();   // Go forward one page
history.go(-2);      // Go back 2 pages
```

---

## 6. Timers

### setTimeout

```javascript
// Execute once after delay
setTimeout(() => {
    console.log("This runs after 3 seconds");
}, 3000);

// With parameters
function greet(name) {
    console.log("Hello " + name);
}
setTimeout(greet, 2000, "John");

// Cancel timeout
let timerId = setTimeout(() => {
    console.log("This won't run");
}, 5000);
clearTimeout(timerId);
```

**Example from your repository:**

```javascript
function display() {
    console.log("Hello");
}

setTimeout(display, 4000);

function show() {
    console.log("Hey");
}

setTimeout(show, 1000);
```

### setInterval

```javascript
// Execute repeatedly at intervals
let counter = 0;
let intervalId = setInterval(() => {
    counter++;
    console.log(counter);
    
    if (counter === 5) {
        clearInterval(intervalId); // Stop after 5
    }
}, 1000); // Every 1 second
```

---

## 7. Regular Expressions (RegExp)

### Creating RegExp

```javascript
// Method 1: Literal notation
let pattern1 = /hello/i; // i = case-insensitive

// Method 2: Constructor
let pattern2 = new RegExp('hello', 'i');
```

### Common Patterns

```javascript
let text = "My phone is 1234567890";

// Test if pattern exists
let phonePattern = /\d{10}/;
console.log(phonePattern.test(text)); // true

// Find matches
let matches = text.match(/\d+/g);
console.log(matches); // ["1234567890"]

// Replace
let censored = text.replace(/\d/g, 'X');
console.log(censored); // "My phone is XXXXXXXXXX"
```

### Pattern Symbols

```javascript
\d  // Any digit
\w  // Any word character
\s  // Any whitespace
.   // Any character
^   // Start of string
$   // End of string
+   // One or more
*   // Zero or more
?   // Zero or one
{n} // Exactly n times
```

**Original Example: Email Validation**

```javascript
function validateEmail(email) {
    let pattern = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}$/;
    return pattern.test(email);
}

console.log(validateEmail("test@example.com")); // true
console.log(validateEmail("invalid.email"));     // false
```

---

## 8. Iterators and Generators

### Iterators

**Example from your repository:**

```javascript
function createArrayIterator(arr) {
    let index = 0;
    return {
        next: function() {
            if (index < arr.length) {
                return { value: arr[index++], done: false };
            } else {
                return { value: undefined, done: true };
            }
        }
    }
}

const myIterator = createArrayIterator([1, 2, 3]);
console.log(myIterator.next()); // { value: 1, done: false }
console.log(myIterator.next()); // { value: 2, done: false }
console.log(myIterator.next()); // { value: 3, done: false }
console.log(myIterator.next()); // { value: undefined, done: true }
```

### Generators

**Example from your repository:**

```javascript
function* countUpTo(limit) {
    let i = 1;
    while (i <= limit) {
        yield i;  // Pause and return value
        i++;
    }
}

const counter = countUpTo(3);
console.log(counter.next()); // { value: 1, done: false }
console.log(counter.next()); // { value: 2, done: false }
console.log(counter.next()); // { value: 3, done: false }
console.log(counter.next()); // { value: undefined, done: true }
```

---

# Unit IV - jQuery (DETAILED FOR BEGINNERS)

## Introduction to jQuery

### What is jQuery?

- **jQuery is a JavaScript library** that makes JavaScript easier to use
- It simplifies DOM manipulation, event handling, AJAX, and animations
- **Why use it?** Write less code to do the same thing as vanilla JavaScript

### Including jQuery

```html
<!-- Add this in your HTML <head> or before </body> -->
<script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
```

### Basic Syntax

```javascript
// Vanilla JavaScript
document.getElementById('myId');

// jQuery equivalent - much shorter!
$('#myId')

// The $ symbol is jQuery
// Basic syntax: $(selector).action()
```

### Document Ready

```javascript
// Wait for page to load before running code
$(document).ready(function() {
    // Your jQuery code here
});

// Shorthand
$(function() {
    // Your jQuery code here
});
```

---

## jQuery Selectors

### Basic Selectors

```javascript
// By ID
$('#myId')           // Same as document.getElementById('myId')

// By class
$('.myClass')        // All elements with class 'myClass'

// By tag
$('p')               // All <p> tags
$('div')             // All <div> tags

// Multiple selectors
$('h1, h2, h3')      // All h1, h2, and h3 elements
```

### Attribute Selectors

```javascript
$('[name]')                // Elements with 'name' attribute
$('[name="username"]')     // Elements with name="username"
$('input[type="text"]')    // Text inputs
$('a[target="_blank"]')    // Links that open in new tab
```

### Pseudo Selectors

```javascript
$('li:first')        // First <li> element
$('li:last')         // Last <li> element
$('li:even')         // Even <li> elements (0, 2, 4...)
$('li:odd')          // Odd <li> elements (1, 3, 5...)
$('input:checked')   // Checked checkboxes/radio buttons
$('input:disabled')  // Disabled inputs
```

---

## jQuery Traversal Methods

### Finding Elements

```javascript
// HTML structure:
// <div class="parent">
//   <p>First</p>
//   <p class="special">Second</p>
//   <p>Third</p>
// </div>

// children() - Direct children only
$('.parent').children();           // All <p> tags
$('.parent').children('.special'); // Only <p class="special">

// find() - All descendants
$('.parent').find('p');            // All <p> inside parent

// parent() - Direct parent
$('.special').parent();            // Returns the <div>

// siblings() - All siblings
$('.special').siblings();          // First and Third <p>

// next() and prev() - Adjacent siblings
$('.special').next();              // Third <p>
$('.special').prev();              // First <p>
```

### Filtering Elements

```javascript
let items = $('li');

// eq() - Element at specific index (0-based)
items.eq(0);         // First item
items.eq(2);         // Third item

// first() - First element
items.first();       // First <li>

// last() - Last element
items.last();        // Last <li>

// filter() - Elements matching condition
items.filter('.active');           // Items with class 'active'
items.filter(function(index) {     // Custom filter
    return $(this).text().includes('Hello');
});

// not() - Exclude elements
items.not('.active');  // Items WITHOUT class 'active'
```

**Complete Example:**

```javascript
// HTML:
// <ul>
//   <li>Item 1</li>
//   <li class="highlight">Item 2</li>
//   <li>Item 3</li>
//   <li>Item 4</li>
// </ul>

$(function() {
    // Select second item
    $('li').eq(1).css('color', 'red');
    
    // Find item with class
    let highlighted = $('li').filter('.highlight');
    
    // Get next sibling
    highlighted.next().css('font-weight', 'bold');
    
    // Get all siblings except highlighted
    highlighted.siblings().css('background', 'yellow');
});
```

---

## jQuery Methods for Content & Attributes

### Getting and Setting Content

```javascript
// text() - Get/set text content
$('p').text();                    // Get text of first <p>
$('p').text('New text');          // Set text of ALL <p>

// html() - Get/set HTML content
$('div').html();                  // Get HTML inside first <div>
$('div').html('<strong>Bold</strong>'); // Set HTML

// val() - Get/set form input values
$('#username').val();             // Get input value
$('#username').val('John');       // Set input value
```

### Working with Attributes

```javascript
// attr() - Get/set attributes
$('img').attr('src');                    // Get src
$('img').attr('src', 'new-image.jpg');   // Set src
$('a').attr('href', 'https://google.com'); // Set href

// Multiple attributes at once
$('img').attr({
    src: 'image.jpg',
    alt: 'Description',
    width: '200'
});

// removeAttr() - Remove attribute
$('img').removeAttr('width');

// prop() - Get/set properties (for checked, disabled, etc.)
$('#checkbox').prop('checked');          // Get checked state
$('#checkbox').prop('checked', true);    // Check it
$('#submit').prop('disabled', false);    // Enable button
```

**Example:**

```javascript
// HTML: <input type="text" id="name" placeholder="Enter name">
// HTML: <img id="photo" src="default.jpg">

$(function() {
    // Set input value
    $('#name').val('John Doe');
    
    // Change image
    $('#photo').attr('src', 'profile.jpg');
    
    // Read and display
    let name = $('#name').val();
    console.log('Name is: ' + name);
});
```

---

## jQuery CSS Methods

### Manipulating Styles

```javascript
// css() - Get/set CSS properties

// Get single property
$('p').css('color');              // Get color of first <p>

// Set single property
$('p').css('color', 'red');       // Set color of ALL <p>

// Set multiple properties
$('div').css({
    'background-color': 'blue',
    'font-size': '20px',
    'padding': '10px',
    'border-radius': '5px'
});
```

### Class Methods

```javascript
// addClass() - Add class
$('p').addClass('highlight');
$('p').addClass('highlight bold');  // Multiple classes

// removeClass() - Remove class
$('p').removeClass('highlight');
$('p').removeClass();               // Remove all classes

// toggleClass() - Toggle class
$('p').toggleClass('active');       // Add if not there, remove if there

// hasClass() - Check if class exists
if ($('p').hasClass('highlight')) {
    console.log('Has highlight class');
}
```

**Practical Example:**

```javascript
// HTML:
// <button id="toggleBtn">Toggle Theme</button>
// <div id="content">Content here</div>

// CSS:
// .dark-theme { background: #333; color: white; }
// .light-theme { background: white; color: black; }

$(function() {
    $('#toggleBtn').click(function() {
        $('#content').toggleClass('dark-theme');
        $('#content').toggleClass('light-theme');
    });
});
```

---

## jQuery Show/Hide & Effects

### Basic Visibility

```javascript
// hide() - Hide element
$('p').hide();                // Hide immediately
$('p').hide(1000);            // Hide with 1 second fade

// show() - Show element
$('p').show();                // Show immediately
$('p').show(500);             // Show with 0.5 second fade

// toggle() - Toggle show/hide
$('p').toggle();              // Toggle visibility
$('p').toggle(1000);          // Toggle with animation
```

### Fading

```javascript
// fadeIn() - Fade in
$('div').fadeIn();            // Fade in
$('div').fadeIn(2000);        // Fade in over 2 seconds

// fadeOut() - Fade out
$('div').fadeOut(1000);       // Fade out over 1 second

// fadeToggle() - Toggle fade
$('div').fadeToggle();

// fadeTo() - Fade to specific opacity
$('div').fadeTo(1000, 0.5);   // Fade to 50% opacity
```

### Sliding

```javascript
// slideDown() - Slide down
$('div').slideDown();         // Slide down
$('div').slideDown(1000);     // Slide down over 1 second

// slideUp() - Slide up
$('div').slideUp(500);        // Slide up

// slideToggle() - Toggle slide
$('div').slideToggle();
```

### Custom Animation

```javascript
// animate() - Custom animation
$('div').animate({
    left: '250px',
    opacity: '0.5',
    height: '150px',
    width: '150px'
}, 1000);                     // Duration in milliseconds

// Multiple animations in sequence
$('div')
    .animate({left: '250px'}, 1000)
    .animate({top: '250px'}, 1000)
    .animate({left: '0px'}, 1000)
    .animate({top: '0px'}, 1000);
```

**Complete Example - Accordion:**

```javascript
// HTML:
// <div class="accordion">
//   <h3>Section 1</h3>
//   <div class="content">Content 1</div>
//   <h3>Section 2</h3>
//   <div class="content">Content 2</div>
// </div>

$(function() {
    // Hide all content initially
    $('.content').hide();
    
    // When heading is clicked
    $('.accordion h3').click(function() {
        // Hide all content
        $('.content').slideUp();
        
        // Show this content
        $(this).next('.content').slideDown();
    });
});
```

---

## jQuery Events

### Common Events

```javascript
// click() - Mouse click
$('button').click(function() {
    alert('Button clicked!');
});

// dblclick() - Double click
$('button').dblclick(function() {
    alert('Double clicked!');
});

// mouseenter() - Mouse enters element
$('div').mouseenter(function() {
    $(this).css('background', 'yellow');
});

// mouseleave() - Mouse leaves element
$('div').mouseleave(function() {
    $(this).css('background', 'white');
});

// hover() - Combines mouseenter and mouseleave
$('div').hover(
    function() {
        // Mouse enters
        $(this).css('background', 'yellow');
    },
    function() {
        // Mouse leaves
        $(this).css('background', 'white');
    }
);
```

### Form Events

```javascript
// focus() - Input gets focus
$('input').focus(function() {
    $(this).css('border', '2px solid blue');
});

// blur() - Input loses focus
$('input').blur(function() {
    $(this).css('border', '1px solid gray');
});

// change() - Input value changes
$('select').change(function() {
    let selected = $(this).val();
    console.log('Selected: ' + selected);
});

// submit() - Form submitted
$('form').submit(function(e) {
    e.preventDefault(); // Prevent actual submission
    let name = $('#name').val();
    alert('Form submitted with name: ' + name);
});
```

### The on() Method (IMPORTANT)

```javascript
// on() - Attach event handler (modern way)

// Single event
$('button').on('click', function() {
    alert('Clicked!');
});

// Multiple events
$('input').on('focus blur', function() {
    $(this).toggleClass('active');
});

// Multiple events with different handlers
$('button').on({
    mouseenter: function() {
        $(this).css('background', 'blue');
    },
    mouseleave: function() {
        $(this).css('background', 'gray');
    },
    click: function() {
        alert('Clicked!');
    }
});

// Event delegation (for dynamic elements)
$('ul').on('click', 'li', function() {
    // Works even for <li> added after page load
    $(this).toggleClass('selected');
});
```

**Practical Example - To-Do List:**

```javascript
// HTML:
// <input type="text" id="taskInput">
// <button id="addBtn">Add Task</button>
// <ul id="taskList"></ul>

$(function() {
    // Add task
    $('#addBtn').on('click', function() {
        let task = $('#taskInput').val();
        if (task) {
            $('#taskList').append('<li>' + task + '</li>');
            $('#taskInput').val(''); // Clear input
        }
    });
    
    // Mark task as complete (works for dynamically added items)
    $('#taskList').on('click', 'li', function() {
        $(this).toggleClass('completed');
    });
});
```

---

## jQuery AJAX

### Basic AJAX with jQuery

```javascript
// $.ajax() - Full control
$.ajax({
    url: 'https://api.example.com/data',
    method: 'GET',
    success: function(data) {
        console.log('Success:', data);
    },
    error: function(error) {
        console.log('Error:', error);
    }
});

// $.get() - Simpler GET request
$.get('https://api.example.com/data', function(data) {
    console.log('Data received:', data);
});

// $.post() - POST request
$.post('https://api.example.com/data', {
    name: 'John',
    age: 30
}, function(response) {
    console.log('Server response:', response);
});

// $.getJSON() - Get JSON data
$.getJSON('https://api.example.com/users', function(data) {
    $.each(data, function(index, user) {
        console.log(user.name);
    });
});
```

**Practical Example - Load User Data:**

```javascript
// HTML:
// <button id="loadBtn">Load Users</button>
// <div id="userList"></div>

$(function() {
    $('#loadBtn').click(function() {
        // Show loading message
        $('#userList').html('Loading...');
        
        // Fetch data
        $.ajax({
            url: 'https://jsonplaceholder.typicode.com/users',
            method: 'GET',
            success: function(users) {
                // Clear loading message
                $('#userList').html('');
                
                // Display each user
                $.each(users, function(i, user) {
                    $('#userList').append(
                        '<p>' + user.name + ' - ' + user.email + '</p>'
                    );
                });
            },
            error: function() {
                $('#userList').html('Error loading data');
            }
        });
    });
});
```

---

## jQuery Chaining

### What is Chaining?

Perform multiple operations in one line.

```javascript
// Without chaining
$('p').css('color', 'red');
$('p').slideUp(1000);
$('p').slideDown(1000);

// With chaining
$('p').css('color', 'red').slideUp(1000).slideDown(1000);

// More complex example
$('button')
    .addClass('btn-primary')
    .text('Click Me')
    .css('padding', '10px')
    .on('click', function() {
        alert('Clicked!');
    });
```

### add() Method

```javascript
// Add more elements to selection
$('p')
    .add('h1')
    .add('.special')
    .css('color', 'red');
// Now all <p>, <h1>, and .special elements are red
```

---

## Complete jQuery Example

```html
<!DOCTYPE html>
<html>
<head>
    <title>jQuery Demo</title>
    <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
    <style>
        .highlight { background: yellow; }
        .hidden { display: none; }
        .panel { padding: 20px; margin: 10px; background: #f0f0f0; }
    </style>
</head>
<body>
    <h1>jQuery Demo</h1>
    
    <button id="showBtn">Show Panel</button>
    <button id="hideBtn">Hide Panel</button>
    <button id="toggleBtn">Toggle Panel</button>
    
    <div class="panel hidden">
        <h2>This is a panel</h2>
        <p>Content goes here...</p>
    </div>
    
    <input type="text" id="nameInput" placeholder="Enter your name">
    <button id="greetBtn">Greet Me</button>
    <p id="greeting"></p>
    
    <script>
        $(function() {
            // Show button
            $('#showBtn').on('click', function() {
                $('.panel').slideDown(500);
            });
            
            // Hide button
            $('#hideBtn').on('click', function() {
                $('.panel').slideUp(500);
            });
            
            // Toggle button
            $('#toggleBtn').on('click', function() {
                $('.panel').slideToggle(500);
            });
            
            // Greet button
            $('#greetBtn').on('click', function() {
                let name = $('#nameInput').val();
                if (name) {
                    $('#greeting')
                        .text('Hello, ' + name + '!')
                        .addClass('highlight')
                        .fadeIn();
                } else {
                    alert('Please enter your name');
                }
            });
        });
    </script>
</body>
</html>
```

---

# Unit V - ReactJS (DETAILED FOR BEGINNERS)

## Introduction to React

### What is React?

- **React is a JavaScript library for building user interfaces**
- Created by Facebook (Meta)
- Used to build **Single Page Applications (SPAs)**
- Think of it like building with LEGO blocks - you create small pieces (components) and combine them

### Why Use React?

1. **Component-Based**: Build reusable UI pieces
2. **Fast**: Uses Virtual DOM for efficient updates
3. **Popular**: Huge community and job opportunities
4. **Declarative**: You describe what you want, React handles the how

### Traditional vs React Way

```javascript
// Traditional JavaScript
document.getElementById('counter').innerHTML = count;
count++;
document.getElementById('counter').innerHTML = count;
// Manual DOM updates everywhere

// React Way
function Counter() {
    const [count, setCount] = useState(0);
    return <button onClick={() => setCount(count + 1)}>{count}</button>;
}
// React automatically updates the UI when data changes
```

---

## Setting Up React

### Option 1: Online (CodePen, CodeSandbox)

Quick way to practice React without installation.

### Option 2: Create React App (Local)

```bash
# Install Node.js first, then run:
npx create-react-app my-first-app
cd my-first-app
npm start
```

### Option 3: CDN (Simple HTML file)

```html
<!DOCTYPE html>
<html>
<head>
    <title>React Demo</title>
</head>
<body>
    <div id="root"></div>
    
    <!-- React Libraries -->
    <script crossorigin src="https://unpkg.com/react@18/umd/react.development.js"></script>
    <script crossorigin src="https://unpkg.com/react-dom@18/umd/react-dom.development.js"></script>
    <script src="https://unpkg.com/@babel/standalone/babel.min.js"></script>
    
    <script type="text/babel">
        // Your React code here
        function App() {
            return <h1>Hello React!</h1>;
        }
        
        ReactDOM.render(<App />, document.getElementById('root'));
    </script>
</body>
</html>
```

---

## JSX - The React Syntax

### What is JSX?

- **JavaScript XML** - looks like HTML but it's JavaScript
- Lets you write HTML-like code inside JavaScript
- Must be converted to regular JavaScript (using Babel)

### JSX Rules

```javascript
// Rule 1: Must return single parent element
// ✗ Wrong
function App() {
    return (
        <h1>Title</h1>
        <p>Paragraph</p>
    );
}

// ✓ Correct - Wrapped in single parent
function App() {
    return (
        <div>
            <h1>Title</h1>
            <p>Paragraph</p>
        </div>
    );
}

// ✓ Also correct - Using React Fragment
function App() {
    return (
        <>
            <h1>Title</h1>
            <p>Paragraph</p>
        </>
    );
}
```

```javascript
// Rule 2: JavaScript expressions in {}
function App() {
    const name = "John";
    const age = 25;
    
    return (
        <div>
            <h1>Hello {name}</h1>
            <p>You are {age} years old</p>
            <p>Next year you'll be {age + 1}</p>
        </div>
    );
}
```

```javascript
// Rule 3: className instead of class
// ✗ Wrong
<div class="container">

// ✓ Correct
<div className="container">
```

```javascript
// Rule 4: All tags must close
// ✗ Wrong
<img src="pic.jpg">
<input type="text">

// ✓ Correct
<img src="pic.jpg" />
<input type="text" />
```

### JSX vs HTML Differences

```javascript
// HTML attributes → JSX
onclick       → onClick
onchange      → onChange
class         → className
for (label)   → htmlFor
style="..."   → style={{}}

// Style in JSX (object with camelCase)
<div style={{
    backgroundColor: 'blue',
    fontSize: '20px',
    padding: '10px'
}}>
```

---

## Components - The Building Blocks

### What is a Component?

Think of components as **custom HTML tags** you create. Like LEGO blocks that you can reuse.

### Types of Components

#### 1. Function Components (Modern way)

```javascript
// Simple component
function Welcome() {
    return <h1>Hello World!</h1>;
}

// Component with variable
function Greeting() {
    const name = "John";
    return <h1>Hello {name}!</h1>;
}

// Using the component
function App() {
    return (
        <div>
            <Welcome />
            <Greeting />
        </div>
    );
}
```

#### 2. Component with Props (like function parameters)

```javascript
// Component that accepts props
function UserCard(props) {
    return (
        <div className="card">
            <h2>{props.name}</h2>
            <p>Age: {props.age}</p>
            <p>City: {props.city}</p>
        </div>
    );
}

// Using the component with different data
function App() {
    return (
        <div>
            <UserCard name="John" age={25} city="Mumbai" />
            <UserCard name="Sara" age={22} city="Delhi" />
            <UserCard name="Mike" age={28} city="Bangalore" />
        </div>
    );
}
```

#### Destructuring Props (Cleaner code)

```javascript
// Instead of props.name, props.age everywhere...
function UserCard({ name, age, city }) {
    return (
        <div className="card">
            <h2>{name}</h2>
            <p>Age: {age}</p>
            <p>City: {city}</p>
        </div>
    );
}
```

### Practical Example - Product Card

```javascript
function ProductCard({ name, price, image }) {
    return (
        <div className="product">
            <img src={image} alt={name} />
            <h3>{name}</h3>
            <p>₹{price}</p>
            <button>Add to Cart</button>
        </div>
    );
}

function App() {
    return (
        <div>
            <h1>Our Products</h1>
            <ProductCard 
                name="Laptop" 
                price={45000} 
                image="laptop.jpg" 
            />
            <ProductCard 
                name="Phone" 
                price={25000} 
                image="phone.jpg" 
            />
        </div>
    );
}
```

---

## State - Making Components Interactive

### What is State?

- **State is data that can change** in your component
- When state changes, React automatically re-renders the component
- Like a variable, but special - React watches it

### useState Hook

```javascript
import { useState } from 'react';

function Counter() {
    // Declare state
    // [currentValue, functionToUpdateIt]
    const [count, setCount] = useState(0);  // 0 is initial value
    
    return (
        <div>
            <p>Count: {count}</p>
            <button onClick={() => setCount(count + 1)}>
                Increment
            </button>
        </div>
    );
}
```

### How useState Works

```javascript
const [count, setCount] = useState(0);
//     ↓       ↓                     ↓
//   current  function          initial
//   value    to update         value

// To change state, use the set function
setCount(5);           // Set to 5
setCount(count + 1);   // Increment by 1
setCount(count * 2);   // Double it
```

### Multiple State Variables

```javascript
function UserProfile() {
    const [name, setName] = useState('');
    const [age, setAge] = useState(0);
    const [city, setCity] = useState('');
    
    return (
        <div>
            <input 
                value={name}
                onChange={(e) => setName(e.target.value)}
                placeholder="Name"
            />
            <input 
                value={age}
                onChange={(e) => setAge(e.target.value)}
                placeholder="Age"
            />
            <input 
                value={city}
                onChange={(e) => setCity(e.target.value)}
                placeholder="City"
            />
            
            <h2>Your Profile:</h2>
            <p>Name: {name}</p>
            <p>Age: {age}</p>
            <p>City: {city}</p>
        </div>
    );
}
```

### State with Objects

```javascript
function UserForm() {
    const [user, setUser] = useState({
        name: '',
        email: '',
        age: 0
    });
    
    const handleChange = (e) => {
        setUser({
            ...user,  // Keep other fields
            [e.target.name]: e.target.value  // Update this field
        });
    };
    
    return (
        <form>
            <input 
                name="name"
                value={user.name}
                onChange={handleChange}
            />
            <input 
                name="email"
                value={user.email}
                onChange={handleChange}
            />
            <input 
                name="age"
                value={user.age}
                onChange={handleChange}
            />
        </form>
    );
}
```

### State with Arrays

```javascript
function TodoList() {
    const [todos, setTodos] = useState(['Task 1', 'Task 2']);
    const [input, setInput] = useState('');
    
    const addTodo = () => {
        setTodos([...todos, input]);  // Add new item
        setInput('');  // Clear input
    };
    
    return (
        <div>
            <input 
                value={input}
                onChange={(e) => setInput(e.target.value)}
            />
            <button onClick={addTodo}>Add</button>
            
            <ul>
                {todos.map((todo, index) => (
                    <li key={index}>{todo}</li>
                ))}
            </ul>
        </div>
    );
}
```

---

## Events in React

### Handling Events

```javascript
function EventDemo() {
    // Event handlers
    const handleClick = () => {
        alert('Button clicked!');
    };
    
    const handleInput = (e) => {
        console.log('Typing:', e.target.value);
    };
    
    const handleSubmit = (e) => {
        e.preventDefault();  // Prevent page reload
        alert('Form submitted');
    };
    
    return (
        <div>
            <button onClick={handleClick}>Click Me</button>
            
            <input 
                type="text" 
                onChange={handleInput}
            />
            
            <form onSubmit={handleSubmit}>
                <input type="text" />
                <button type="submit">Submit</button>
            </form>
        </div>
    );
}
```

### Common Events

```javascript
onClick       // Click
onChange      // Input changes
onSubmit      // Form submit
onMouseEnter  // Mouse enters
onMouseLeave  // Mouse leaves
onFocus       // Input gets focus
onBlur        // Input loses focus
onKeyDown     // Key pressed
onKeyUp       // Key released
```

---

## Conditional Rendering

### Show/Hide Based on Condition

```javascript
function LoginStatus() {
    const [isLoggedIn, setIsLoggedIn] = useState(false);
    
    return (
        <div>
            {isLoggedIn ? (
                <h1>Welcome back!</h1>
            ) : (
                <h1>Please log in</h1>
            )}
            
            <button onClick={() => setIsLoggedIn(!isLoggedIn)}>
                {isLoggedIn ? 'Logout' : 'Login'}
            </button>
        </div>
    );
}
```

### && Operator (Show if true)

```javascript
function Notification() {
    const [hasMessage, setHasMessage] = useState(true);
    
    return (
        <div>
            {hasMessage && (
                <div className="alert">
                    You have new messages!
                </div>
            )}
        </div>
    );
}
```

### Multiple Conditions

```javascript
function UserStatus({ role }) {
    if (role === 'admin') {
        return <h1>Admin Dashboard</h1>;
    } else if (role === 'user') {
        return <h1>User Dashboard</h1>;
    } else {
        return <h1>Guest Access</h1>;
    }
}

// Usage
<UserStatus role="admin" />
```

---

## Lists and Keys

### Rendering Lists

```javascript
function StudentList() {
    const students = ['John', 'Sara', 'Mike', 'Emma'];
    
    return (
        <ul>
            {students.map((student, index) => (
                <li key={index}>{student}</li>
            ))}
        </ul>
    );
}
```

### Lists with Objects

```javascript
function ProductList() {
    const products = [
        { id: 1, name: 'Laptop', price: 50000 },
        { id: 2, name: 'Phone', price: 30000 },
        { id: 3, name: 'Tablet', price: 20000 }
    ];
    
    return (
        <div>
            {products.map((product) => (
                <div key={product.id} className="product-card">
                    <h3>{product.name}</h3>
                    <p>₹{product.price}</p>
                    <button>Buy Now</button>
                </div>
            ))}
        </div>
    );
}
```

### Why Keys are Important?

- **Keys help React identify which items changed**
- Use unique IDs, not array index if possible
- Never use random values

---

## useEffect Hook - Side Effects

### What is useEffect?

- For code that should run **after** the component renders
- Used for: API calls, timers, subscriptions, DOM manipulation

### Basic useEffect

```javascript
import { useState, useEffect } from 'react';

function Timer() {
    const [seconds, setSeconds] = useState(0);
    
    // Runs after every render
    useEffect(() => {
        console.log('Component rendered');
    });
    
    return <div>Seconds: {seconds}</div>;
}
```

### useEffect with Dependencies

```javascript
function User({ userId }) {
    const [user, setUser] = useState(null);
    
    // Runs only when userId changes
    useEffect(() => {
        fetch(`https://api.example.com/users/${userId}`)
            .then(res => res.json())
            .then(data => setUser(data));
    }, [userId]);  // Dependency array
    
    return <div>{user ? user.name : 'Loading...'}</div>;
}
```

### useEffect Patterns

```javascript
// Run once on mount (empty dependency array)
useEffect(() => {
    console.log('Component mounted');
}, []);

// Run when specific value changes
useEffect(() => {
    console.log('Count changed:', count);
}, [count]);

// Cleanup function (runs before unmount)
useEffect(() => {
    const timer = setInterval(() => {
        console.log('Tick');
    }, 1000);
    
    return () => {
        clearInterval(timer);  // Cleanup
    };
}, []);
```

### Practical Example - Data Fetching

```javascript
function UserList() {
    const [users, setUsers] = useState([]);
    const [loading, setLoading] = useState(true);
    
    useEffect(() => {
        // Fetch data when component mounts
        fetch('https://jsonplaceholder.typicode.com/users')
            .then(response => response.json())
            .then(data => {
                setUsers(data);
                setLoading(false);
            });
    }, []);  // Empty array = run once
    
    if (loading) {
        return <p>Loading...</p>;
    }
    
    return (
        <ul>
            {users.map(user => (
                <li key={user.id}>
                    {user.name} - {user.email}
                </li>
            ))}
        </ul>
    );
}
```

---

## Forms in React

### Controlled Components

```javascript
function ContactForm() {
    const [formData, setFormData] = useState({
        name: '',
        email: '',
        message: ''
    });
    
    const handleChange = (e) => {
        setFormData({
            ...formData,
            [e.target.name]: e.target.value
        });
    };
    
    const handleSubmit = (e) => {
        e.preventDefault();
        console.log('Form submitted:', formData);
        // Send to server here
    };
    
    return (
        <form onSubmit={handleSubmit}>
            <input
                name="name"
                value={formData.name}
                onChange={handleChange}
                placeholder="Name"
            />
            
            <input
                name="email"
                value={formData.email}
                onChange={handleChange}
                placeholder="Email"
            />
            
            <textarea
                name="message"
                value={formData.message}
                onChange={handleChange}
                placeholder="Message"
            />
            
            <button type="submit">Send</button>
        </form>
    );
}
```

---

## Complete React Example - Todo App

```javascript
import { useState } from 'react';

function TodoApp() {
    const [todos, setTodos] = useState([]);
    const [input, setInput] = useState('');
    
    const addTodo = () => {
        if (input.trim()) {
            setTodos([
                ...todos, 
                { id: Date.now(), text: input, completed: false }
            ]);
            setInput('');
        }
    };
    
    const toggleTodo = (id) => {
        setTodos(todos.map(todo =>
            todo.id === id 
                ? { ...todo, completed: !todo.completed }
                : todo
        ));
    };
    
    const deleteTodo = (id) => {
        setTodos(todos.filter(todo => todo.id !== id));
    };
    
    return (
        <div className="todo-app">
            <h1>My Todo List</h1>
            
            <div className="add-todo">
                <input
                    value={input}
                    onChange={(e) => setInput(e.target.value)}
                    onKeyPress={(e) => e.key === 'Enter' && addTodo()}
                    placeholder="Add a new task..."
                />
                <button onClick={addTodo}>Add</button>
            </div>
            
            <ul className="todo-list">
                {todos.map(todo => (
                    <li 
                        key={todo.id}
                        className={todo.completed ? 'completed' : ''}
                    >
                        <input
                            type="checkbox"
                            checked={todo.completed}
                            onChange={() => toggleTodo(todo.id)}
                        />
                        <span>{todo.text}</span>
                        <button onClick={() => deleteTodo(todo.id)}>
                            Delete
                        </button>
                    </li>
                ))}
            </ul>
            
            <p>Total tasks: {todos.length}</p>
            <p>Completed: {todos.filter(t => t.completed).length}</p>
        </div>
    );
}

export default TodoApp;
```

---

## Component Lifecycle

### Mounting (Component Created)

```javascript
useEffect(() => {
    console.log('Component mounted');
    // Initial data fetch, set up subscriptions
}, []);
```

### Updating (State/Props Change)

```javascript
useEffect(() => {
    console.log('Component updated');
    // Run when specific data changes
}, [count, name]);
```

### Unmounting (Component Removed)

```javascript
useEffect(() => {
    return () => {
        console.log('Component will unmount');
        // Cleanup: clear timers, cancel requests
    };
}, []);
```

---

## React Project Structure

```
my-app/
├── public/
│   └── index.html
├── src/
│   ├── components/
│   │   ├── Header.js
│   │   ├── Footer.js
│   │   └── UserCard.js
│   ├── App.js
│   ├── App.css
│   └── index.js
└── package.json
```

### Creating Reusable Components

```javascript
// components/Button.js
function Button({ text, onClick, color }) {
    return (
        <button 
            onClick={onClick}
            style={{ backgroundColor: color }}
            className="custom-btn"
        >
            {text}
        </button>
    );
}

export default Button;

// App.js
import Button from './components/Button';

function App() {
    return (
        <div>
            <Button text="Click Me" onClick={() => alert('Hi')} color="blue" />
            <Button text="Submit" onClick={() => alert('Submitted')} color="green" />
        </div>
    );
}
```

---

# Quick Revision Cheatsheet

## JavaScript Essentials

```javascript
// Variables
let x = 5;           // Can change
const PI = 3.14;     // Cannot change

// Functions
function name() {}
const name = () => {}

// Arrays
arr.push()           // Add to end
arr.pop()            // Remove from end
arr.map()            // Transform
arr.filter()         // Filter
arr.reduce()         // Reduce to single value

// DOM
document.getElementById('id')
document.querySelector('.class')
element.addEventListener('click', fn)

// Objects
let obj = { key: value }
obj.key or obj['key']

// Promises & Async
fetch(url).then().catch()
async/await
```

## jQuery Quick Reference

```javascript
// Selectors
$('#id')             // ID
$('.class')          // Class
$('tag')             // Tag

// Content
.text()              // Get/set text
.html()              // Get/set HTML
.val()               // Get/set input value

// Attributes & CSS
.attr()              // Get/set attribute
.css()               // Get/set CSS
.addClass()          // Add class
.removeClass()       // Remove class
.toggleClass()       // Toggle class

// Effects
.hide() / .show()
.fadeIn() / .fadeOut()
.slideUp() / .slideDown()
.animate()

// Events
.click(fn)
.on('event', fn)

// AJAX
$.ajax({ url, method, success, error })
$.get(url, fn)
$.post(url, data, fn)
```

## React Quick Reference

```javascript
// Component
function MyComponent() {
    return <div>JSX here</div>;
}

// State
const [state, setState] = useState(initialValue);
setState(newValue);

// Props
function Card({ title, content }) {
    return <div><h1>{title}</h1><p>{content}</p></div>;
}
<Card title="Hello" content="World" />

// useEffect
useEffect(() => {
    // Code here
}, [dependencies]);

// Events
<button onClick={handleClick}>Click</button>
<input onChange={(e) => setValue(e.target.value)} />

// Conditional
{condition && <div>Show this</div>}
{condition ? <A /> : <B />}

// Lists
{items.map(item => <div key={item.id}>{item.name}</div>)}

// Forms
const [value, setValue] = useState('');
<input value={value} onChange={(e) => setValue(e.target.value)} />
```

---

## Common Exam Questions & Answers

### 1. Explain closure with example

**Answer:** A closure is when inner function remembers outer function's variables.

```javascript
function outer() {
    let count = 0;
    return function inner() {
        count++;
        return count;
    }
}
const counter = outer();
counter(); // 1
counter(); // 2
```

### 2. Difference between let, var, const

- `var`: Function scoped, can re-declare
- `let`: Block scoped, cannot re-declare
- `const`: Block scoped, cannot change

### 3. What is DOM?

Document Object Model - tree structure of HTML that JavaScript can manipulate.

### 4. Promise vs Async/Await

Both handle asynchronous code. Async/await is cleaner syntax for promises.

### 5. What is JSX in React?

JavaScript XML - lets you write HTML-like syntax in JavaScript.

### 6. What is state in React?

Data that can change in a component. When it changes, component re-renders.

### 7. useEffect use cases

- Data fetching
- Setting up subscriptions
- Timers
- Direct DOM manipulation

### 8. jQuery vs Vanilla JavaScript

jQuery makes DOM manipulation easier with shorter syntax.

---

**Good luck with your exam!**