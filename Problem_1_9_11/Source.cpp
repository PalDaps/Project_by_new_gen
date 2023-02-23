#include <iostream>

//
// Given a natural number n > 1. Check if it is prime.The program 
// should output the word YES if the number is primeand NO 
// if the number is composite.
//
bool IsPrime(int n)
{
	int value;
	for (int i = 2; i <= sqrt(n); ++i)
	{
		value = n % i;
		if (value == 0)
		{
			return false;
			break;
		}
	}
	return true;
}

int main()
{
	int n = 0;
	std::cin >> n;
	if (IsPrime(n)) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}