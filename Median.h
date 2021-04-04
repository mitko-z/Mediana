#pragma once

#include <set>
#include <iterator> 
#include <cstddef>  

class Median
{
public:
	Median();
	void add(int number);
private:

	//struct Iterator
	//{
	//	using iterator_category = std::forward_iterator_tag;
	//	using difference_type = std::ptrdiff_t;
	//	using value_type = int;
	//	using pointer = int*;  
	//	using reference = int&; 
	//	
	//	Iterator(pointer ptr) : m_ptr(ptr) {}

	//	reference operator*() const { return *m_ptr; }
	//	pointer operator->() { return m_ptr; }

	//	// Prefix increment
	//	Iterator& operator++() { m_ptr++; return *this; }

	//	// Postfix increment
	//	Iterator operator++(int) { Iterator tmp = *this; ++(*this); return tmp; }

	//	friend bool operator== (const Iterator& a, const Iterator& b) { return a.m_ptr == b.m_ptr; };
	//	friend bool operator!= (const Iterator& a, const Iterator& b) { return a.m_ptr != b.m_ptr; };

	//private:
	//	pointer m_ptr;
	//};

	//Iterator begin() { return Iterator(const_cast<int*>(&*(data.begin()))); }
	//Iterator end() { return Iterator(const_cast<int*>(&*(data.end()))); } 

	std::multiset<int> data;
	//Iterator it;
	std::multiset<int>::iterator it;
	bool isOdd{ true };
};