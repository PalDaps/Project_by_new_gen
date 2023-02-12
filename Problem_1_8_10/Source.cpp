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
	int n = 0, m = 0, k = 0, c = 1, safe = 0;
	cin >> n >> m;
	if (n < 0 || m < 0 || n > 20 || m > 20)
	{
		return 0;
	}
	vector<vector<int>> future(n, vector<int>(m));
	vector<int> amount_null_in_line(n);
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
	cout << endl << c;
	cin >> k;
	// the processing 
	for (int i = 0; i < n; ++i)
	{
		int number_line = i;
		for (int j = 0; j < m; ++j)
		{
			if (future[i][j] == 0)
			{
				int first_null = j;
				int first_null_po = first_null + 1;
				for ( first_null_po; first_null_po < m; ++first_null_po)
				{
				 
					if (future[i][first_null_po - 1] == future[i][first_null_po])
					{
					 
						if ( number_line > safe )
					 
						{
							c = 0;
						}
				
					c++;
					amount_null_in_line.push_back(c); // early pusback
					safe = number_line;
					}
					else if (future[i][first_null_po - 1] != future[i][first_null_po])
					{
						
					}
				}
			}
		}
	}
	return 0;
}