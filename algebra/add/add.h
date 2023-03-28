#pragma once
#pragma warning(disable:4275) //solve this later!
#include "function/include/muxfunction.h"
#include "token_data.h"
#include "../templates.h"
namespace functions {
	namespace algebra {
		namespace add {
			//instances
			//(+)
			inline add_template<int>* int_add = new add_template<int>(
				token_data::token_name_to_id(L"int_add"),	//name
				{	//default values
					nullptr,
					nullptr,
					nullptr
				}
			);
			inline add_template<float>* float_add = new add_template<float>(
				token_data::token_name_to_id(L"float_add"),	//name
				{	//default values
					nullptr,
					nullptr,
					nullptr
				}
			);
			inline function::muxfunction* add = new function::muxfunction(
				token_data::token_name_to_id(L"add"),	//name
				{	//defaultvalues
					nullptr,
					nullptr,
					nullptr
				},
				{	//callings
					{
						int_add,
						{
							{0, false},
							{1, false},
							{2, false}
						}
					},
					{
						float_add,
						{
							{0, false},
							{1, false},
							{2, false}
						}
					}
				},
				nullptr //&mux (to do)
			);
		}
	}
}