#include <iostream>
#include <cmath>
#include <vector>
// Display all array elements that are greater than the previous element.
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
	for (int i = 0; i < n-1; i++)
	{
		if (massive[i] < massive[i+1] )
		{
			cout << massive[i+1] << " ";
		}
	}

	return 0;
}