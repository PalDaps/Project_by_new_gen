#include <iostream>

int sumOfNumbers()
{
	int n;
	std::cin >> n;
	return (n == 0 ? 0 : n + sumOfNumbers());
}

int main()
{
	std::cout << sumOfNumbers();
	return 0;
}