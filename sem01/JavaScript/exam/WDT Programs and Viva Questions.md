
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

# Programs
## Program 1: Print Even Numbers 1 to 100

### JavaScript

```javascript
// Print even numbers between 1 to 100
for (let i = 1; i <= 100; i++) {
    if (i % 2 === 0) {
        console.log(i);
    }
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Even Numbers</title>
</head>
<body>
    <h2>Even Numbers 1 to 100</h2>
    <p>Open Console (F12) to see output</p>
    
    <script>
        for (let i = 1; i <= 100; i++) {
            if (i % 2 === 0) {
                console.log(i);
            }
        }
    </script>
</body>
</html>
```

---

## Program 2: Print Square of 1 to 100

### JavaScript

```javascript
// Print square of numbers from 1 to 100
for (let i = 1; i <= 100; i++) {
    console.log(i + " * " + i + " = " + (i * i));
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Squares 1 to 100</title>
</head>
<body>
    <h2>Squares of 1 to 100</h2>
    <div id="output"></div>
    
    <script>
        let output = document.getElementById('output');
        
        for (let i = 1; i <= 100; i++) {
            output.innerHTML += i + " × " + i + " = " + (i * i) + "<br>";
        }
    </script>
</body>
</html>
```

---

## Program 3: Even or Odd (Alert/Confirm)

### JavaScript

```javascript
let num = prompt("Enter a number:");
num = Number(num);

if (num % 2 === 0) {
    alert("It's even");
} else {
    confirm("It's odd");
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Even or Odd</title>
</head>
<body>
    <h2>Even or Odd Checker</h2>
    <button onclick="checkNumber()">Check Number</button>
    
    <script>
        function checkNumber() {
            let num = prompt("Enter a number:");
            num = Number(num);
            
            if (num % 2 === 0) {
                alert("It's even");
            } else {
                confirm("It's odd");
            }
        }
    </script>
</body>
</html>
```

---

## Program 4: Print 1 to N Square

### JavaScript

```javascript
let n = prompt("Enter a number:");
n = Number(n);

for (let i = 1; i <= n; i++) {
    console.log(i + " * " + i + " = " + (i * i));
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>1 to N Square</title>
</head>
<body>
    <h2>Print Square from 1 to N</h2>
    <input type="number" id="numInput" placeholder="Enter N">
    <button onclick="printSquares()">Print Squares</button>
    <div id="result"></div>
    
    <script>
        function printSquares() {
            let n = Number(document.getElementById('numInput').value);
            let result = document.getElementById('result');
            result.innerHTML = '';
            
            for (let i = 1; i <= n; i++) {
                result.innerHTML += i + " × " + i + " = " + (i * i) + "<br>";
            }
        }
    </script>
</body>
</html>
```

---

## Program 5: Print All Prime Numbers 1 to 100

### JavaScript

```javascript
function isPrime(num) {
    if (num <= 1) return false;
    if (num === 2) return true;
    
    for (let i = 2; i < num; i++) {
        if (num % i === 0) return false;
    }
    return true;
}

console.log("Prime numbers between 1 to 100:");
for (let i = 2; i <= 100; i++) {
    if (isPrime(i)) {
        console.log(i);
    }
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Prime Numbers</title>
</head>
<body>
    <h2>Prime Numbers 1 to 100</h2>
    <button onclick="printPrimes()">Show Prime Numbers</button>
    <div id="output"></div>
    
    <script>
        function isPrime(num) {
            if (num <= 1) return false;
            if (num === 2) return true;
            
            for (let i = 2; i < num; i++) {
                if (num % i === 0) return false;
            }
            return true;
        }
        
        function printPrimes() {
            let output = document.getElementById('output');
            output.innerHTML = '';
            
            for (let i = 2; i <= 100; i++) {
                if (isPrime(i)) {
                    output.innerHTML += i + ", ";
                }
            }
        }
    </script>
</body>
</html>
```

---

## Program 6: Print All Squares 1 to 100

### JavaScript

```javascript
// Print perfect squares between 1 to 100
for (let i = 1; i * i <= 100; i++) {
    console.log(i * i);
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Perfect Squares</title>
</head>
<body>
    <h2>Perfect Squares between 1 to 100</h2>
    <div id="output"></div>
    
    <script>
        let output = document.getElementById('output');
        
        for (let i = 1; i * i <= 100; i++) {
            output.innerHTML += i * i + ", ";
        }
    </script>
</body>
</html>
```

---

## Program 7: Even → Square, Odd → Cube

### JavaScript

```javascript
let num = prompt("Enter a number:");
num = Number(num);

if (num % 2 === 0) {
    alert("Square: " + (num * num));
} else {
    confirm("Cube: " + (num * num * num));
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Square or Cube</title>
</head>
<body>
    <h2>Square or Cube Calculator</h2>
    <input type="number" id="number" placeholder="Enter number">
    <button onclick="calculate()">Calculate</button>
    
    <script>
        function calculate() {
            let num = Number(document.getElementById('number').value);
            
            if (num % 2 === 0) {
                alert("Even number! Square: " + (num * num));
            } else {
                confirm("Odd number! Cube: " + (num * num * num));
            }
        }
    </script>
</body>
</html>
```

---

## Program 8: Employee Salary Classification

### JavaScript

```javascript
let salary = prompt("Enter salary:");
salary = Number(salary);

if (salary >= 70000) {
    console.log("Class-1 Employee");
} else if (salary >= 50000) {
    console.log("Class-2 Employee");
} else if (salary >= 20000) {
    console.log("Class-3 Employee");
} else {
    console.log("Below Class-3");
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Salary Classification</title>
</head>
<body>
    <h2>Employee Salary Classification</h2>
    <input type="number" id="salary" placeholder="Enter salary">
    <button onclick="classifySalary()">Check Class</button>
    <p id="result"></p>
    
    <script>
        function classifySalary() {
            let salary = Number(document.getElementById('salary').value);
            let result = document.getElementById('result');
            
            if (salary >= 70000) {
                result.textContent = "Class-1 Employee";
            } else if (salary >= 50000) {
                result.textContent = "Class-2 Employee";
            } else if (salary >= 20000) {
                result.textContent = "Class-3 Employee";
            } else {
                result.textContent = "Below Class-3";
            }
        }
    </script>
</body>
</html>
```

---

## Program 9: Name Length - Even/Odd

### JavaScript

```javascript
let name = prompt("Enter your name:");

if (name.length % 2 === 0) {
    console.log(name.toUpperCase());
} else {
    console.log(name.slice(-3));
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Name Length Check</title>
</head>
<body>
    <h2>Name Length Checker</h2>
    <input type="text" id="nameInput" placeholder="Enter name">
    <button onclick="checkName()">Check</button>
    <p id="output"></p>
    
    <script>
        function checkName() {
            let name = document.getElementById('nameInput').value;
            let output = document.getElementById('output');
            
            if (name.length % 2 === 0) {
                output.textContent = "Even length: " + name.toUpperCase();
            } else {
                output.textContent = "Odd length, Last 3 chars: " + name.slice(-3);
            }
        }
    </script>
</body>
</html>
```

