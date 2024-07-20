#include "DecimalBaseConvertor.h"

DecimalBaseConvertor::DecimalBaseConvertor()
{
}

int DecimalBaseConvertor::ConvertString(std::string& sourceStream, unsigned int* result, int base, ITwoWayMap<char, int>& baseCharacters)
{
	int sum = 0;
	char character;

	for (int i = 0; i < sourceStream.length(); ++i) {
		character = sourceStream.at(i);
		
		try {
			*result += (int)(baseCharacters.GetValueByKey(character) * pow(base, i));
		}
		catch (std::exception e) {
			*result = 0;
			return FAILURE_CODE;
		}
		
	}
	return SUCCESS_CODE;
}

int DecimalBaseConvertor::ConvertInt(unsigned int decimalValue, std::string* result, int base, ITwoWayMap<char, int>& baseCharacters)
{
	while (decimalValue > 0) {
		try {
			result->append(std::to_string(baseCharacters.GetKeyByValue(decimalValue % base)));
		}
		catch (std::exception e) {
			*result = "";
			return FAILURE_CODE;
		}

		decimalValue /= base;
	}

	return SUCCESS_CODE;
}




