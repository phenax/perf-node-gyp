
function fibonacci(value) {

	if(value <= 1) return value;

	return fibonacci(value - 1) + fibonacci(value - 2);
}

module.exports= value => ({ result: fibonacci(value) });
