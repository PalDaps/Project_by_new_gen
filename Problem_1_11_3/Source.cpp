#include <iostream>
#include <set>

//
// Given a list of integers, which can contain up to 100000 numbers. 
// Determine how many different numbers are found in it.
// 

int main()
{
	std::set <int> numbers;
	int n = 0;
	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		int x = 0;
		std::cin >> x;
		numbers.insert(x);
	}
	std::cout << numbers.size();
}