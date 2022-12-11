#pragma once
#include "IShape.h"

class Square : public IShape {
private:
	double _side;
public:
	Square();
	Square(double) noexcept(false);

public:
	double getSide() { return this->_side; }
	void setSide(double side) { this->_side = side; }

public:
	string toString();
	double area();
	double perimeter();
};