---

## Program 10: Find @ Index in Email

### JavaScript

```javascript
let email = prompt("Enter your email:");
let index = email.indexOf('@');

console.log("Index of @ is: " + index);
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Email @ Finder</title>
</head>
<body>
    <h2>Find @ in Email</h2>
    <input type="email" id="emailInput" placeholder="Enter email">
    <button onclick="findAt()">Find @</button>
    <p id="result"></p>
    
    <script>
        function findAt() {
            let email = document.getElementById('emailInput').value;
            let index = email.indexOf('@');
            let result = document.getElementById('result');
            
            if (index !== -1) {
                result.textContent = "Index of @ is: " + index;
            } else {
                result.textContent = "@ not found in email";
            }
        }
    </script>
</body>
</html>
```

---

## Program 11: Name Ends with Vowel

### JavaScript

```javascript
let name = prompt("Enter your name:");
let lastChar = name.slice(-1).toLowerCase();

if (lastChar === 'a' || lastChar === 'e' || lastChar === 'i' || 
    lastChar === 'o' || lastChar === 'u') {
    console.log(name + " js example");
} else {
    console.log("Length: " + name.length);
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Name Vowel Checker</title>
</head>
<body>
    <h2>Name Vowel Checker</h2>
    <input type="text" id="nameInput" placeholder="Enter name">
    <button onclick="checkVowel()">Check</button>
    <p id="result"></p>
    
    <script>
        function checkVowel() {
            let name = document.getElementById('nameInput').value;
            let lastChar = name.slice(-1).toLowerCase();
            let result = document.getElementById('result');
            
            if (lastChar === 'a' || lastChar === 'e' || lastChar === 'i' || 
                lastChar === 'o' || lastChar === 'u') {
                result.textContent = name + " js example";
            } else {
                result.textContent = "Length: " + name.length;
            }
        }
    </script>
</body>
</html>
```

---

## Program 12: Student Marks Percentage (reduce)

### JavaScript

```javascript
let marks = [85, 90, 78, 92, 88];

let total = marks.reduce((sum, mark) => sum + mark, 0);
let percentage = total / marks.length;

console.log("Total Marks: " + total);
console.log("Percentage: " + percentage + "%");
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Student Percentage</title>
</head>
<body>
    <h2>Calculate Student Percentage</h2>
    <p>Marks: [85, 90, 78, 92, 88]</p>
    <button onclick="calculatePercentage()">Calculate</button>
    <div id="result"></div>
    
    <script>
        function calculatePercentage() {
            let marks = [85, 90, 78, 92, 88];
            let result = document.getElementById('result');
            
            let total = marks.reduce((sum, mark) => sum + mark, 0);
            let percentage = total / marks.length;
            
            result.innerHTML = "Total Marks: " + total + "<br>";
            result.innerHTML += "Percentage: " + percentage.toFixed(2) + "%";
        }
    </script>
</body>
</html>
```

---

## Program 13: First 10 Even Numbers ÷ 2 (map)

### JavaScript

```javascript
let evenNumbers = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20];

let halfValues = evenNumbers.map(num => num / 2);

console.log("Original:", evenNumbers);
console.log("After dividing by 2:", halfValues);
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Even Numbers ÷ 2</title>
</head>
<body>
    <h2>First 10 Even Numbers ÷ 2</h2>
    <button onclick="divideNumbers()">Divide by 2</button>
    <div id="result"></div>
    
    <script>
        function divideNumbers() {
            let evenNumbers = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20];
            let halfValues = evenNumbers.map(num => num / 2);
            let result = document.getElementById('result');
            
            result.innerHTML = "Original: [" + evenNumbers.join(", ") + "]<br>";
            result.innerHTML += "After ÷ 2: [" + halfValues.join(", ") + "]";
        }
    </script>
</body>
</html>
```

---

## Program 14: Filter Salary > 20000 (filter)

### JavaScript

```javascript
let salaries = [15000, 25000, 18000, 30000, 22000, 19000, 35000, 21000, 17000, 28000];

let highSalaries = salaries.filter(salary => salary > 20000);

console.log("Salaries > 20000:", highSalaries);
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Filter Salaries</title>
</head>
<body>
    <h2>Employee Salaries > 20,000</h2>
    <button onclick="filterSalaries()">Filter</button>
    <div id="result"></div>
    
    <script>
        function filterSalaries() {
            let salaries = [15000, 25000, 18000, 30000, 22000, 19000, 35000, 21000, 17000, 28000];
            let highSalaries = salaries.filter(salary => salary > 20000);
            let result = document.getElementById('result');
            
            result.innerHTML = "All Salaries: [" + salaries.join(", ") + "]<br>";
            result.innerHTML += "Salaries > 20,000: [" + highSalaries.join(", ") + "]";
        }
    </script>
</body>
</html>
```

---

## Program 15: Array 1 to N (Sum, Product, Square)

### JavaScript

```javascript
let n = prompt("Enter N:");
n = Number(n);

let arr = [];
for (let i = 1; i <= n; i++) {
    arr.push(i);
}

let sum = arr.reduce((total, num) => total + num, 0);
let product = arr.reduce((total, num) => total * num, 1);
let squares = arr.map(num => num * num);

console.log("Array:", arr);
console.log("Sum:", sum);
console.log("Product:", product);
console.log("Squares:", squares);
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Array Operations</title>
</head>
<body>
    <h2>Array 1 to N Operations</h2>
    <input type="number" id="nInput" placeholder="Enter N">
    <button onclick="performOperations()">Calculate</button>
    <div id="result"></div>
    
    <script>
        function performOperations() {
            let n = Number(document.getElementById('nInput').value);
            let result = document.getElementById('result');
            
            let arr = [];
            for (let i = 1; i <= n; i++) {
                arr.push(i);
            }
            
            let sum = arr.reduce((total, num) => total + num, 0);
            let product = arr.reduce((total, num) => total * num, 1);
            let squares = arr.map(num => num * num);
            
            result.innerHTML = "Array: [" + arr.join(", ") + "]<br>";
            result.innerHTML += "Sum: " + sum + "<br>";
            result.innerHTML += "Product: " + product + "<br>";
            result.innerHTML += "Squares: [" + squares.join(", ") + "]";
        }
    </script>
</body>
</html>
```

---

## Program 16: Prime Number Checker Button

### JavaScript

