#include <iostream>
#include <vector>

using namespace std;

// The two-dimensional vector stores information about 
// sold tickets, the number 1 means that the ticket for 
// this seat has already been sold, the number 0 means 
// that the seat is free. A request has been received to 
// sell k tickets for adjacent seats in the same row. 
// Determine whether such a request can be fulfilled.

int main()
{
	int n = 0, m = 0, k = 0, c = 0, safe = 0;
	cin >> n >> m;
	if (n < 0 || m < 0 || n > 20 || m > 20)
	{
		return 0;
	}
	vector<vector<int>> future(n, vector<int>(m));
	vector<int> amount_null_in_line;
	// the reading
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> future[i][j];
		}
	}
	// the ouput
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << future[i][j] << " ";
		}
		cout << endl;
	}
	cin >> k;
	// the processing 
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (future[i][j] == 0)
			{
				c++;
				if (c == k)
				{
					amount_null_in_line.push_back(i);
				}
			}
			else
			{
				c = 0;
			}
		}
		c = 0;
	}
	if (amount_null_in_line.size() > 0)
	{
		cout << amount_null_in_line[0] + 1 << " ";
	}
	else
	{
		cout << 0;
	}
	return 0;
}