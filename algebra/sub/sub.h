#pragma once
#pragma warning(disable:4275) //solve this later!
#include "token_data.h"
#include "../templates.h"
using namespace functionfactory;
namespace functions {
	namespace algebra {
		namespace sub {
			//instances
			//(-)
			inline sub_template<int>* int_sub = new sub_template<int>(
				token_data::token_name_to_id(L"int_sub"),	//name
				{
					nullptr,
					nullptr,
					nullptr
				}
			);
			inline sub_template<float>* float_sub = new sub_template<float>(
				token_data::token_name_to_id(L"float_sub"),	//name
				{
					nullptr,
					nullptr,
					nullptr
				}
			);
		}
	}
}