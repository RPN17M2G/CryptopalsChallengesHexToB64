#pragma once
#include <string>
#include <map>
#include <vector>
#include "IBaseConvertor.h"
#include "DecimalBaseConvertor.h" 

#define SUCCESS_CODE 0
#define FAILURE_CODE 1

class BaseConvertor : IBaseConvertor {
	public:
		BaseConvertor(DecimalBaseConvertor decimalConvertor);
		
		int ConvertBases(std::string& source, ITwoWayMap<char, int>& sourceCharacters, ITwoWayMap<char, int>& destCharacters, std::string* result) override;

	private:
		DecimalBaseConvertor _decimalConvertor;
};