```javascript
function isPrime(num) {
    if (num <= 1) return false;
    if (num === 2) return true;
    
    for (let i = 2; i < num; i++) {
        if (num % i === 0) return false;
    }
    return true;
}

let number = Number(document.getElementById('numInput').value);

if (isPrime(number)) {
    alert(number + " is Prime");
} else {
    alert(number + " is Not Prime");
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Prime Checker</title>
</head>
<body>
    <h2>Prime Number Checker</h2>
    <input type="number" id="numInput" placeholder="Enter number">
    <button onclick="checkPrime()">Check Prime</button>
    
    <script>
        function isPrime(num) {
            if (num <= 1) return false;
            if (num === 2) return true;
            
            for (let i = 2; i < num; i++) {
                if (num % i === 0) return false;
            }
            return true;
        }
        
        function checkPrime() {
            let number = Number(document.getElementById('numInput').value);
            
            if (isPrime(number)) {
                alert(number + " is Prime");
            } else {
                alert(number + " is Not Prime");
            }
        }
    </script>
</body>
</html>
```

---

## Program 17: Factorial Calculator

### JavaScript

```javascript
function calculateFactorial() {
    let num = Number(document.getElementById('numInput').value);
    let factorial = 1;
    
    for (let i = 1; i <= num; i++) {
        factorial *= i;
    }
    
    document.getElementById('result').textContent = "Factorial of " + num + " is: " + factorial;
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Factorial Calculator</title>
</head>
<body>
    <h2>Factorial Calculator</h2>
    <input type="number" id="numInput" placeholder="Enter number">
    <button onclick="calculateFactorial()">Submit</button>
    <p id="result"></p>
    
    <script>
        function calculateFactorial() {
            let num = Number(document.getElementById('numInput').value);
            let factorial = 1;
            
            for (let i = 1; i <= num; i++) {
                factorial *= i;
            }
            
            document.getElementById('result').textContent = 
                "Factorial of " + num + " is: " + factorial;
        }
    </script>
</body>
</html>
```

---

## Program 18: Count Vowels in Username

### JavaScript

```javascript
let username = prompt("Enter username:");
let vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'];
let count = 0;

for (let char of username) {
    if (vowels.includes(char)) {
        count++;
    }
}

console.log("Number of vowels: " + count);
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Vowel Counter</title>
</head>
<body>
    <h2>Count Vowels in Username</h2>
    <input type="text" id="username" placeholder="Enter username">
    <button onclick="countVowels()">Count Vowels</button>
    <p id="result"></p>
    
    <script>
        function countVowels() {
            let username = document.getElementById('username').value;
            let vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'];
            let count = 0;
            
            for (let char of username) {
                if (vowels.includes(char)) {
                    count++;
                }
            }
            
            document.getElementById('result').textContent = 
                "Number of vowels: " + count;
        }
    </script>
</body>
</html>
```

---

## Program 19: Print Odd Prime Numbers 1 to 100

### JavaScript

```javascript
function isPrime(num) {
    if (num <= 1) return false;
    if (num === 2) return true;
    
    for (let i = 2; i < num; i++) {
        if (num % i === 0) return false;
    }
    return true;
}

console.log("Odd Prime numbers between 1 to 100:");
for (let i = 3; i <= 100; i += 2) {  // Only check odd numbers
    if (isPrime(i)) {
        console.log(i);
    }
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Odd Prime Numbers</title>
</head>
<body>
    <h2>Odd Prime Numbers 1 to 100</h2>
    <button onclick="printOddPrimes()">Show Odd Primes</button>
    <div id="output"></div>
    
    <script>
        function isPrime(num) {
            if (num <= 1) return false;
            if (num === 2) return true;
            
            for (let i = 2; i < num; i++) {
                if (num % i === 0) return false;
            }
            return true;
        }
        
        function printOddPrimes() {
            let output = document.getElementById('output');
            output.innerHTML = '';
            
            for (let i = 3; i <= 100; i += 2) {
                if (isPrime(i)) {
                    output.innerHTML += i + ", ";
                }
            }
        }
    </script>
</body>
</html>
```

---

## Program 20: Countries Array - Index & Even Values

### JavaScript

```javascript
let countries = ["India", "USA", "UK", "Japan", "Germany"];

console.log("Index of each element:");
for (let i in countries) {
    console.log("Index " + i + ": " + countries[i]);
}

console.log("\nValues at even index:");
for (let i in countries) {
    if (i % 2 === 0) {
        console.log(countries[i]);
    }
}
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Countries Array</title>
</head>
<body>
    <h2>Countries Array Operations</h2>
    <button onclick="displayCountries()">Show Data</button>
    <div id="result"></div>
    
    <script>
        function displayCountries() {
            let countries = ["India", "USA", "UK", "Japan", "Germany"];
            let result = document.getElementById('result');
            result.innerHTML = '';
            
            result.innerHTML += "<h3>Index of each element:</h3>";
            for (let i in countries) {
                result.innerHTML += "Index " + i + ": " + countries[i] + "<br>";
            }
            
            result.innerHTML += "<h3>Values at even index:</h3>";
            for (let i in countries) {
                if (i % 2 === 0) {
                    result.innerHTML += countries[i] + "<br>";
                }
            }
        }
    </script>
</body>
</html>
```

---

## Program 21: Food App Dashboard

### HTML + CSS + JavaScript

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Food App Dashboard</title>
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }
        
        body {
            font-family: Arial, sans-serif;
            background-color: #f5f5f5;
        }
        
        .header {
            background-color: #ff6b6b;
            color: white;
            padding: 20px;
            text-align: center;
        }
        
        .container {
            max-width: 1200px;
            margin: 20px auto;
            padding: 20px;
        }
        
        .menu-grid {
            display: grid;
            grid-template-columns: repeat(3, 1fr);
            gap: 20px;
            margin-top: 20px;
        }
        
        .food-card {
            background: white;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0 2px 5px rgba(0,0,0,0.1);
        }
        
        .food-card h3 {
            color: #ff6b6b;
            margin-bottom: 10px;
        }
        
        .price {
            font-size: 20px;
            font-weight: bold;
            color: #333;
            margin: 10px 0;
        }
        
        .order-btn {
            background-color: #ff6b6b;
            color: white;
            border: none;
            padding: 10px 20px;
            border-radius: 5px;
            cursor: pointer;
            width: 100%;
        }
        
        .order-btn:hover {
            background-color: #ff5252;
        }
    </style>
</head>
<body>
    <div class="header">
        <h1>🍕 Food Delivery App</h1>
        <p>Order your favorite food</p>
    </div>
    
    <div class="container">
        <h2>Popular Items</h2>
        <div class="menu-grid" id="menuGrid"></div>
    </div>
    
    <script>
        const foodItems = [
            { id: 1, name: "Pizza", price: 299, description: "Cheese Pizza" },
            { id: 2, name: "Burger", price: 149, description: "Veg Burger" },
            { id: 3, name: "Pasta", price: 199, description: "White Sauce Pasta" },
            { id: 4, name: "Momos", price: 99, description: "Steam Momos" },
            { id: 5, name: "Sandwich", price: 79, description: "Grilled Sandwich" },
            { id: 6, name: "Noodles", price: 129, description: "Hakka Noodles" }
        ];
        
        const menuGrid = document.getElementById('menuGrid');
        
        foodItems.forEach(item => {
            const card = document.createElement('div');
            card.className = 'food-card';
            card.innerHTML = `
                <h3>${item.name}</h3>
                <p>${item.description}</p>
                <p class="price">₹${item.price}</p>
                <button class="order-btn" onclick="orderItem('${item.name}')">Order Now</button>
            `;
            menuGrid.appendChild(card);
        });
        
        function orderItem(name) {
            alert('Order placed for ' + name + '! 🎉');
        }
    </script>
