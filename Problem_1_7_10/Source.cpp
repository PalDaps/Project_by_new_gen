#include <iostream>
#include <vector>
using namespace std;

// Given a list sorted in non-decreasing order of the 
// elements in it. Determine how many different elements it has.

int main()
{
	int n = 0, c = 0, g = 0;
	cin >> n;
	vector<int> pepega;
	// the reading of vector
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		pepega.push_back(temp);
	}
	// the processing
	for (int i = 0; i < n; ++i)
	{
		if (pepega[i] == pepega[i + 1])
		{
			c++;
		}
		else if (pepega[i] != pepega[i + 1])
		{
			c = 0;
			g++;
		}
	}
	cout << g;
	return 0;
}