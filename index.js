// const bindings = require("node-gyp-build")(__dirname);
const bindings = require('./build/Release/cpp_example.node');

module.exports = bindings;
