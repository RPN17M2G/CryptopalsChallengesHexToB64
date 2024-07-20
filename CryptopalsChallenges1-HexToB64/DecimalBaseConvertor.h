#pragma once
#include <string>
#include <vector>
#include "IBaseConvertor.h"
#include "ITwoWayMap.h"

#define SUCCESS_CODE 0
#define FAILURE_CODE 1
#define DECIMAL_BASE_NUMBER  10

class DecimalBaseConvertor {

public:
	DecimalBaseConvertor();

	int ConvertString(std::string& sourceStream, unsigned int* result, int base, ITwoWayMap<char, int>& baseCharacters);
	int ConvertInt(unsigned int decimalValue, std::string* result, int base, ITwoWayMap<char, int>& baseCharacters);
};