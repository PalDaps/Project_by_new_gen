#include <iostream>
#include <cmath>
#include <vector>
// Given an array of numbers. If it contains two elements of 
// the same sign, print these numbers. If there are no 
// elements of the same character, do not print anything. 
// If there are several such guys, print the first pair.
using namespace std;
int main()
{
	int n = 0, c = 0;
	cin >> n;
	vector<int> massive(n);
	// The reading
	for (int i = 0; i < n; i++)
	{
		cin >> massive[i];
	}
	// The processing
	for (int i = 0; i < n - 1; i++)
	{
		if ((massive[i] > 0 && massive[i + 1] > 0) || (massive[i] < 0 && massive[i + 1] < 0) )
		{
			c++;
			if ( c == 1 )
			{
			cout << min(massive[i],massive[i+1]) << " " << max(massive[i], massive[i + 1]);
			}
			else
			{

			}
		}
	}

	return 0;
}