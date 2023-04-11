#pragma once
#include "add/add.h"
#include "div/div.h"
#include "sub/sub.h"
#include "mul/mul.h"
#include "module/include/function_data.h"
#include "module/module_defines.h"
namespace functions {
	namespace algebra {
		std::vector<function::basicfunction*> dllfunctions{//outdated
				&add::int_add,
				&add::float_add,
				&add::add,
				&sub::int_sub,
				&sub::float_sub,
				&mul::int_mul,
				&mul::float_mul,
				&div::int_div,
				&div::float_div
		};
		//module has no dependencies, so function has empty reqirements ({ basicfunction* })
		DTE_EXPORTS std::vector<module::function_data> functions{
			{ &add::int_add		},
			{ &add::float_add	},
			{ &add::add			},
			{ &sub::int_sub		},
			{ &sub::float_sub	},
			{ &mul::int_mul		},
			{ &mul::float_mul	},
			{ &div::int_div		},
			{ &div::float_div	},
		};
		//export functions
		DTE_EXPORTS std::vector<function::basicfunction*>* getfunctions() { //outdated
			return &dllfunctions;
		}
	}
}