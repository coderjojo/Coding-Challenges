//Challange No:2

/*Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.

Example:
createPhoneNumber([1, 2, 3, 4, 5, 6, 7, 8, 9, 0]) // => returns "(123) 456-789 */

//Solution by me:

function createPhoneNumber(numbers){
  var num  = "(xxx) xxx-xxxx";
  for(i=0; i<numbers.length; i++){
  num = num.replace('x',numbers[i]);
  }
  return num;
} 

//Best Solution:

function createPhoneNumber(numbers){
  return numbers.join('').replace(/(\d{3})(\d{3})(\d{4})/,'($1) $2-$3');
}