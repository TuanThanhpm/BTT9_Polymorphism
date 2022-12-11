#pragma once

#include "Object.h"

class IRule : public Object {
public:
	virtual string rename(string) = 0;
};