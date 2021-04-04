#include "Median.h"

#include <algorithm>


template <class T>
void Median<T>::add(T number)
{
	_data.push_back(number);
}

template <class T>
T Median<T>::getMedian()
{
	size_t n = _data.size();
	
	if (n == 0)
		return 0;

	// If size is even
	if (n % 2 == 0) {

		// Applying nth_element on n/2th index
		std::nth_element(_data.begin(), _data.begin() + n / 2, _data.end());

		// Applying nth_element on (n-1)/2 th index
		std::nth_element(_data.begin(), _data.begin() + (n - 1) / 2, _data.end());

		// Find the average of value at index N/2 and (N-1)/2
		return (T)(_data[(n - 1) / 2] + _data[n / 2]) / 2.0;
	}

	// If size is odd
	else {

		// Applying nth_element on n/2
		std::nth_element(_data.begin(), _data.begin() + n / 2, _data.end());

		// Value at index (N/2)th is the median
		return (T)_data[n / 2];
	}
}
