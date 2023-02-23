#include <iostream>
//
// Write a function fib(n) that, given a positive integer n, 
// returns the nth Fibonacci number.You can't use loops in 
// this problem - use recursion.
//
int fib(int n)
{
	if (n <= 1) return n;
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	std::cin >> n;
	std::cout << fib(n);
	return 0;
}