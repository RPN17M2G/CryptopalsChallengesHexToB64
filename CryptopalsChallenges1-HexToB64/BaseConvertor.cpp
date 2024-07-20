#include "BaseConvertor.h"
#include <iostream>

BaseConvertor::BaseConvertor(DecimalBaseConvertor decimalConvertor)
{
	this->_decimalConvertor = decimalConvertor;
}

int BaseConvertor::ConvertBases(std::string& source, ITwoWayMap<char, int>& sourceCharacters, ITwoWayMap<char, int>& destCharacters, std::string* result)
{
	unsigned int decimalValue;

	if (this->_decimalConvertor.ConvertString(source, &decimalValue, sourceCharacters.Size(), sourceCharacters)) {
		return FAILURE_CODE;
	}

	if (this->_decimalConvertor.ConvertInt(decimalValue, result, destCharacters.Size(), destCharacters)) {
		return FAILURE_CODE;
	}

	return SUCCESS_CODE;
}

