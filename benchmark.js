
const jsExample= require('./js_test.js');
const cppExample= require('./cpp_test.js');


function testFn(fn, input, name='function') {
	console.time(name);
	console.log(name, "output =", fn.apply(null, input).result);
	console.timeEnd(name);
}


console.log('\n----- RUNNING ------\n');

testFn(jsExample, [ 10 ], 'Running with JS');
testFn(cppExample, [ 10 ], 'Running with CPP');