</body>
</html>
```

---

## Program 22: Library Management System

### HTML + CSS + JavaScript

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Library Management</title>
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }
        
        body {
            font-family: Arial, sans-serif;
            background-color: #f0f0f0;
            padding: 20px;
        }
        
        .container {
            max-width: 800px;
            margin: 0 auto;
            background: white;
            padding: 30px;
            border-radius: 10px;
            box-shadow: 0 2px 10px rgba(0,0,0,0.1);
        }
        
        h1 {
            color: #2c3e50;
            margin-bottom: 20px;
        }
        
        .form-group {
            margin-bottom: 15px;
        }
        
        label {
            display: block;
            margin-bottom: 5px;
            font-weight: bold;
        }
        
        input {
            width: 100%;
            padding: 10px;
            border: 1px solid #ddd;
            border-radius: 5px;
        }
        
        .btn {
            background-color: #3498db;
            color: white;
            padding: 10px 20px;
            border: none;
            border-radius: 5px;
            cursor: pointer;
            margin-right: 10px;
        }
        
        .btn:hover {
            background-color: #2980b9;
        }
        
        .book-list {
            margin-top: 30px;
        }
        
        .book-item {
            background: #ecf0f1;
            padding: 15px;
            margin-bottom: 10px;
            border-radius: 5px;
            display: flex;
            justify-content: space-between;
            align-items: center;
        }
        
        .delete-btn {
            background-color: #e74c3c;
            color: white;
            border: none;
            padding: 5px 15px;
            border-radius: 3px;
            cursor: pointer;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>📚 Library Management System</h1>
        
        <div class="form-group">
            <label>Book ID:</label>
            <input type="text" id="bookId" placeholder="Enter Book ID">
        </div>
        
        <div class="form-group">
            <label>Book Name:</label>
            <input type="text" id="bookName" placeholder="Enter Book Name">
        </div>
        
        <div class="form-group">
            <label>Author:</label>
            <input type="text" id="author" placeholder="Enter Author Name">
        </div>
        
        <div class="form-group">
            <label>Year:</label>
            <input type="number" id="year" placeholder="Publication Year">
        </div>
        
        <button class="btn" onclick="addBook()">Add Book</button>
        <button class="btn" onclick="displayBooks()">Show All Books</button>
        
        <div class="book-list" id="bookList"></div>
    </div>
    
    <script>
        let books = [];
        
        function addBook() {
            const book = {
                id: document.getElementById('bookId').value,
                name: document.getElementById('bookName').value,
                author: document.getElementById('author').value,
                year: document.getElementById('year').value
            };
            
            if (book.id && book.name && book.author && book.year) {
                books.push(book);
                alert('Book added successfully!');
                clearForm();
                displayBooks();
            } else {
                alert('Please fill all fields');
            }
        }
        
        function displayBooks() {
            const bookList = document.getElementById('bookList');
            bookList.innerHTML = '<h2>Book Collection:</h2>';
            
            books.forEach((book, index) => {
                bookList.innerHTML += `
                    <div class="book-item">
                        <div>
                            <strong>${book.name}</strong> by ${book.author} (${book.year})
                            <br>ID: ${book.id}
                        </div>
                        <button class="delete-btn" onclick="deleteBook(${index})">Delete</button>
                    </div>
                `;
            });
        }
        
        function deleteBook(index) {
            books.splice(index, 1);
            displayBooks();
        }
        
        function clearForm() {
            document.getElementById('bookId').value = '';
            document.getElementById('bookName').value = '';
            document.getElementById('author').value = '';
            document.getElementById('year').value = '';
        }
    </script>
</body>
</html>
```

---

## Program 23: Customer Object

### JavaScript

```javascript
let customer = {
    id: 101,
    name: "Rahul Sharma",
    city: "Mumbai",
    billAmount: 5000,
    gender: "Male",
    date: "24-12-2025"
};

console.log("Customer Details:");
console.log("ID: " + customer.id);
console.log("Name: " + customer.name);
console.log("City: " + customer.city);
console.log("Bill Amount: ₹" + customer.billAmount);
console.log("Gender: " + customer.gender);
console.log("Date: " + customer.date);
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Customer Object</title>
    <style>
        .customer-card {
            max-width: 400px;
            margin: 50px auto;
            background: white;
            padding: 30px;
            border-radius: 10px;
            box-shadow: 0 2px 10px rgba(0,0,0,0.1);
        }
        
        .customer-card h2 {
            color: #2c3e50;
            margin-bottom: 20px;
        }
        
        .detail {
            margin: 10px 0;
            padding: 10px;
            background: #ecf0f1;
            border-radius: 5px;
        }
        
        .label {
            font-weight: bold;
            color: #3498db;
        }
    </style>
</head>
<body>
    <div class="customer-card">
        <h2>👤 Customer Details</h2>
        <div id="customerDetails"></div>
    </div>
    
    <script>
        let customer = {
            id: 101,
            name: "Rahul Sharma",
            city: "Mumbai",
            billAmount: 5000,
            gender: "Male",
            date: "24-12-2025"
        };
        
        const detailsDiv = document.getElementById('customerDetails');
        
        detailsDiv.innerHTML = `
            <div class="detail">
                <span class="label">ID:</span> ${customer.id}
            </div>
            <div class="detail">
                <span class="label">Name:</span> ${customer.name}
            </div>
            <div class="detail">
                <span class="label">City:</span> ${customer.city}
            </div>
            <div class="detail">
                <span class="label">Bill Amount:</span> ₹${customer.billAmount}
            </div>
            <div class="detail">
                <span class="label">Gender:</span> ${customer.gender}
            </div>
            <div class="detail">
                <span class="label">Date:</span> ${customer.date}
            </div>
        `;
    </script>
</body>
</html>
```

---

## Program 24: Restaurant Constructor & Methods

### JavaScript

