#pragma once
#pragma warning(disable:4275) //solve this later!
#include "token_data.h"
#include "../templates.h"
namespace functions {
	namespace algebra {
		namespace div {
			//instances
			//(/)
			inline div_template<int> int_div{
				token_data::token_name_to_id(L"int_div"),	//name
				{
					nullptr,
					nullptr,
					nullptr
				}
			};
			inline div_with_0_template<float> float_div{
				token_data::token_name_to_id(L"float_div"),	//name
				{
					nullptr,
					nullptr,
					nullptr
				}
			};
		}
	}
}