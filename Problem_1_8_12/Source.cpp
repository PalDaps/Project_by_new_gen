#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

//
// Given the numbers n and m, fill in a two-dimensional vector of 
// size n×m with numbers from 1 to n×m with a “snake”, as shown 
// in the example.
//

int main()
{
	int n = 0, m = 0, c = 1;
	cin >> n >> m;
	vector<vector<int>> future(n, vector<int>(m));
	// the reading
	for ( int i = 0; i < n; ++ i)
	{ 
		for (int j = 0; j < m; ++j)
		{
			future[i][j] = c;
			c++;
		}
	}
	int k = m-1;
	// the processing
	for (int i = 1; i < n; i= i +2)
	{
		for (int j = 0; j < (m+1)/2; ++j)
		{
			int box = future[i][j];
			future[i][j] = future[i][k];
			future[i][k] = box;
			k--;
		}
		k = m - 1;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << setw(3) << future[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}