```javascript
class Restaurant {
    constructor(item, qty, price) {
        this.item = item;
        this.qty = qty;
        this.price = price;
    }
    
    showMenu() {
        console.log("=== Menu ===");
        console.log("1. Pizza - ₹299");
        console.log("2. Burger - ₹149");
        console.log("3. Pasta - ₹199");
        console.log("4. Sandwich - ₹79");
    }
    
    showBill() {
        let total = this.qty * this.price;
        console.log("=== Bill ===");
        console.log("Item: " + this.item);
        console.log("Quantity: " + this.qty);
        console.log("Price per item: ₹" + this.price);
        console.log("Total Amount: ₹" + total);
    }
}

// Creating 2 objects
let order1 = new Restaurant("Pizza", 2, 299);
let order2 = new Restaurant("Burger", 3, 149);

console.log("Order 1:");
order1.showMenu();
order1.showBill();

console.log("\nOrder 2:");
order2.showMenu();
order2.showBill();
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Restaurant Class</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            padding: 20px;
            background-color: #f5f5f5;
        }
        
        .order-card {
            background: white;
            padding: 20px;
            margin: 20px 0;
            border-radius: 10px;
            box-shadow: 0 2px 5px rgba(0,0,0,0.1);
        }
        
        h2 {
            color: #e74c3c;
        }
        
        .menu, .bill {
            margin: 10px 0;
            padding: 10px;
            background: #ecf0f1;
            border-radius: 5px;
        }
    </style>
</head>
<body>
    <h1>🍽️ Restaurant Orders</h1>
    <div id="orders"></div>
    
    <script>
        class Restaurant {
            constructor(item, qty, price) {
                this.item = item;
                this.qty = qty;
                this.price = price;
            }
            
            showMenu() {
                return `
                    <h3>Menu:</h3>
                    <p>1. Pizza - ₹299</p>
                    <p>2. Burger - ₹149</p>
                    <p>3. Pasta - ₹199</p>
                    <p>4. Sandwich - ₹79</p>
                `;
            }
            
            showBill() {
                let total = this.qty * this.price;
                return `
                    <h3>Bill:</h3>
                    <p><strong>Item:</strong> ${this.item}</p>
                    <p><strong>Quantity:</strong> ${this.qty}</p>
                    <p><strong>Price per item:</strong> ₹${this.price}</p>
                    <p><strong>Total Amount:</strong> ₹${total}</p>
                `;
            }
        }
        
        let order1 = new Restaurant("Pizza", 2, 299);
        let order2 = new Restaurant("Burger", 3, 149);
        
        const ordersDiv = document.getElementById('orders');
        
        ordersDiv.innerHTML = `
            <div class="order-card">
                <h2>Order 1</h2>
                <div class="menu">${order1.showMenu()}</div>
                <div class="bill">${order1.showBill()}</div>
            </div>
            
            <div class="order-card">
                <h2>Order 2</h2>
                <div class="menu">${order2.showMenu()}</div>
                <div class="bill">${order2.showBill()}</div>
            </div>
        `;
    </script>
</body>
</html>
```

---

## Program 25: University & College Inheritance

### JavaScript

```javascript
class University {
    constructor(name) {
        this.universityName = name;
        console.log("University Constructor called");
    }
    
    showUniversity() {
        console.log("University: " + this.universityName);
    }
    
    accreditation() {
        console.log("University is UGC approved");
    }
}

class College extends University {
    constructor(universityName, collegeName) {
        super(universityName);  // Call parent constructor
        this.collegeName = collegeName;
        console.log("College Constructor called");
    }
    
    showCollege() {
        console.log("College: " + this.collegeName);
    }
    
    displayInfo() {
        this.showUniversity();  // Inherited method
        this.showCollege();
        this.accreditation();   // Inherited method
    }
}

// Creating object
let myCollege = new College("Gujarat University", "L.J. College");
myCollege.displayInfo();
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Inheritance Example</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            padding: 20px;
            background: linear-gradient(135deg, #667eea 0%, #764ba2 100%);
            min-height: 100vh;
        }
        
        .container {
            max-width: 600px;
            margin: 50px auto;
            background: white;
            padding: 30px;
            border-radius: 15px;
            box-shadow: 0 10px 30px rgba(0,0,0,0.3);
        }
        
        h1 {
            color: #667eea;
            text-align: center;
        }
        
        .info-box {
            background: #f8f9fa;
            padding: 20px;
            margin: 15px 0;
            border-left: 4px solid #667eea;
            border-radius: 5px;
        }
        
        button {
            background: #667eea;
            color: white;
            padding: 12px 30px;
            border: none;
            border-radius: 5px;
            cursor: pointer;
            width: 100%;
            font-size: 16px;
        }
        
        button:hover {
            background: #764ba2;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>🎓 University-College Inheritance</h1>
        <button onclick="showInheritance()">Show Inheritance Example</button>
        <div id="output"></div>
    </div>
    
    <script>
        class University {
            constructor(name) {
                this.universityName = name;
            }
            
            showUniversity() {
                return "University: " + this.universityName;
            }
            
            accreditation() {
                return "✓ UGC Approved University";
            }
        }
        
        class College extends University {
            constructor(universityName, collegeName, city) {
                super(universityName);
                this.collegeName = collegeName;
                this.city = city;
            }
            
            showCollege() {
                return "College: " + this.collegeName;
            }
            
            showCity() {
                return "City: " + this.city;
            }
            
            displayInfo() {
                return `
                    <div class="info-box">
                        <h3>Parent Class (University):</h3>
                        <p>${this.showUniversity()}</p>
                        <p>${this.accreditation()}</p>
                    </div>
                    <div class="info-box">
                        <h3>Child Class (College):</h3>
                        <p>${this.showCollege()}</p>
                        <p>${this.showCity()}</p>
                    </div>
                    <div class="info-box">
                        <p><strong>✓ College inherits University properties and methods</strong></p>
                    </div>
                `;
            }
        }
        
        function showInheritance() {
            let myCollege = new College("Gujarat University", "L.J. College", "Ahmedabad");
            document.getElementById('output').innerHTML = myCollege.displayInfo();
        }
    </script>
</body>
</html>
```

---

## Program 26: Button Color Change (Green → Yellow)

### JavaScript

```javascript
let btn = document.createElement('button');
btn.textContent = 'Click Me';
btn.style.backgroundColor = 'green';
btn.style.color = 'white';
btn.style.padding = '15px 30px';
btn.style.border = 'none';
btn.style.borderRadius = '5px';
btn.style.cursor = 'pointer';
btn.style.fontSize = '16px';

document.body.appendChild(btn);

btn.addEventListener('click', function() {
    btn.style.backgroundColor = 'yellow';
    btn.style.color = 'black';
    btn.textContent = 'Clicked!';
});
```

### HTML File

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Button Color Change</title>
    <style>
        body {
            display: flex;
            justify-content: center;
            align-items: center;
            min-height: 100vh;
            background-color: #f0f0f0;
            font-family: Arial, sans-serif;
        }
        
        .container {
            text-align: center;
            background: white;
            padding: 50px;
            border-radius: 15px;
            box-shadow: 0 5px 15px rgba(0,0,0,0.2);
        }
        
        h2 {
            margin-bottom: 30px;
            color: #333;
        }
    </style>
