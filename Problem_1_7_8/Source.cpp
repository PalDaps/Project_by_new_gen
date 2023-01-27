#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Print the value of the smallest of all positive elements 
// in the array. It is known that the array has at 
// least one positive element.

int main()
{
	int n = 0, c = 0, time = 0, b = 0, safe = 0;
	int last = 0;
	cin >> n;
	vector<int> pepega;
	// The reading
	for (int i = 0; i < n; ++i)
	{
		cin >> time;
		if ( time > 0 )
		{
		pepega.push_back(time);
		}
		
	}
	int min_of = pepega[0];
	// the processing
	int num_min = 0;
	for (int i = 0; i < pepega.size(); ++i)
	{
		if ( pepega[i] < pepega[num_min] )
		{
			num_min = i;
		}
	}
	cout << pepega[num_min];
	return 0;
}