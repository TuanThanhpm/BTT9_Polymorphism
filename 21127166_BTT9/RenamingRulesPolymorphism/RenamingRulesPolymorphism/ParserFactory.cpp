#include "ParserFactory.h"

void ParserFactory::registerWith(IParsable* parser) {
	_container.insert({ parser->parsedObjectName(), parser });
}

IParsable* ParserFactory::create(string type) {
	return _container[type];
}

string ParserFactory::toString() {
	stringstream builder;

	builder << "Register successfully!";
	string result = builder.str();
	return result;
}