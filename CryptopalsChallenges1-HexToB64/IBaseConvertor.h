#pragma once
#include <vector>
#include <string>
#include "ITwoWayMap.h"

class IBaseConvertor
{
public:
	virtual int ConvertBases(const std::string& source, ITwoWayMap<char, int>& sourceCharacters, const std::string& dest, ITwoWayMap<char, int>& destCharacters, std::string* result) = 0;
};
