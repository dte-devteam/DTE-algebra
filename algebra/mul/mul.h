#pragma once
#pragma warning(disable:4275) //solve this later!
#include "function/include/functionfactory.h"
#include "token_data.h"
using namespace functionfactory;
namespace functions {
	namespace algebra {
		namespace mul {
			//constructors
			//(*)
			struct int_mul_function : basicfunction {
				using basicfunction::basicfunction;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct float_mul_function : basicfunction {
				using basicfunction::basicfunction;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			//instances
			//(*)
			inline int_mul_function int_mul{
				token_data::token_name_to_id(L"int_mul"),	//name
				{
					nullptr,
					nullptr,
					nullptr
				}
			};
			inline float_mul_function float_mul{
				token_data::token_name_to_id(L"float_mul"),	//name
				{
					nullptr,
					nullptr,
					nullptr
				}
			};
		}
	}
}