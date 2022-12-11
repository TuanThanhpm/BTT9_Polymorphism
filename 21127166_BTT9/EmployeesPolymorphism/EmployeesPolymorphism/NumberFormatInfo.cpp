#include <iostream>
#include "NumberFormatInfo.h"

string NumberFormatInfo::toString() {
	stringstream builder;

	builder << "Converter";
	string result = builder.str();
	return result;
}
