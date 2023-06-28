/**
 * This is a multi-line comment.
 */
"use strict"; // This is a single-line comment.

let greeting = "Hello, World!";
const PI = 3.14;
let regex = /[A-Z]/g;

function greet(name) {
    console.log(greeting + " " + name + ".");
}
class Circle {
    constructor(radius) {
        this.radius = radius;
    }
    getArea() {
        return PI * this.radius * this.radius;
    }
}
let myCircle = new Circle(5);
let array = [1, 2, 3, 4, 5];
let map = new Map();
map.set("name", "John");

if (myCircle.getArea() > 20) {
    console.log("Large circle.");
} else {
    console.log("Small circle.");
}

for (let i = 0; i < array.length; i++) {
    console.log(array[i]);
}