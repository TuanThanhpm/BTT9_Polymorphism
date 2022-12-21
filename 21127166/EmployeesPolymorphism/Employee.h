#pragma once
#include "Object.h"
#include "Integer.h"

class Employee : public Object {
public:
	virtual Object* salary() = 0;
};