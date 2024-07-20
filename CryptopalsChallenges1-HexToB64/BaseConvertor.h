#pragma once
#include <string>
#include <map>
#include <vector>
#include "IBaseConvertor.h"
 
#define SUCCESS_CODE 0
#define FAILURE_CODE 1

class BaseConvertor : IBaseConvertor {
	public:
		BaseConvertor();
		
		int ConvertBases(const std::string& source, const ITwoWayMap<char, int>& sourceCharacters, const std::string& dest, const ITwoWayMap<char, int>& destCharacters, std::string* result) override;
};
