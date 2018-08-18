const example = require(".");

console.log("module", example);

console.log("hello:", example.hello());
console.log("add:", example.add(1, 192));

const exampleInstance = new example.ClassExample(5.01);

console.log("exampleInstance.getValue()", exampleInstance.getValue());
console.log("exampleInstance.add(5.2)", exampleInstance.add(5.2));
console.log("exampleInstance.getValue()", exampleInstance.getValue());
