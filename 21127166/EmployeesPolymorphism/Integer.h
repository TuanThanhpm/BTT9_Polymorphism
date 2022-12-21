#pragma once
#include "Object.h"
#include <sstream>

using std::stringstream;

class Integer : public Object {
private:
	int _value;
public:
	Integer(int value) { this->_value = value; };

public:
	int value() { return this->_value; }
	void setValue(int value) { this->_value = value; }

public:
	string toString();
};