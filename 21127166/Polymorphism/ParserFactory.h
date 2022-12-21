#pragma once
#include "RectangleParser.h"
#include "SquareParser.h"
#include "CircleParser.h"

class ParserFactory {
public:
	IParsable* create(string);
};