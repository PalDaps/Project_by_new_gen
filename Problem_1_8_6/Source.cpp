#include <iostream>
#include <vector>
using namespace std;

// Given a two-dimensional vector and two numbers: i and j. 
// Swap columns i and j in the vector.
//

int main()
{
	int n = 0, m = 0, first_colom = 0, second_colom = 0;
	cin >> n >> m;
	vector<vector<int>> future(n, vector<int>(m));
	// the reading
	for ( int i = 0; i < n; ++i )
	{
		for ( int j = 0; j < m; ++j)
		{
			cin >> future[i][j];
		}
	}
	cin >> first_colom >> second_colom;
	// the processing 
	for (int i = 0; i < n; ++i)
	{
			int box;
			box = future[i][first_colom];
			future[i][first_colom] = future[i][second_colom];
			future[i][second_colom] = box;

	}
	// the output
	cout << "----------" << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << future[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}