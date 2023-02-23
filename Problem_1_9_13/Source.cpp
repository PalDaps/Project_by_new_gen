#include <iostream>

int sum = 0;

//
// Given a sequence of numbers ending with the number 0. 
// Find the sum of all these numbers without using a loop.
//
int SumOfNumbers(int n)
{
	std::cin >> n;
	if (n != 0)
	{
		sum = n + sum;
		SumOfNumbers(n);
	}
	return sum;
}

int main()
{
	int n = 0;
	std::cout << SumOfNumbers(n);
	return 0;
}