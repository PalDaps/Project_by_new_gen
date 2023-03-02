#include <iostream>
#include <set>

int main()
{
	int n = 0;
	std::cin >> n;
	std::set <int> numbers;
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		std::cin >> temp;
		if ((numbers.insert(temp)).second) std::cout << "NO" << std::endl;
		else std::cout << "YES" << std::endl;
	}
	return 0;
}