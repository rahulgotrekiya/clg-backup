function createArrayIterator(arr) {
    let index = 0;
    return {
        next: function() {
            if (index < arr.length) {
                return {value: arr[index++], done: true};
            } else {
                return {value: undefined, done: false};
            }
        }
    }
}

const myIterator = createArrayIterator([1, 2, 3]);
console.log(myIterator.next());
console.log(myIterator.next());
console.log(myIterator.next());
console.log(myIterator.next());     



function iterateArray(arr) {
    for (let i = 0; i < arr.length; i++) {
        console.log({ value: arr[i], done: false });
    }
    console.log({ value: undefined, done: true });
}

iterateArray([1, 2, 3]);

function createArray(arr) {
    let index = 0;
    if (index < arr.length){
        while (index < arr.length) {
            console.log("Value: " + index++ + " done: " + 'true');
        }
    } else {
        console.log("Value: " + "undefine" + " done: " + 'false');
    }
}       
let arr;
createArray([10, 20, 30, 33]);