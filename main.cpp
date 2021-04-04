#include "Median.h"
#include <iostream>
#include <vector>

int main()
{
	Median<float> median;
	std::vector<float> randomNumbers{ 64	,
										84	,
										13	,
										19	,
										24	,
										24	,
										58	,
										100	,
										52	,
										79	,
										34	,
										43	,
										62	,
										4	};
	for (auto num : randomNumbers)
	{
		median.add(num);
	}
	float result = median.getMedian();
	std::cout << result;
}