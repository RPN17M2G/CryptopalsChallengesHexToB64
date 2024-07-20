#include "BaseConvertor.h"
#include <iostream>

BaseConvertor::BaseConvertor()
{
}

int BaseConvertor::ConvertString(std::string& hexStream, int* result)
{
	int result = 0;
	char character;
	std::map<char, int>::iterator helperIterator;
	for (int i = 0; i < hexStream.length(); ++i) {
		character = hexStream.at(i);
		helperIterator = this->hexCharacters.find(character);
		
		if (helperIterator == this->hexCharacters.end()) {
			return FAILURE_CODE;
		}
		
	}
	return SUCCESS_CODE;
}

int BaseConvertor::ConvertTo(const std::string& source, const ITwoWayMap<char, int>& sourceCharacters, const std::string& dest, const ITwoWayMap<char, int>& destCharacters, std::string* result)
{
	return 0;
}
