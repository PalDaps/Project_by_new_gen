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
	for (int i = 1; i < n; ++i)
	{
		if (pepega[i] != pepega[i - 1])
		{
			c++;
		}
	}
	g = pepega.size() - 1;
	if ((pepega[g - 1] != pepega[g]) || (pepega[g - 1] == pepega[g]) )
	{
		cout << c + 1;
	}
	else 
	{ 
	cout << c;
	}
	
	return 0;
}