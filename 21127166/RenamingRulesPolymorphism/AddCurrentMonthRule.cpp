#include "AddCurrentMonthRule.h"
#include "AddPrefixRule.h"
#include <sstream>
#include "Utils.h"

using std::stringstream;

string AddCurrentMonthRule::rename(string origin) {
	time_t t = time(0);
	tm* now = localtime(&t);

	stringstream builder;
	builder << (now->tm_mon + 1) << (now->tm_year % 100) << " " << origin;
	string result = builder.str();
	return result;
}

string AddCurrentMonthRule::toString() {
	return "AddCurrentMonthRule";
}