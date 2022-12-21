#include "Object.h"

class IValueConverter {
public:
	virtual string convert(Object*) = 0;
};