</head>
<body>
    <div class="container">
        <h2>Dynamic Button Creation</h2>
        <p>Button will change from Green to Yellow on click</p>
        <div id="buttonContainer"></div>
    </div>
    
    <script>
        // Create button using JavaScript
        let btn = document.createElement('button');
        btn.textContent = 'Click Me';
        
        // Set initial green color
        btn.style.backgroundColor = 'green';
        btn.style.color = 'white';
        btn.style.padding = '15px 30px';
        btn.style.border = 'none';
        btn.style.borderRadius = '5px';
        btn.style.cursor = 'pointer';
        btn.style.fontSize = '18px';
        btn.style.fontWeight = 'bold';
        btn.style.marginTop = '20px';
        
        // Add to page
        document.getElementById('buttonContainer').appendChild(btn);
        
        // Change color on click
        btn.addEventListener('click', function() {
            btn.style.backgroundColor = 'yellow';
            btn.style.color = 'black';
            btn.textContent = 'Color Changed!';
        });
    </script>
</body>
</html>
```

---

## Quick Reference for Exam

### Most Common Patterns

**1. Loop Pattern**

```javascript
for (let i = start; i <= end; i++) {
    // Your logic
}
```

**2. Array Operations**

```javascript
// Create array
let arr = [];
for (let i = 1; i <= n; i++) {
    arr.push(i);
}

// Map, Filter, Reduce
arr.map(item => item * 2)
arr.filter(item => item > 10)
arr.reduce((sum, item) => sum + item, 0)
```

**3. Prime Number Check**

```javascript
function isPrime(num) {
    if (num <= 1) return false;
    for (let i = 2; i < num; i++) {
        if (num % i === 0) return false;
    }
    return true;
}
```

**4. DOM Manipulation**

```javascript
// Get element
let element = document.getElementById('id');

// Create element
let btn = document.createElement('button');
btn.textContent = 'Click';
document.body.appendChild(btn);

// Event listener
btn.addEventListener('click', function() {
    // Your code
});
```

**5. Object Creation**

```javascript
let obj = {
    property1: value1,
    property2: value2
};
```

**6. Class with Constructor**

```javascript
class ClassName {
    constructor(param1, param2) {
        this.property1 = param1;
        this.property2 = param2;
    }
    
    method1() {
        // Code
    }
}

let obj = new ClassName(value1, value2);
```

**7. Inheritance**

```javascript
class Parent {
    constructor(param) {
        this.property = param;
    }
    
    parentMethod() {
        // Code
    }
}

class Child extends Parent {
    constructor(param1, param2) {
        super(param1);  // Call parent constructor
        this.childProperty = param2;
    }
    
    childMethod() {
        // Code
    }
}
```

---

## Tips for Exam

### ✅ Before Writing Code

1. Read the question carefully
2. Identify what type of problem it is (loop, array, object, class, DOM)
3. Plan your approach mentally
4. Start with simple logic

### ✅ While Writing Code

1. Use proper variable names
2. Add comments if needed
3. Check for common mistakes:
    - Missing semicolons
    - Wrong brackets `()` vs `[]` vs `{}`
    - Spelling mistakes in function names
    - Case sensitivity

### ✅ Testing Your Code

1. Use `console.log()` to debug
2. Test with different inputs
3. Check edge cases (0, 1, negative numbers)

### ✅ Common Mistakes to Avoid

- Forgetting to convert string to number: `Number(value)` or `parseInt(value)`
- Using `=` instead of `==` or `===`
- Not closing brackets properly
- Forgetting `()` after function name when calling it
- Using `innerHTML` when you should use `textContent`

---

## Program Types Summary

|Program Type|Count|Examples|
|---|---|---|
|**Simple Loops**|7|#1, #2, #4, #5, #6, #19|
|**Conditionals**|5|#3, #7, #8, #9, #11|
|**String Operations**|3|#9, #10, #18|
|**Array Methods**|3|#12, #13, #14, #15|
|**Functions**|2|#5, #16, #17|
|**DOM Manipulation**|2|#16, #17, #26|
|**Objects**|1|#23|
|**Classes**|2|#24, #25|
|**Projects**|2|#21, #22|
|**Mixed**|1|#20|

---

## Last Minute Checklist ✓

- [ ] Can you write a for loop?
- [ ] Can you check if number is even/odd?
- [ ] Can you check if number is prime?
- [ ] Can you use map, filter, reduce?
- [ ] Can you create an object?
- [ ] Can you create a class with constructor?
- [ ] Can you implement inheritance?
- [ ] Can you manipulate DOM (getElementById, createElement)?
- [ ] Can you add event listeners?
- [ ] Can you use string methods (slice, indexOf, toUpperCase)?

---

## Most Important for Tomorrow

### Top 5 Concepts:

1. **Loops** (for, while) - Used in 40% of programs
2. **Arrays** (map, filter, reduce) - Essential
3. **DOM Manipulation** - getElementById, createElement, addEventListener
4. **Classes & Objects** - Constructor, methods, inheritance
5. **Conditionals** - if-else, checking conditions

### Practice These 3 Times:

- Prime number checker
- Array operations (map, filter, reduce)
- Class with constructor and methods
- Button creation and event handling

---

## Good Luck! 🎯

Remember:

- **Stay calm** during the exam
- **Read questions carefully**
- **Start with easy problems** first
- **Test your code** before submitting
- **Manage your time** - don't spend too long on one question

**You've got this! 💪**

---

# Viva Questions & Answers

## Basic JavaScript Questions

### 1. What is JavaScript?

**Answer:** JavaScript is a client-side scripting language used to make web pages interactive. It runs in the browser and can manipulate HTML and CSS.

### 2. Difference between var, let, and const?

**Answer:**

- **var**: Function scoped, can be re-declared, can be updated
- **let**: Block scoped, cannot be re-declared, can be updated
- **const**: Block scoped, cannot be re-declared, cannot be updated

### 3. What are data types in JavaScript?

**Answer:**

- **Primitive**: String, Number, Boolean, Null, Undefined, Symbol
- **Non-primitive**: Object, Array

### 4. What is the difference between == and ===?

**Answer:**

- **==** (loose equality): Compares values after type conversion
- **===** (strict equality): Compares both value and type

```javascript
5 == "5"   // true
5 === "5"  // false
```

### 5. What is NaN?

**Answer:** NaN means "Not-a-Number". It's returned when a mathematical operation fails.

```javascript
console.log(0/0);        // NaN
console.log("text" * 2); // NaN
```

---

## Functions & Scope Questions

### 6. What is a function?

**Answer:** A function is a reusable block of code that performs a specific task. It can accept parameters and return values.

### 7. Difference between function declaration and function expression?

**Answer:**

```javascript
// Function Declaration (can be called before declaration)
function greet() {
    console.log("Hello");
}

