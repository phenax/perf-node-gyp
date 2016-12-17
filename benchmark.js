
const jsExample= require('./js_test.js');
const cppExample= require('./cpp_test.js');


function testFn(fn, input, name='function') {
	console.time(name);
	console.log("Output", fn.apply(null, input).result);
	console.timeEnd(name);
}


testFn(jsExample, [ 5 ], 'Running with JS');
testFn(cppExample, [ 5 ], 'Running with CPP');
