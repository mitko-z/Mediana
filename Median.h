#pragma once

#include <vector>

///
/// Class Median
/// Implementation: the structure uses std::vector for collecting 
///		the data inserted. When asking for the median it use the
///		std::nth_element() function for sorting the unsorted data 
///		and returning the middle of it. Complexity O(n).
/// Usage notes: add specific template declaration in Templates.cpp
///		in order to use with different types of data
///
template<class T>
class Median
{
public:
	void add(T number);
	T getMedian();
private:
	std::vector<T> _data;
};