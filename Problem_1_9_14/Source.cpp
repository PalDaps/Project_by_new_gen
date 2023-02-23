#include <iostream>
int n = 0, counter = 0, fib_null = 0, fib_one = 1, sum = 0;
//
// Write a function fib(n) that, given a positive integer n, 
// returns the nth Fibonacci number.You can't use loops in 
// this problem - use recursion.
//
int fib(int n, int counter, int fib_null, int fib_one, int sum)
{
	int sum_true;
	/* 0 + 1 = 1
	1 + 1  = 2
	2 + 1 = 3
	3 + 2 = 5
	5 + 3 = 8
	*/ 
	if (counter < n)
	{
		sum = fib_null + fib_one;
		fib_null = fib_one;
		fib_one = sum;
		counter++;
		fib(n, counter, fib_null, fib_one, sum);
	}
	sum_true = sum;
	return sum_true;
}

int main()
{
	std::cin >> n;
	std::cout << fib(n, counter, fib_null, fib_one, sum);
	return 0;
}