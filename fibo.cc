
#include <node.h>
#include <v8.h>
#include <string>


int fibonacci(int value) {

	if(value <= 1) return value;

	return fibonacci(value - 1) + fibonacci(value - 2);
}


void Method(const v8::FunctionCallbackInfo<v8::Value>& args) {

	v8::String::Utf8Value param1(args[0]->ToString());

    // convert it to string
    std::string str= std::string(*param1);

    int input= 0;

    for(auto ch: str) {
    	input+= input*10 + ((int) ch);
    }

    v8::String output= v8::String::NewFromUtf8(fibonacci(input));


	v8::Isolate* isolate = args.GetIsolate();

	v8::Local<v8::Object> obj = v8::Object::New(isolate);
	obj->Set(v8::String::NewFromUtf8(isolate, "result"), output);

	args.GetReturnValue().Set(obj);
}

void init(v8::Local<v8::Object> exports) {
  NODE_SET_METHOD(exports, "fibonacci", Method);
}

NODE_MODULE(fibo, init);
