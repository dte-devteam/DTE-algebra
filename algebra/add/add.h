#pragma once
#pragma warning(disable:4275) //solve this later!
#include "token_data.h"
#include "../templates.h"
namespace functions {
	namespace algebra {
		namespace add {
			//instances
			//(+)
			inline add_template<int> int_add{
				token_data::token_name_to_id(L"int_add"),	//name
				{	//default values
					nullptr,
					nullptr,
					nullptr
				}
			};
			inline add_template<float> float_add{
				token_data::token_name_to_id(L"float_add"),	//name
				{	//default values
					nullptr,
					nullptr,
					nullptr
				}
			};
			inline functionfactory::muxfunction add{
				token_data::token_name_to_id(L"add"),	//name
				{	//defaultvalues
					nullptr,
					nullptr,
					nullptr
				},
				{	//callings
					{
						&int_add,
						{
							{0, false},
							{1, false},
							{2, false}
						}
					},
					{
						&float_add,
						{
							{0, false},
							{1, false},
							{2, false}
						}
					}
				},
				nullptr //&mux (to do)
			};
		}
	}
}