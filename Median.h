#pragma once

#include <set>
#include <iterator> 
#include <cstddef>  

template<class T>
class Median
{
public:
	Median();
	void add(T number);
	T getMedian();
private:
	std::multiset<T> data;
	typename std::multiset<T>::iterator it;
	size_t iteratorPosition{ 0 };
	bool isOdd{ true };
};