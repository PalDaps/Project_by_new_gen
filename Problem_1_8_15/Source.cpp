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
	vector<vector<int>> future_r(n, vector<int>(m));
	// the filling vector
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			future_r[i][j] = 0;
		}
	}
	// the processing
	int safe_i = 0, safe_j = 0;
	for ( moove; moove < 4; moove++ )
	{ 
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
	    	for (int j = 0; j < n-2; ++j)
	    	{
	    		future[j+1][safe_i] = c;
	    		c++;
				safe_j = j;
	    	}
	    	moove = 3;
	    }
		if (moove == 3)
		{
			for (int j = n; j >= 0; j--)
			{
				future[safe_j+2][j] = c;
				c++;
			}
			moove = 4;
		}
	}


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