#pragma once
#include <vector>
#include <string>
#include "ITwoWayMap.h"

class IBaseConvertor
{
public:
	virtual int ConvertBases(std::string& source, ITwoWayMap<char, int>& sourceCharacters, ITwoWayMap<char, int>& destCharacters, std::string* result) = 0;
};
