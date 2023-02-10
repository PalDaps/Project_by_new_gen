#include <iostream>
#include <vector>
using namespace std;
// This is analysis of the optimized solution.
// Based on the location of the mines on the field, 
// it is necessary to place numbers in all free cells, 
// and display an “asterisk” in place of the mines.

int main()
{
	int n = 0, m = 0;
	cin >> n >> m;
	vector<vector<int>> the_field(n, vector<int>(m));
	// the reading
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> the_field[i][j];
		}
	}
	// the output
	cout << "---------" << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << the_field[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}