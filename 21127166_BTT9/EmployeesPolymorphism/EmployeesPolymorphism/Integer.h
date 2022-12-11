#pragma once
#include "Object.h"
#include <sstream>

using std::stringstream;

class Integer: public Object {
private:
	int _value;
public:
	Integer(int value) { this->_value = value; };
	int value() { return this->_value; }
	string toString();
};