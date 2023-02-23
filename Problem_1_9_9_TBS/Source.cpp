#include <iostream>

double pow(double a, int n)
{
	if (n == 0) return 1;
	else if (n > 0) return a * pow(a, n - 1);
	else return 1 / (a * pow(a, abs(n) - 1));
}
int main()
{
	double a = 0;
	int n = 0;
	std::cin >> a >> n;
	std::cout << pow(a, n);
	return 0;
}