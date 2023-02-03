#include <iostream>
#include <vector>
using namespace std;

// An vector is given. Output those of its elements that occur 
// in the array only once. The elements should be displayed 
// in the order in which they occur in the list.

int main()
{
	int n = 0, c = 0;
	cin >> n;
	vector<int> numbers;
	// the reading 
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		numbers.push_back(temp);
	}
	// the processing
	int i = 0;
	for (int j = 0; j < n; ++j)
	{
		for (i = 0; i < n; ++i) if (numbers[j] == numbers[i]) ++c;
		if (c == 1)
		{
			cout << numbers[j] << " ";
			c = 0;
		}
		else if (c > 1) c = 0;
	}

	return 0;
}