# Performance Benchmark Node-GYP
Performance benchmark for a simple Fibonacci algorithm for node and node with c++(with node-gyp)

### Instructions

* ```npm run build``` to build the module
* ```npm start``` to run the benchmark

### Results

```

----- RUNNING ------

Input = [ 10 ]
Running with JS output = 55
Running with JS: 0.690ms
Running with CPP output = 55
Running with CPP: 0.197ms
 
Input = [ 20 ]
Running with JS output = 6765
Running with JS: 1.352ms
Running with CPP output = 6765
Running with CPP: 0.099ms
 
Input = [ 30 ]
Running with JS output = 832040
Running with JS: 21.646ms
Running with CPP output = 832040
Running with CPP: 6.697ms
 
Input = [ 40 ]
Running with JS output = 102334155
Running with JS: 2593.312ms
Running with CPP output = 102334155
Running with CPP: 782.256ms
 
Input = [ 45 ]
Running with JS output = 1134903170
Running with JS: 28858.258ms
Running with CPP output = 1134903170
Running with CPP: 9136.817ms
 
```
