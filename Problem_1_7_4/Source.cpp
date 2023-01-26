#include <iostream>
#include <cmath>
#include <vector>
// Output all even elements of the array.
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<int> massive(n);
	// The reading
	for (int i = 0; i < n; i++)
	{
		cin >> massive[i];
	}
	// The processing
	for (int i = 0; i < n; i++)
	{
		if (massive[i] % 2 == 0)
		{
			cout << massive[i] << " ";
		}
	}
	return 0;
}
