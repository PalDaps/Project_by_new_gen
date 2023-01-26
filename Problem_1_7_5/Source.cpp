#include <iostream>
#include <cmath>
#include <vector>
// Finding the number of positive elements in a given array.
using namespace std;
int main()
{
	int n = 0, c =0;
	cin >> n;
	vector<int> massive(n);
	// The reading
	for (int i = 0; i < n; i++)
	{
		int temp; // the temporary variable
		cin >> temp;
		if (temp > 0)
		{
			c++;
			massive.push_back(temp);
		}
	}
	// The processing
	cout << c;
	return 0;
}
