#pragma once
#pragma warning(disable:4275) //solve this later!
#include "token_data.h"
#include "../templates.h"
namespace functions {
	namespace algebra {
		namespace mul {
			//instances
			//(*)
			inline mul_template<int> int_mul{
				token_data::token_name_to_id(L"int_mul"),	//name
				{
					nullptr,
					nullptr,
					nullptr
				}
			};
			inline mul_template<float> float_mul{
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