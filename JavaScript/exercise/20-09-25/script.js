let btn1 = document.querySelector('button ');

// btn1.onclick = () => {
//     console.log('Btn 1 is clicked!');
//     let a = 25;
//     a++;
//     console.log(a);
// }

btn1.ondblclick = () => {
    console.log('Btn 1 is double clicked!');
}

let div = document.querySelector('div');

div.onmouseover = () => {
    console.log('You are inside the div');
}

div.onmouseleave = () => {
    console.log('You Leave the div');
}

let inputNumber = document.querySelector('#input-no')

inputNumber.onkeyup = () => {
    console.log('Key is presed');
}

inputNumber.onkeydown = () => {
    console.log('Key is released');
}

let submitBtn = document.querySelector('.submit-btn')

submitBtn.onclick= () => {
    alert('Your data is Compromised :(');
}

btn1.addEventListener("click", function () {
    console.log('1st');
});
  

btn1.addEventListener("mouseover", function () {
    console.log('2nd');
});
  
