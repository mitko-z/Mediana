#include "Median.h"


Median::Median()
{
	it = data.begin();
}

void Median::add(int number)
{
	data.insert(number);
	if (data.size() == 1)
	{
		it = data.begin();
	}
	else
	{
		it++;
	}
	isOdd ^= true;
}