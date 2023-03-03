#include <iostream>
#include <set>

//
// Two lists of numbers are given, which can contain up to 100,000 numbers each. 
// all the numbers that are included in both the first and 
// second list in ascending order.
//

int main()
{
	int n = 0, m = 0;
	std::set <int> numbers, numbers_next;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		std::cin >> temp;
		numbers.insert(temp);
	}
	std::cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int temp = 0;
		std::cin >> temp;
		int size_one = numbers.size();
		numbers.insert(temp);
		int size_two = numbers.size();
		if (size_one == size_two) numbers_next.insert(temp);
	}
	for (auto now : numbers_next)
	{
		std::cout << now << " ";
	}
	return 0;
}