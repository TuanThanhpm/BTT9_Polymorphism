#include <iostream>
#include <map>
#include "ParserFactory.h"

using std::map, std::string;

IParsable* ParserFactory::create(string type) {
	map<string, IParsable*> container = {
		{"Rectangle", new RectangleParser()},
		{"Square", new SquareParser()},
		{"Circle", new CircleParser()}
	};
	IParsable* result = container[type];

	return result;
}