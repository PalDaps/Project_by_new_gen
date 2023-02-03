#include <iostream>
#include <vector>
using namespace std;
// An vector of numbers is given. Count how many pairs 
// of elements are equal to each other in it. It is assumed 
// that any two elements equal to each other form one 
// pair, which must be counted.
//
int main()
{
	int n = 0, c = 0;
	cin >> n;
	vector<int> numbers;
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		for (int i = 0; i < numbers.size(); ++i)
		{
			if (temp == numbers[i])
			{
				c++;
			}
		}
		numbers.push_back(temp);
	}
	cout << c;
	return 0;
}