// Function Expression (cannot be called before declaration)
const greet = function() {
    console.log("Hello");
}
```

### 8. What is an arrow function?

**Answer:** Arrow function is a shorter way to write functions introduced in ES6.

```javascript
// Regular function
function add(a, b) {
    return a + b;
}

// Arrow function
const add = (a, b) => a + b;
```

### 9. What is a closure?

**Answer:** A closure is when an inner function has access to variables from its outer function, even after the outer function has finished executing.

```javascript
function outer() {
    let count = 0;
    return function inner() {
        count++;
        return count;
    }
}
```

### 10. What is scope in JavaScript?

**Answer:** Scope determines where variables can be accessed:

- **Global Scope**: Accessible everywhere
- **Function Scope**: Accessible only inside function
- **Block Scope**: Accessible only inside block `{}`

---

## Array Questions

### 11. What is an array?

**Answer:** An array is a collection of elements stored in a single variable. Arrays can hold multiple values of any type.

### 12. What is the difference between push() and pop()?

**Answer:**

- **push()**: Adds element at the end
- **pop()**: Removes element from the end

```javascript
let arr = [1, 2, 3];
arr.push(4);  // [1, 2, 3, 4]
arr.pop();    // [1, 2, 3]
```

### 13. What is the difference between shift() and unshift()?

**Answer:**

- **shift()**: Removes element from the beginning
- **unshift()**: Adds element at the beginning

### 14. Explain map() method.

**Answer:** map() creates a new array by transforming each element of the original array.

```javascript
let arr = [1, 2, 3];
let doubled = arr.map(num => num * 2);  // [2, 4, 6]
```

### 15. Explain filter() method.

**Answer:** filter() creates a new array with elements that pass a test condition.

```javascript
let arr = [1, 2, 3, 4, 5];
let evens = arr.filter(num => num % 2 === 0);  // [2, 4]
```

### 16. Explain reduce() method.

**Answer:** reduce() reduces an array to a single value by executing a function on each element.

```javascript
let arr = [1, 2, 3, 4];
let sum = arr.reduce((total, num) => total + num, 0);  // 10
```

---

## DOM Manipulation Questions

### 17. What is DOM?

**Answer:** DOM (Document Object Model) is a tree-like structure that represents HTML elements. JavaScript can access and manipulate the DOM to change content, structure, and styles.

### 18. How do you select an element by ID?

**Answer:**

```javascript
let element = document.getElementById('myId');
```

### 19. What is the difference between getElementById and querySelector?

**Answer:**

- **getElementById**: Selects element by ID only, faster
- **querySelector**: Selects using any CSS selector, more flexible

```javascript
document.getElementById('myId');
document.querySelector('#myId');      // Same as above
document.querySelector('.myClass');   // Select by class
```

### 20. What is the difference between innerHTML and textContent?

**Answer:**

- **innerHTML**: Sets/gets HTML content (including tags)
- **textContent**: Sets/gets only text content (no tags)

```javascript
element.innerHTML = "<strong>Bold</strong>";  // Renders bold
element.textContent = "<strong>Bold</strong>"; // Shows as text
```

### 21. How do you create an element using JavaScript?

**Answer:**

```javascript
let div = document.createElement('div');
div.textContent = 'Hello';
document.body.appendChild(div);
```

---

## Event Handling Questions

### 22. What is an event?

**Answer:** An event is an action that occurs in the browser, like clicking a button, typing in an input, or moving the mouse.

### 23. What is an event listener?

**Answer:** An event listener waits for a specific event to occur and executes a function when it happens.

```javascript
button.addEventListener('click', function() {
    alert('Clicked!');
});
```

### 24. What are common events in JavaScript?

**Answer:**

- **Mouse Events**: click, dblclick, mouseenter, mouseleave
- **Keyboard Events**: keydown, keyup, keypress
- **Form Events**: submit, change, focus, blur
- **Window Events**: load, resize, scroll

### 25. What is event.preventDefault()?

**Answer:** It stops the default behavior of an event, like preventing form submission or link navigation.

```javascript
form.addEventListener('submit', function(e) {
    e.preventDefault();  // Stops form from submitting
});
```

---

## Object-Oriented Programming Questions

### 26. What is an object?

**Answer:** An object is a collection of key-value pairs. It can store properties and methods.

```javascript
let person = {
    name: "John",
    age: 25,
    greet: function() {
        console.log("Hello");
    }
};
```

### 27. What is a class?

**Answer:** A class is a blueprint for creating objects. It defines properties and methods that objects will have.

```javascript
class Person {
    constructor(name) {
        this.name = name;
    }
}
```

### 28. What is a constructor?

**Answer:** A constructor is a special method that runs automatically when a new object is created. It initializes object properties.

```javascript
class Car {
    constructor(brand, model) {
        this.brand = brand;
        this.model = model;
    }
}

let myCar = new Car("Toyota", "Camry");
```

### 29. What is inheritance?

**Answer:** Inheritance allows a class (child) to inherit properties and methods from another class (parent).

```javascript
class Animal {
    eat() {
        console.log("Eating");
    }
}

class Dog extends Animal {
    bark() {
        console.log("Barking");
    }
}

let dog = new Dog();
dog.eat();   // Inherited from Animal
dog.bark();  // Own method
```

### 30. What is the 'super' keyword?

**Answer:** The 'super' keyword is used to call the parent class constructor or methods.

```javascript
class Parent {
    constructor(name) {
        this.name = name;
    }
}

class Child extends Parent {
    constructor(name, age) {
        super(name);  // Call parent constructor
        this.age = age;
    }
}
```

### 31. What is 'this' keyword?

**Answer:** 'this' refers to the current object. Inside a class, it refers to the instance of that class.

```javascript
class Person {
    constructor(name) {
        this.name = name;  // 'this' refers to current object
    }
}
```

---

## String Questions

### 32. Common string methods?

**Answer:**

- **toUpperCase()**: Convert to uppercase
- **toLowerCase()**: Convert to lowercase
- **slice()**: Extract part of string
- **indexOf()**: Find position of substring
- **includes()**: Check if substring exists
- **split()**: Convert string to array
- **trim()**: Remove whitespace

### 33. What is the difference between slice() and substring()?

**Answer:** Both extract parts of a string, but:

- **slice()**: Accepts negative indices
- **substring()**: Doesn't accept negative indices

```javascript
let str = "Hello";
str.slice(-2);      // "lo"
str.substring(-2);  // "Hello" (treats negative as 0)
```

---

## Loop Questions

### 34. Types of loops in JavaScript?

**Answer:**

- **for**: Standard loop with counter
- **while**: Loop while condition is true
- **do-while**: Execute once, then loop while condition is true
- **for...in**: Loop through object properties or array indices
- **for...of**: Loop through array values

### 35. What is the difference between for...in and for...of?

**Answer:**

- **for...in**: Loops through indices/keys
- **for...of**: Loops through values

```javascript
let arr = [10, 20, 30];

