#include "Integer.h"

string Integer::toString() {
	stringstream builder;

	builder << "Value: " << this->_value;
	string result = builder.str();
	return result;
}