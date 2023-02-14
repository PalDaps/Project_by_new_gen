#include <iostream>
#include <vector>

using namespace std;

// 
// An n×m given - angle vector.Rotate it 90 degrees clockwise, 
// writing the result to the new array size m×n.
//

int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	if (n < 0 || m < 0 || n > 100 || m > 100)
	{
		return 0;
	}
	vector<vector<int>> future(n, vector<int>(m));
	vector<vector<int>> future_r(m, vector<int>(n));
	// the reading
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> future[i][j];
		}
	}
	// the output for norm
	// the processing 
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			future_r[i][j] = future[j][i];
		}

	}
	// the output
	for (int i = 0; i < m; ++i)
	{
		int j = n - 1;
		while (j >= 0)
		{
			cout << future_r[i][j] << " ";
			j--;
		}
		cout << endl;
	}
	return 0;
}