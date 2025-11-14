// create one button in html and print its id using js

let btn = document.getElementById("btn");

console.log(btn);

console.log(btn.getAttribute("id"));

console.log(btn.setAttribute("id", "NewID"));

console.log(btn.getAttribute("id"));

console.log(btn.getAttribute("style"));

console.log(btn.getAttribute("id"));

// Creae a button named check tak a numer fromusr in inputbox and on the click even of button u have to check whether the number is prime or not.

function isPrime(num) {
  if (num <= 1) return false;
  for (let i = 2; i <= num / 2; i++) {
    if (num % i == 0) return false;
  }
  return true;
}

console.log(isPrime(7));
