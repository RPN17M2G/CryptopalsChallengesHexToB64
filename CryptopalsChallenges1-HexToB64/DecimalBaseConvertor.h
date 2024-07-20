#pragma once
#include <string>
#include <vector>
#include "IBaseConvertor.h"

#define SUCCESS_CODE 0
#define FAILURE_CODE 1
#define DECIMAL_BASE_NUMBER  10

class DecimalBaseConvertor {

public:
	DecimalBaseConvertor();

	int ConvertString(std::string& sourceStream, int* result, int base);
	std::string ConvertInt(int decimalValue, std::string* result, int base);
};