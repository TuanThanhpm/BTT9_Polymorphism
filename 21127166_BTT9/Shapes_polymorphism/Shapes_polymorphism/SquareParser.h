#pragma once
#include "IParsable.h"
#include "Square.h" 


class SquareParser :public IParsable {
public:
	Object* parse(string);
};