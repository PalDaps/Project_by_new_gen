#include <iostream>
#include <vector>
#include <algorithm>

//
// The shoe store sells shoes of different sizes. 
// It is known that one pair of shoes can be worn on another 
// it is at least three sizes larger. A customer came to the store. 
// It is required to determine what is the largest number of pairs 
// of shoes the seller can offer him so that he can put them 
// all on at the same time.
//

int main()
{
	int sizeFoot = 0, numbersOfPairs = 0, counter = 0;
	std::cin >> sizeFoot >> numbersOfPairs;
	std::vector <int> shoes;
	for (int i = 0; i < numbersOfPairs; i++)
	{
		int temp = 0;
		std::cin >> temp;
		shoes.push_back(temp);
	}
	sort(shoes.begin(), shoes.end());
	reverse(shoes.begin(), shoes.end());
	for (int i = 1; i < numbersOfPairs; i++)
	{
		if (shoes[i - 1] - shoes[i] >= 3)
		{
			counter++;
		}
	}
	for (int i = 0; i < numbersOfPairs; i++) std::cout << shoes[i] << " ";
	return 0;
}