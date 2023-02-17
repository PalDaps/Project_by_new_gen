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
	int n = 0, m = 0, c = 1, b = 1, moove = 1;
	cin >> n >> m;
	vector<vector<int>> future(n, vector<int>(m));
	vector<vector<int>> future_null(n, vector<int>(m));
	// the filling vector
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			future_null[i][j] = 0;
		}
	}
	int safe_j = 0, safe_i = 0;
	for ( moove; moove < 3; moove++ )
	{ 
	if (moove == 1)
	    {
	    	int stringi = 0;
	    	for (int j = 0; j < m; ++j)
	    	{
	    		if (future[stringi][j] == 0 )
	    		{ 
	    		    future[stringi][j] = c;
	    		    c++;
	    			safe_j = j;
	    			moove = 2;
	    		}
	    	}
	    }
	    if (moove == 2)
	    {
	    	for (int i = 0; i < n; ++i)
	    	{
	    		if (future[i][safe_j] == 0)
	    		{
	    			future[i][safe_j] = c;
	    			c++;
					safe_i = i;
	    			moove = 3;
	    		}
	    	}
	    }
		if (moove == 3)
		{
			for (int j = m-1; j >= 0; j--)
			{
				if (future[safe_i][j] == 0)
				{
					future[safe_i][j] = c;
					c++;
					moove = 4;
				}
			}
		}
	}
	// the processing

	// the output
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j )
		{
			cout << setw(3) << future[i][j] << " ";
		}
		cout << endl;
	}

	
	return 0;
}