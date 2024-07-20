#pragma once

template <typename T, typename G>

class ITwoWayMap {
public:
	virtual G GetValueByKey(T key) = 0;
	virtual T GetKeyByValue(G value) = 0;
	virtual int Size();
};
