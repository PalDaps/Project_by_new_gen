#include <iostream>
#include <vector>
#include <algorithm>

//
// Sort the array with STL. xD!.
//

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<int> numbers;
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		std::cin >> temp;
		numbers.push_back(temp);
	}
	sort(numbers.begin(), numbers.end());
	for (auto i : numbers) std::cout << i << " ";
	return 0;
}