console.log('1. Write a program that takes a date and prints the day on which the date falls on\n'); // Q1
const prompt = require('prompt-sync')();
const date = (prompt('Date: '));

var obj = new Date(date);
var weekday = obj.getDay();

var options = { weekday: 'long'};
console.log(new Intl.DateTimeFormat('en-US', options).format(obj));

console.log('\n2. Show examples of use of splice method to add and remove elements from array.\n');   // Q2


let array = [1, 3, 4, 5];
console.log(array);
console.log('\nAdding element 2 at index 1');
array.splice(1,0,2);
console.log(array);
console.log('\nDeleting element at index 3 from the array');
array.splice(3, 1)
console.log(array);

console.log('\n3. Demonstrate an example that shows that array elements can be of different types.\n');   // Q3
console.log('\nArray of strings: ');
array = ["Apple", 'Mango', 'Grapes'];
console.log(array);

console.log('Array of Integers: ');
array = [1, 2, 3, 4];
console.log(array);

console.log('Array of floats: ');
array = [1.2, -2.2, 3.0, 4.1];
console.log(array);

console.log('\n4. Demonstrate replace all occurrences of a string within a sentence.\n'); // Q4
let string = "A plane is faster than a train. Travelling in a Plane is also lot more expensive than in train";
console.log('\n' + string);
console.log("After replacing all occurences of 'train' with 'bus': ");
console.log(string.replaceAll(/train/ig, 'bus'));


console.log('\n5. Write a function that takes object as input and prints all keys and values in a valid JSON format\n');  // Q5
function fn(key, value){
    return value
}
var ob = {name: "Harshith", age: 21, Gender: "Male"};
console.log('JSON string: ')
console.log(JSON.stringify(ob, fn)+ '\n');