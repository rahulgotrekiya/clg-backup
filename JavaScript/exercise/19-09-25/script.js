// class Hundai{
//     constructor (color, price) {
//         console.log('Constructor of Hundai class');
//         this.color = color;
//         this.price = price;
//     }
//     start() {
//         console.log('Start method is called');
//     }

//     stop() {
//         console.log('Stop method is called');
//     }
// }

// let creata = new Hundai('white', '19 Lacs');

// creata.start();
// creata.stop();

// console.log(creata);

// Practice Porgram
// Create a class named restaurant 
// Create a constructor
// Create a method showMenu() showBill()

class Restaurant {
    constructor(item, qty) {
        console.log('Constructor of restaurant !!!')
        this.item = item;
        this.qty = qty;
    }
    showMenu() {
        console.log('Pasta, Noodles, Dosa,');
    }
    showBill() {
        console.log('Your bill is 12,00,000 INR');
    }
}

// let order = new Restaurant('Dosa', 2);

// order.showMenu();
// order.showBill();

// console.log(order);

class Car {
    // constructor () {
    //     console.log('Constructor of car class');
    // }

    start() {
        console.log('Car`s stop Start method is called');
    }
}

class Hundai extends Car {
    constructor() {
        console.log('Constructor of Hundai class');     
    }
    
    stop() {
        console.log('Car`s stop Stop method is called');
    }

}

// let creata = new Hundai();
// let creata = new Car('White', '18 lac');
// creata.start();
// creata.stop();  
// console.log(creata);

// Practice:
// Crate two class named University and collage 
// university is parent 
// college is child
// perform inheritance 

class University {
    constructor () {
        console.log('Constructor of University class');
    }
    start() {
        console.log('Car`s stop Start method is called');
    }
}

class College extends University {
    // constructor () {
    //     console.log('Constructor of College class');
    // }
    stop() {
        console.log('Car`s stop Stop method is called');
    }
}

let student = new College();
student.start();
student.stop();  
// console.log(student);

// Create a button using js 
// Give color green using js
// After checking on button color is changed form green to yellow

let btn1 = document.createElement("button");
btn1.textContent = 'Button';
btn1.innerText = 'Button';
// btn1.style.backgroundColor = 'green';
document.body.append(btn1);
btn1.style.backgroundColor='green';
// backgroundColor='Yellow';

// btn1.setAttribute('onclick', 'change()');

// function change() {
//     btn1.style.backgroundColor = 'yellow';
// }

btn1.addEventListener("click", function () {
    btn1.style.backgroundColor='yellow';
});
  