
#include <node.h>
#include <v8.h>


void Method(const v8::FunctionCallbackInfo<v8::Value>& args) {

	v8::Isolate* isolate = args.GetIsolate();

	v8::Local<v8::Object> obj = v8::Object::New(isolate);
	obj->Set(v8::String::NewFromUtf8(isolate, "result"), args[0]->ToString());

	args.GetReturnValue().Set(obj);
}

void init(v8::Local<v8::Object> exports) {
  NODE_SET_METHOD(exports, "fibonacci", Method);
}

NODE_MODULE(fibo, init);
