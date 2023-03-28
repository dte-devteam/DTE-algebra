#pragma once
#include "function/include/basicfunction.h"
template <class T>
struct add_template : function::basicfunction {
	using basicfunction::basicfunction;
	void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream) {
		std::vector<void*> values;
		filldefaultvalues(argumentspointer, values);
		if (values[2] && values[1] && values[0]) {
			*(T*)values[2] = *(T*)values[0] + *(T*)values[1];
		}
		else if (errorcodepointer) {
			*errorcodepointer = 2; //change errorcode: error: can`t operate nullptr
		}
	}
};
template <class T>
struct div_template : function::basicfunction {
	using basicfunction::basicfunction;
	void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream) {
		std::vector<void*> values;
		filldefaultvalues(argumentspointer, values);
		if (values[2] && values[1] && values[0]) {
			if (!*(T*)values[1]) {
				if (!forced && errorcodepointer) {
					*errorcodepointer = 2; //change errorcode: error: can`t divide by zero
				}
				return;
			}
			*(T*)values[2] = *(T*)values[0] / *(T*)values[1];
		}
		else if (errorcodepointer) {
			*errorcodepointer = 2; //change errorcode: error: can`t operate nullptr
		}
	}
};
template <class T>
struct div_with_0_template : function::basicfunction {
	using basicfunction::basicfunction;
	void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream) {
		std::vector<void*> values;
		filldefaultvalues(argumentspointer, values);
		if (values[2] && values[1] && values[0]) {
			*(T*)values[2] = *(T*)values[0] / *(T*)values[1];
		}
		else if (errorcodepointer) {
			*errorcodepointer = 2; //change errorcode: error: can`t operate nullptr
		}
	}
};
template <class T>
struct mul_template : function::basicfunction {
	using basicfunction::basicfunction;
	void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream) {
		std::vector<void*> values;
		filldefaultvalues(argumentspointer, values);
		if (values[2] && values[1] && values[0]) {
			*(T*)values[2] = *(T*)values[0] * *(T*)values[1];
		}
		else if (errorcodepointer) {
			*errorcodepointer = 2; //change errorcode: error: can`t operate nullptr
		}
	}
};
template <class T>
struct sub_template : function::basicfunction {
	using basicfunction::basicfunction;
	void execute(std::vector<void*>* argumentspointer, uint64_t* errorcodepointer, bool forced, void* stream) {
		std::vector<void*> values;
		filldefaultvalues(argumentspointer, values);
		if (values[2] && values[1] && values[0]) {
			*(T*)values[2] = *(T*)values[0] - *(T*)values[1];
		}
		else if (errorcodepointer) {
			*errorcodepointer = 2; //change errorcode: error: can`t operate nullptr
		}
	}
};