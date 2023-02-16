#include <iostream>
#include <vector>
#include <iomanip>

//
// Given the numbers n and m, fill a two-dimensional 
// array of size n×m with numbers from 1 to n×m in a 
// spiral starting from the upper left corner and 
// twisting clockwise
//

using namespace std;

int main()
{
	int n = 0, m = 0, c = 0, b = 1, moove = 0;
	cin >> n >> m;
	vector<vector<int>> future(n, vector<int>(m));
	vector<vector<int>> future_r(n, vector<int>(m));
	// the filling vector
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			future_r[i][j] = b;
			b++;
		}
	}
	// the processing
	int safe_i = 0;
	if ( moove == 1 ) 
	{ 
	    for (int i = 0; i < n; ++i)
	    {
	    	for (int j = 0; j < m; ++j)
	    	{
				future[i][j] = c;
				c++;
				safe_i = j;
	    	}
			moove = 2;
			break;
	    }
	}
	if (moove == 2)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				future[j][safe_i] = c;
				c++;
			}
			moove = 2;
			break;
		}
	}


	// the output

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j )
		{
			
		}
	}

	
	return 0;
}