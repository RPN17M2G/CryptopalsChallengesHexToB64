#pragma once
#include <string>
#include <map>

 
#define SUCCESS_CODE 0
#define FAILURE_CODE 1

class HexToIntConvertor {
public:
	HexToIntConvertor();
	int ConvertString(std::string& hexStream, int* result);

private:
	std::map<char, int> hexCharacters = {
		{ '0', 0 },
		{ '1', 1 },
		{ '2', 2 },
		{ '3', 3 },
		{ '4', 4 },
		{ '5', 5 },
		{ '6', 6 },
		{ '7', 7 },
		{ '8', 8 },
		{ '9', 9 },
		{ 'a', 10 },
		{ 'b', 11 },
		{ 'c', 12 },
		{ 'd', 13 },
		{ 'e', 14 },
		{ 'f', 15 }
	};
};
