#include <iostream>
#include <set>

//
// The input string contains a sequence of numbers separated by a space. 
// For each number, print the word YES (on a separate line) 
// if this number has previously occurred in the sequence, 
// or NO if it has not.
//

int main()
{
	int n = 0;
	std::cin >> n;
	std::set <int> numbers;
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		std::cin >> temp;
		int size_one = numbers.size();
		numbers.insert(temp);
		int size_two = numbers.size();
		if (size_one == size_two) std::cout << "YES" << " ";
		else std::cout << "NO" << " ";
	}
	return 0;
}