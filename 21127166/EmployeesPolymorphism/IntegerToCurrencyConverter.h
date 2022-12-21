#pragma once
#include "Object.h"
#include "Utils.h"
#include "Integer.h"
#include "NumberFormatInfo.h"
#include "IValueConverter.h"
#include <regex>

using std::regex, std::regex_match;

class IntegerToCurrencyConverter : public IValueConverter {
public:
	string convert(Object*);
};

