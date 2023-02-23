#include <iostream>
//
// Given a natural number n > 1. Print its smallest divisor other than 1.
//
int MinDivisor(int n)
{
	int value;
	for (int i = 2; i <= sqrt(n); ++i)
	{
		value = n % i;
		if (value == 0) return i; break;
	}
	return n;
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::cout << MinDivisor(n);
	return 0;
}