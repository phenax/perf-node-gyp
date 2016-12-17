
const jsExample= require('./js_test.js');
const cppExample= require('./cpp_test.js');


function testFn(func, args, name='function') {
	console.time(name);
	console.log(name, "output =", func.apply(null, args).result);
	console.timeEnd(name);
}


console.log('\n----- RUNNING ------\n');

let inputs= [ 10, 20, 30, 40, 45 ];

inputs.forEach(inp => {
	console.log('Input =', [ inp ]);

	testFn(jsExample, [ inp ], 'Running with JS');
	testFn(cppExample, [ inp ], 'Running with CPP');

	console.log(' ');
});
