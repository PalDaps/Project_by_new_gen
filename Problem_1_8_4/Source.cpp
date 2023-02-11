#include <iostream>
#include <vector>

// The image of an asterisk using asterisks!
//

using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	if (n < 0 || n > 15 || n%2 == 0)
	{
		return 0;
	}
	vector<vector<char>> future(n, vector<char>(n));
	// the reading
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			future[i][j] = '.';
		}
	}
	// the processing
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i == j || i+j==n-1 || j == n/2 || i == n/2)
			{
				future[i][j] = '*';
			}
		}
	}
	// the output
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << future[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}