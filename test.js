let arr = ["name", 1, NaN, undefined];
console.log(arr.filter(Boolean));
console.log(2 + 3 * 4);

const str = "string";
const func = (str) => {
  for (let i = 0, j = str.length - 1; i < j; i++, j--) {
    const temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
  return str;
};

// (func(str));
console.log(func(str));

const arr1 = [2, 8, 4, 10, 1];
const func1 = (str) => {
  let max = -999999;

  for (let i = 0, j = str.length - 1; i < str.length; i++) {
    max < str[i] ? (max = str[i]) : (max = max);
  }
  return max;
};

console.log(func1(arr1));

const func2 = (arg) => {
  if (arg === 1) {
    return ;
  }
  else{
    return arg*func2(arg-1)
  }
};

console.log(func2(5));

const p1 = new Promise((resolve, reject)=>{
  setTimeout(() => {
    resolve('Promise 1 resolved');
  }, 1000);

});

const p2 = new Promise((resolve, reject)=>{
  setTimeout(() => {
    resolve('Promise 2 resolved');
  }, 5000);

});

const func4 =  async() => {  
  console.log("Before promise 1");
  console.log(await p1);
  console.log("After promise 1");
  console.log(await p2);
};

func4();


class Parent {
  name:"user1",
  age:20, 
}
 
class children extends Parent{
 func: ()=>{
 console.log("Name": this.name, "Age": this.age)
}
