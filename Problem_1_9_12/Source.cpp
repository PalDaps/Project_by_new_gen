#include <iostream>

//
// You can raise to a power much faster than n multiplications! 
// To do this, you need to use the following recurrence relations. 
// Implement the fast exponentiation algorithm with a recursive function.
//
double pow(double a, int n)
{
	if (n == 0) return 1;
	else if (n % 2 == 1) return a * pow(a, n - 1);
	else return pow(a * a, n / 2);
}

int main()
{
	double a = 0;
	int n = 0;
	std::cin >> a >> n;
	std::cout << pow(a, n);
	return 0;
}