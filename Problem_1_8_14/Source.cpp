#include <iomanip>
#include <vector>
#include <iostream>

using namespace std;

//
// Fill in an n × m vector in a checkerboard pattern: cells 
// of one color are filled with zeros, and cells of the other 
// color are filled with natural numbers from top to bottom, 
// from left to right.
//

int main()
{
	int n = 0, m = 0, count = 1;
	cin >> n >> m;
	vector<vector<int>> future(n, vector<int>(m));
	// the filling vector by 0
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			future[i][j] = 0;
		}
	}
	// the processing
	for (int i = 0; i < n; ++i)
	{

		if (i % 2 == 0)
		{
			for (int j = 0; j < m; j = j + 2)
			{
				future[i][j] = count;
				count++;
			}
		}
		else
		{
			for (int j = 1; j < m; j = j + 2)
			{
				future[i][j] = count;
				count++;
			}
		}
	}
	// the output
	for (int i = 0; i < n; ++i )
	{
		for (int j = 0; j < m; ++j)
		{
			cout << setw(3) << future[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}