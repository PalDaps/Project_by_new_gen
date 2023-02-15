#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

//
// Given the numbers n and m, fill a two-dimensional vector 
// of size n×m with numbers from 1 to n×m “diagonals”
//

int main()
{
	int n = 0, m = 0, c = 1, b =0, number_diag = 0;
	cin >> n >> m;
	vector<vector<int>> future(n, vector<int>(m));
	// the filling vector and processing vector
	number_diag = n + m - 1;
	for ( int k = 0; k < number_diag; ++k )
	{ 
	 
		for (int i = 0; i < n; ++i)
	 
		{
		 
			for (int j = 0; j < m; ++j)
		 
			{
			 
				if (i + j == k)
			 
				{
					future[i][j] = c;
					c++;
			 
				}
		 
			}
	 
		}
	}
	// the output
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