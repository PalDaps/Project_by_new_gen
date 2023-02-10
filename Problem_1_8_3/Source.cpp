#include <iostream>
#include <vector>
using namespace std;

// Find Indices of First Occurrence of Maximal Element

int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	vector < vector<int>> vector_two(n, vector<int>(m));
	// the reading
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> vector_two[i][j];
		}
	}
	// the processing
	int safe = vector_two[0][0];
	int index_i = 0;
	int index_j = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (vector_two[i][j] > safe )
			{
				safe = vector_two[i][j];
				index_i = i;
				index_j = j;
			}
		}
	}
	// the output
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << vector_two[i][j] << " ";
		}
		cout << endl;
	}
	cout << "---------" << endl;
	cout << safe << " " << index_i << " " << index_j;
	return 0;
}
