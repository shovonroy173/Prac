const data = "Data";
function func() {
  var name = "moZ";
  function display() {
    console.log(name, data);
  }
  return display;
}

func()();

// (function IIFE() {
//   console.log("IIFE");

// }())

let count = 0;

(function IIFE() {
  if (count === 0) {
    let count = 1;
    console.log(count);
  }
  console.log(count);
})();

function createBase(x) {
  function add(y) {
    return x + y;
  }
  return add;
}

var addSeven = createBase(6);
console.log(addSeven(7));
console.log(addSeven(21));

// function time(x) {
//   for (let index = 0; index < x; index++) {
//     setTimeout(function () {
//       console.log(index);
//     }, 0);
//   }
// };

// time(5)

function counter() {
  var _counter = 0;
    function increment(params) {
     _counter += params
  }; 

  function result() {
    return _counter;
  }
  return {
    increment , result
  }
}

const dis = counter();
(dis.increment(5));
(dis.increment(10));
console.log(dis.result());

console.log(0.1 + 0.2 === 0.3);

let x = "50";
let y = 50;
console.log(x == y);
console.log(x === y);

console.log("LINE AT 74" ,0.1+0.2 === 0.3);


