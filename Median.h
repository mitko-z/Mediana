#pragma once

#include <vector>

template<class T>
class Median
{
public:
	void add(T number);
	T getMedian();
private:
	std::vector<T> _data;
};