#pragma once
#pragma warning(disable:4275) //solve this later!
#include "function/include/functionfactory.h"
#include "token_name.h"
using namespace functionfactory;
namespace functions {
	namespace algebra {
		namespace add {
			//constructors
			//(+)
			struct int_add_function : basicfunction {
				using basicfunction::basicfunction;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct float_add_function : basicfunction {
				using basicfunction::basicfunction;
				void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream);
			};
			struct add_function : muxfunction {
				using muxfunction::muxfunction;
			};
			//instances
			//(+)
			inline int_add_function int_add{
				token_name::token_name_to_id(L"int_add"),	//name
				{	//default values
					nullptr,
					nullptr,
					nullptr
				}
			};
			inline float_add_function float_add{
				token_name::token_name_to_id(L"float_add"),
				{
					nullptr,
					nullptr,
					nullptr
				}
			};
			inline add_function add{
				token_name::token_name_to_id(L"add"),	//name
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
				{   //valuetypes
					{
						(void*)0,
						(void*)1,
						(void*)2,
						(void*)3
					},
					{
						(void*)0,
						(void*)1,
						(void*)2,
						(void*)3
					},
					{
						(void*)0,
						(void*)1,
						(void*)2,
						(void*)3
					}
				},
				nullptr //&mux (to do)
			};
		}
	}
}