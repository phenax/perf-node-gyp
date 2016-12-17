
#include <node.h>
#include <v8.h>
#include <iostream>
#include <string>


int fibonacci(int value) {

	if(value <= 1) return value;

	return fibonacci(value - 1) + fibonacci(value - 2);
}


void FiboHandler(const v8::FunctionCallbackInfo<v8::Value>& args) {

	v8::Isolate* isolate = args.GetIsolate();

	v8::String::Utf8Value str(args[0]->ToString());

	int out= fibonacci(std::stoi(*str));

	std::string ouput= std::to_string(out); 

	std::cout << ouput << std::endl;

	v8::Local<v8::Object> obj = v8::Object::New(isolate);
	obj->Set(v8::String::NewFromUtf8(isolate, "result"), v8::String::NewFromUtf8(isolate, ouput.c_str()));

	args.GetReturnValue().Set(obj);
}

void init(v8::Local<v8::Object> exports) {
	NODE_SET_METHOD(exports, "fibonacci", FiboHandler);
}

NODE_MODULE(fibo, init);
