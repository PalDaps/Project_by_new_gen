#include <iostream>

//
// Write a function min(a, b) that calculates 
// at least two numbers. Then write a function 
// min 4(a, b, c, d) that calculates at least 4 
// numbers using the min function.
// 

int min_my(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else if (a == b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int min_of_four(int a, int b, int c, int d)
{
	return min_my(min_my(a, b), min_my(c, d));
}
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	std::cin >> a >> b >> c >> d;
	std::cout << min_my(a, b) << std::endl;
	std::cout << min_of_four(a, b, c, d);
	return 0;
}