for (let i in arr) {
    console.log(i);      // 0, 1, 2 (indices)
}

for (let val of arr) {
    console.log(val);    // 10, 20, 30 (values)
}
```

### 36. What is break and continue?

**Answer:**

- **break**: Exits the loop completely
- **continue**: Skips current iteration and moves to next

---

## Conditional Questions

### 37. Types of conditional statements?

**Answer:**

- **if**: Execute if condition is true
- **if-else**: Execute one block or another
- **if-else if-else**: Multiple conditions
- **switch**: Multiple cases based on value
- **ternary operator**: Short if-else `condition ? true : false`

### 38. What is a ternary operator?

**Answer:** A short way to write if-else in one line.

```javascript
let age = 18;
let status = age >= 18 ? "Adult" : "Minor";
```

---

## Asynchronous JavaScript Questions

### 39. What is synchronous vs asynchronous code?

**Answer:**

- **Synchronous**: Code executes line by line, waits for each line to finish
- **Asynchronous**: Code doesn't wait, continues execution

### 40. What is a Promise?

**Answer:** A Promise represents a value that will be available in the future. It has three states:

- **Pending**: Initial state
- **Fulfilled**: Operation successful
- **Rejected**: Operation failed

### 41. What is async/await?

**Answer:** async/await is a cleaner way to work with Promises.

```javascript
async function fetchData() {
    try {
        let response = await fetch('url');
        let data = await response.json();
        console.log(data);
    } catch (error) {
        console.log(error);
    }
}
```

### 42. What is setTimeout()?

**Answer:** setTimeout() executes a function after a specified delay.

```javascript
setTimeout(() => {
    console.log("After 2 seconds");
}, 2000);
```

---

## Practical Program Questions

### 43. How do you check if a number is even or odd?

**Answer:**

```javascript
if (num % 2 === 0) {
    console.log("Even");
} else {
    console.log("Odd");
}
```

### 44. How do you check if a number is prime?

**Answer:**

```javascript
function isPrime(num) {
    if (num <= 1) return false;
    for (let i = 2; i < num; i++) {
        if (num % i === 0) return false;
    }
    return true;
}
```

### 45. How do you reverse a string?

**Answer:**

```javascript
let str = "Hello";
let reversed = str.split('').reverse().join('');  // "olleH"
```

### 46. How do you find the largest number in an array?

**Answer:**

```javascript
let arr = [5, 2, 9, 1, 7];
let max = Math.max(...arr);  // 9

// OR
let max = arr.reduce((max, num) => num > max ? num : max);
```

### 47. How do you remove duplicates from an array?

**Answer:**

```javascript
let arr = [1, 2, 2, 3, 3, 4];
let unique = [...new Set(arr)];  // [1, 2, 3, 4]
```

---

## Error Handling Questions

### 48. What is try-catch?

**Answer:** try-catch is used to handle errors gracefully without stopping the program.

```javascript
try {
    // Code that might throw error
    console.log(x);  // x is not defined
} catch (error) {
    console.log("Error:", error.message);
} finally {
    console.log("This always runs");
}
```

### 49. What is the difference between throw and throws?

**Answer:** JavaScript only has **throw** (not throws like Java). It's used to create custom errors.

```javascript
function checkAge(age) {
    if (age < 18) {
        throw new Error("Too young");
    }
}
```

---

## ES6 Features Questions

### 50. What are template literals?

**Answer:** Template literals allow string interpolation using backticks.

```javascript
let name = "John";
let greeting = `Hello ${name}!`;  // Hello John!
```

### 51. What is destructuring?

**Answer:** Destructuring extracts values from arrays or objects into variables.

```javascript
// Array destructuring
let [a, b] = [1, 2];

// Object destructuring
let {name, age} = {name: "John", age: 25};
```

### 52. What is the spread operator?

**Answer:** The spread operator (...) expands an array or object.

```javascript
let arr1 = [1, 2];
let arr2 = [3, 4];
let combined = [...arr1, ...arr2];  // [1, 2, 3, 4]
```

---

## JSON Questions

### 53. What is JSON?

**Answer:** JSON (JavaScript Object Notation) is a text format for storing and exchanging data. It's language-independent.

### 54. How do you convert object to JSON?

**Answer:**

```javascript
let obj = {name: "John", age: 25};
let json = JSON.stringify(obj);  // '{"name":"John","age":25}'
```

### 55. How do you convert JSON to object?

**Answer:**

```javascript
let json = '{"name":"John","age":25}';
let obj = JSON.parse(json);  // {name: "John", age: 25}
```

---

## Storage Questions

### 56. What is localStorage?

**Answer:** localStorage stores data in the browser with no expiration time. Data persists even after closing the browser.

```javascript
localStorage.setItem('name', 'John');
let name = localStorage.getItem('name');
```

### 57. Difference between localStorage and sessionStorage?

**Answer:**

- **localStorage**: Data persists forever until manually deleted
- **sessionStorage**: Data cleared when browser tab is closed

---

## jQuery Questions (If asked)

### 58. What is jQuery?

**Answer:** jQuery is a JavaScript library that makes DOM manipulation, event handling, and AJAX easier with shorter syntax.

### 59. How do you select an element in jQuery?

**Answer:**

```javascript
$('#myId')        // By ID
$('.myClass')     // By class
$('p')            // By tag
```

### 60. What is the difference between $(document).ready() and window.onload?

**Answer:**

- **$(document).ready()**: Runs when DOM is ready (faster)
- **window.onload**: Runs when everything (images, etc.) is loaded

---

## React Questions (Basic - If asked)

### 61. What is React?

**Answer:** React is a JavaScript library for building user interfaces using reusable components.

### 62. What is JSX?

**Answer:** JSX is a syntax extension that looks like HTML but is actually JavaScript. It must be compiled to regular JavaScript.

### 63. What is a component in React?

**Answer:** A component is a reusable piece of UI. It's like a custom HTML tag that you create.

### 64. What is state in React?

**Answer:** State is data that can change in a component. When state changes, the component re-renders automatically.

### 65. What is props in React?

**Answer:** Props (properties) are data passed from parent component to child component. They are read-only.


---

## Most Likely Questions Based on Your Programs

Based on the 26 programs, expect these questions:

1. **How do you check if a number is prime?** (Program 5, 16, 19)
2. **Explain map/filter/reduce with examples** (Program 12, 13, 14)
3. **What is a class and constructor?** (Program 24)
4. **Explain inheritance** (Program 25)
5. **How do you create elements with JavaScript?** (Program 26)
6. **What is an event listener?** (Program 16, 17, 26)
7. **Difference between for...in and for...of** (Program 20)
8. **How do you manipulate strings?** (Program 9, 10, 11, 18)
9. **What is an object?** (Program 23)
10. **Explain getElementById and querySelector** (All DOM programs)

---

Good luck with your viva! 