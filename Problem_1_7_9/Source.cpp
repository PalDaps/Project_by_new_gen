#include <iostream>
#include <vector>
using namespace std;

// Print the value of the smallest odd(нечетного) 
// element of the list, 
// and if there are no odd elements in the list, 
// print the number 0.

int main()
{
	int n = 0, max = 0, c = 0;
	cin >> n;
	vector<int> pepega;
	// the reading only odd positive numbers
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		if (temp % 2 != 0 && temp % 2 > 0)
		{
			pepega.push_back(temp);
		}
	}
	// the processing vector. Finding the min
	int num_min = 0;
	for (int i = 0; i < pepega.size(); ++i)
	{
		if (pepega[i] < pepega[num_min])
		{
			num_min = i;
		}
	}
	if ( pepega.size() != 0 )
	{ 
	cout << pepega[num_min];
	}
	else if (pepega.size() == 0)
	{
		cout << 0;
	}


	return 0;
}