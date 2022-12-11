#pragma once
#include "IParsable.h"
#include "Circle.h"

class CircleParser :public IParsable {
public:
	Object* parse(string);
};