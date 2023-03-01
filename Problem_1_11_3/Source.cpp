#include <iostream>
#include <set>

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
	for (auto now = numbers.begin(); now != numbers.end(); ++now)
	{
		std::cout << *now << " ";
	}
}