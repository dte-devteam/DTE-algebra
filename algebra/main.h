#pragma once
#include "add/add.h"
#include "div/div.h"
#include "sub/sub.h"
#include "mul/mul.h"
#include "module/include/function_data.h"
namespace functions {
	namespace algebra {
		inline std::vector<function::basicfunction*>* dllfunctions = new std::vector<function::basicfunction*>({//outdated
				add::int_add,
				add::float_add,
				add::add,
				sub::int_sub,
				sub::float_sub,
				mul::int_mul,
				mul::float_mul,
				div::int_div,
				div::float_div
		});
		//module has no dependencies, so function has empty reqirements ({ basicfunction*, })
		static std::vector<module::function_data>* ndllfunctions = new std::vector<module::function_data>({
			{ add::int_add },
			{ add::float_add },
			{ add::add },
			{ sub::int_sub },
			{ sub::float_sub },
			{ mul::int_mul },
			{ mul::float_mul },
			{ div::int_div },
			{ div::float_div },
		});
		//export functions
		std::vector<function::basicfunction*>* getfunctions() { //outdated
			return dllfunctions;
		}
		std::vector<module::function_data>* getnfunctions() {
			return ndllfunctions;
		}
	}
}