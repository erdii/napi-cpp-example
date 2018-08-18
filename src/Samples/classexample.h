#include <napi.h>
#include "actualclass.h"

class ClassExample : public Napi::ObjectWrap<ClassExample> {
	public:
		// Init function for setting the export key to JS
		static Napi::Object Init(Napi::Env env, Napi::Object exports);

		// Constructor to initialise
		ClassExample(const Napi::CallbackInfo& info);

	private:
		// reference to store the class definition that needs to be exported to JS
		static Napi::FunctionReference constructor;

		// wrapped getValue function
		Napi::Value GetValue(const Napi::CallbackInfo& info);

		// wrapped add function
		Napi::Value Add(const Napi::CallbackInfo& info);

		// internal instance of actualclass used to perform actual operations.
		ActualClass *actualClass_;
};
