/*
let str = "Hello";
let num = 43;

console.log(typeof str);

for (let i = 1; i <= 5; i++) {
  console.log(i);
}

let count = 0;
while (count < 5) {
  console.log(count);
  count++;
}

let arr = [10, 20, 30];
for (const i in arr) {
  console.log(arr[i]);
}

function greet(name) {
  return "hello, " + name;
}

console.log("Rahul");

const add = function (a, b) {
  return a + b;
};

console.log(greet("Rahul"));
console.log(add(10, 25));

const arrowMult = (a, b) => a * b;
console.log(arrowMult(10, 25));

let arr2 = [2, 1, 3, 5, 6, 8, 9, 0, 0, 4];

let newArr = arr2.filter((val) => {
  return val % 2 !== 0;
});

console.log(newArr);


function createCounter() {
  let count = 0;
  return function () {
    count++;
    return count;
  };
}

const counter1 = createCounter();
console.log(counter1());
console.log(counter1());
console.log(counter1());

const counter2 = createCounter();
console.log(counter2());

//  Array methods
let cities = ["pune", "rajkot", "ahmedabad"];

cities.push("surat");
cities.pop();
cities.unshift("mumbai");
cities.shift();

console.log(cities.length);
console.log(cities.indexOf("pune"));
console.log(cities.slice(0, 2));
console.log(cities.reverse());

console.log(cities);

let numbers = [1, 2, 3, 4, 5];

let sqared = numbers.map((num) => num * num);
console.log(sqared);

let evens = numbers.filter((num) => num % 2 === 0);
console.log(evens);

let sum = numbers.reduce((total, num) => total + num, 0);
console.log(sum);

let student = {
  it: 1,
  name: "Rahul",
  city: "Ahemdabad",
  college: "LJ",
  sem: 1,
};

// console.log(student.name);
// console.log(student["city"]);

for (let key in student) {
  console.log(key + " : " + student[key]);
}

class Restaurant {
  constructor(item, qty) {
    console.log("Constructor of reasturant!!!");
    this.item = item;
    this.qty = qty;
  }

  showMenu() {
    console.log("Pasta, noodles");
  }

  showBill() {
    console.log("your bill is 12000");
  }

  start() {
    console.log("University start method");
  }
}

// let order = new Restaurant("Dosa", 2);
// order.showBill();
// order.showMenu();

class Hotel extends Restaurant {
  stop() {
    console.log("storphs");
  }
}

let h1 = new Hotel();
h1.start();
h1.stop();


let btn = document.querySelector(".btn");
let div = document.querySelector("div");
// console.log(btn);
// console.log(div);

div.style.backgroundColor = "red";
div.style.height = "200px";

div.textContent = "hello worldjs";
div.setAttribute("class", "active");
div.getAttribute("id");
div.innerHTML =
  "<strong>This is strong text <h1>This is h1 in innerHTML</h1></strong>";

div.style.color = "yellow";
div.style.fontSize = "12px";

let btn1 = document.createElement("button");
btn1.textContent = "Button";
btn1.style.backgroundColor = "lavender";
btn1.style.height = "200px";
btn1.style.width = "200px";
document.body.append(btn1);

btn1.addEventListener("click", function () {
  btn1.style.backgroundColor = "pink";
});

function clicked() {
  console.log("hello");
}

btn1.onclick = function () {
  console.log("hello");
};

btn.addEventListener("click", function () {
  console.log("clicked");
});

btn.onclick = () => console.log("new click");
btn.ondblclick = () => console.log("heel");

div.onmouseover = () => console.log("hover");

let input = document.querySelector("input");
input.onkeyup = () => console.log("Key released");
input.onkeydown = () => console.log("Key presed");


let firstName = document.getElementById("first");

let val = firstName.value;
firstName.value = "New Name";

let submit = document.getElementById("submit");

let radio = document.querySelector('input[name="contact"]:checked');


function add() {
  let a = Number(document.getElementById("first").value);
  let b = Number(document.getElementById("second").value);
  let c = a + b;
  document.getElementById("answer").value = c;
}

function sub() {
  let a = Number(document.getElementById("first").value);
  let b = Number(document.getElementById("second").value);
  let c = a - b;
  document.getElementById("answer").value = c;
}

function mult() {
  let a = Number(document.getElementById("first").value);
  let b = Number(document.getElementById("second").value);
  let c = a * b;
  document.getElementById("answer").value = c;
}

function div() {
  let a = Number(document.getElementById("first").value);
  let b = Number(document.getElementById("second").value);
  let c = a / b;
  document.getElementById("answer").value = c;
}

document.cookie = "username=John; theme=dark";

// document.cookie = "theme=dark; max-age=3600; path=/"; // Expires in 1 hour

console.log(document.cookie);

function getCookie(name) {
  let cookies = document.cookie.split(";");
  for (let cookie in cookies) {
    let [key, value] = cookie.trim().split("=");
    if (key == name) return value;
  }
  return null;
}

console.log(getCookie("username"));


function getData(dataid, getNextData) {
  setTimeout(() => {
    console.log("Data", dataid);
    if (getNextData) {
      getNextData();
    }
  }, 2000);
}

getData(1, () => {
  console.log("geting data 2");
  getData(2, () => {
    console.log("data 3");
    getData(3, () => {
      console.log("data 4");
    });
  });
});

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
  .then((reject) => {
    console.log(reject); // Success case
  })
  .catch((error) => {
    console.log(error); // Error case
  });

// Modern way to handle promises
async function fetchUserData() {
  try {
    const response = await fetch(
      "https://jsonplaceholder.typicode.com/todos/1"
    );
    const data = await response.json();
    console.log(data);
    return data;
  } catch (error) {
    console.error("Error:", error);
  } finally {
    console.log("Fetch complete");
  }
}

// fetchUserData();

async function fetchAPI() {
  try {
    const response = await fetch(
      "https://jsonplaceholder.typicode.com/todos/1"
    );
    const data = await response.json();
    console.log(data);
    return data;
  } catch (error) {
    console.error(error);
  } finally {
    console.log("Fetch comlete");
  }
}

console.log(fetchAPI());


fetch("https://jsonplaceholder.typicode.com/todos/1").then((Response) =>
  Response.json()
    .then((data) => {
      console.log(data);
    })
    .catch((error) => {
      console.error("Error: ", error);
    })
);

fetch("https://jsonplaceholder.typicode.com/todos/1", {
  method: "POST",
  headers: {
    "Content-Type": "application/json",
  },
  body: JSON.typicode({
    name: "John",
    age: 25,
  }),
})
  .then((response) => response.json())
  .then((data) => console.log(data));

async function data() {
  console.log("Fetching data");
  try {
    const response = await fetch("https://api.genderize.io?name=luc");
    const response1 = await fetch(
      "https://official-joke-api.appspot.com/random_joke"
    );

    const data = await response.json();
    const data1 = await response1.json();

    console.log(data);
    console.log(data1);

    return data1;
  } catch (error) {
    console.error(error);
    throw error;
  } finally {
    console.log("Fetch complete");
  }
}

data();


let person = {
  name: "jon",
  age: 33,

  city: "gandhinagar",
};

let jsonStr = JSON.stringify(person);

console.log(jsonStr);

let jsonParsed = JSON.parse(jsonStr);
console.log(jsonParsed.name);

let arr1 = [1, 2, 3];
let arr2 = [4, 5, 6];

let combi = [...arr1, ...arr2];
console.log(combi);

function getRandomInt(min, max) {
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

console.log(getRandomInt(1, 4));

function isPrime(num) {
  if (num <= 1) return false;
  for (let i = 2; i < num / 2; i++) {
    if (num % i == 0) return false;
  }
  return true;
}

function printNotPrime(n) {
  for (let i = 2; i < n; i++) {
    if (!isPrime(i)) console.log(i);
  }
}

let primeBtn = document.querySelector(".btn");
primeBtn.addEventListener("click", function () {
  printNotPrime(10);
});


let now = new Date();
console.log(now);

let arr = [1, 2, 3, 4, 5];

arr.forEach((item, index) => {
  console.log(`Item ${index}: ${item}`);
});

let found = arr.find((num) => num > 3);
console.log(found);
let jn = arr.join("~");
console.log(jn);

// window.alert("Hello!");

// window.open("https://google.com", "_blank");

window.scrollTo(0, 500); // Scroll to position
window.scrollBy(0, 100); // Scroll by amount

console.log(document.URL);

// Browser information
navigator.userAgent; // Browser details
navigator.language; // "en-US"
navigator.onLine; // true/false (internet connection)
navigator.platform; // Operating system
navigator.cookieEnabled; // Cookies enabled?

// Geolocation
navigator.geolocation.getCurrentPosition((position) => {
  console.log(position.coords.latitude);
  console.log(position.coords.longitude);
});

history.back(); // Go back one page

console.log(history.back());


setTimeout(() => {
  console.log("This runs after 3 seconds");
}, 3000);

$(document).ready(function () {});

$(function () {
  $("#btn");
  $("[name]");
  $("input[type='text']");
  console.log($(".parent").children(".special"));
  console.log(btn);
});

$(function () {
  // Select second item
  $("li").eq(0).css("color", "red");

  // Find item with class
  let highlighted = $("li").filter(".highlight");

  // Get next sibling
  highlighted.next().css("font-weight", "bold");

  // Get all siblings except highlighted
  highlighted.siblings().css("background", "yellow");
});

$(function () {
  $("p").text("New text");
  $("div").html("<strong>Bold</strong>"); // Set HTML
  $("img").attr({
    src: "image.jpg",
    alt: "Desc",
    width: "1222",
  });
});

$(function () {
  $("#name").val("John Doe");
  $("#photo").attr("src", "profile.jpg");
  let name = $("#name").val();
  console.log("Name is: " + name);

  $("div").css({
    "background-color": "blue",
    "font-size": "20px",
    padding: "10px",
    "border-radius": "5px",
  });
});
*/
$(function () {
  $("#toggleBtn").click(function () {
    $("#content").toggleClass("dark-theme");
    $("#content").toggleClass("light-theme");
  });
  //   $("#toggleBtn").toggle();
  //   $("#toggleBtn").toggle(1000);

  $("button").click(function () {
    alert("Button clicked!");
  });
});
