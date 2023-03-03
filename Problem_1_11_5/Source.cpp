#include <iostream>
#include <set>

//
// Two lists of numbers are given, which can contain up to 100,000 numbers each. 
// Count how many numbers are contained simultaneously 
// in both the first list and the second.
// 

int main()
{
	int n = 0, m = 0, counter = 0;
	std::set <int> numbers_n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp = 0;
		std::cin >> temp;
		numbers_n.insert(temp);
	}
	std::cin >> m;
	if ( n < m )
	{
		for (int i = 0; i < m; i++)
		{
			int temp = 0;
			std::cin >> temp;
			int size_one = numbers_n.size();
			numbers_n.insert(temp);
			int size_two = numbers_n.size();
			if (size_two == size_one && i != m - 1) counter++;
		}
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			int temp = 0;
			std::cin >> temp;
			int size_one = numbers_n.size();
			numbers_n.insert(temp);
			int size_two = numbers_n.size();
			if (size_two == size_one) counter++;
		}
	}
	std::cout << counter;
	return 0;
}