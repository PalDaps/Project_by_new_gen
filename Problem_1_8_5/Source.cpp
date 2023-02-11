#include <iostream>
#include <vector>
using namespace std;

// Given a number n not greater than 100. Create an n×n vector
// and fill it according to the following rule. On the main diagonal, 
// the numbers 0 should be written. On the two diagonals adjacent 
// to the main, the numbers 1. On the next two diagonals, the numbers 
// 2, and so on.

int main()
{
	int n = 0;
	cin >> n;
	if (n < 0 || n > 100)
	{
		return 0;
	}
	vector<vector<int>> future(n, vector<int>(n));
	// the filling ( the processing i think, because we dont give the values in vector )
	for ( int i = 0; i < n; ++i )
	{
		for (int j = 0; j < n; ++j)
		{
			future[i][j] = 0;
		}
			
	}
	// the processing
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				if (abs(i - j) == k)
				{
					future[i][j] = k;
				}
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