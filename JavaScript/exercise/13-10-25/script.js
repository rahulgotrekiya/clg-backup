function createCounter() {
    let count = 0; // 'count' is a private variable within the closure

    return function() {
        count++;
        return count;
    }
}

const counter1 = createCounter();
console.log(counter1());    // Output: 1
console.log(counter1());    // Output: 2 

const counter2 = createCounter(); // Creates a new, independed closure
console.log(counter2()); // Output: 1

// In this example, createCounter return an inner function. This inner function form a closure over the count variable. Each time createCounter is called, a new closure is created with its own independent count variable, demonstrating ther persistence of state and data privacy.