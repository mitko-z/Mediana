#include "Median.h"
#include <iostream>

int main()
{
	Median<float> median;
	for (int i = 0; i < 10; ++i)
	{
		median.add(static_cast<float>(i));
	}
	float result = median.getMedian();
	std::cout << result;
}