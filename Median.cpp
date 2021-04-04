#include "Median.h"


template <class T>
Median<T>::Median()
{
	it = data.begin();
}

template <class T>
void Median<T>::add(T number)
{
	data.insert(number);
	if (data.size() == 1)
	{
		it = data.begin();
	}
	else
	{
		int half = data.size() / 2;
		if (half > iteratorPosition)
		{
			it++;
			iteratorPosition++;
		}
	}
	
	isOdd ^= true;
}

template <class T>
T Median<T>::getMedian()
{
	if (data.size() == 0)
		return 0;
	if (isOdd)
	{
		it--;
		T num1 = *it;
		it++;
		T num2 = *it;
		return (num1 + num2) / 2;
	}
	else
	{
		int num = *it;
		return num / 2;
	}
}
