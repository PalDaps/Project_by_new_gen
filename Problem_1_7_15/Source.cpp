#include <iostream>
#include <vector>
using namespace std;

//
// It is known that 8 queens can be placed on an 8x8 board 
// so that they do not beat each other. You are given an 
// arrangement of 8 queens on the board, determine if 
// there is a pair of them beating each other.
//

int main()
{
	int n = 8, c = 0, p = 0;
	vector<int> x,y;
	// the reading two vectors
	for (int i = 0; i < n; ++i)
	{
		int temp_x = 0, temp_y = 0;
		cin >> temp_x >> temp_y;
		if (temp_x == 0 || temp_x > 8 || temp_y == 0 || temp_y > 8)
		{
			cout << "NO";
			return 0;
		}
		x.push_back(temp_x);
		y.push_back(temp_y);
	}
	// the processing two vectors
	for (int i = 0; i < n; ++i)
	{
		for ( int j = 1; j < n; ++j )
		{
			if ((i != j) && (x[i] == x[j] && y[i] == y[j]))
			{
				p++;
			}
			if ((i != j) && (x[i] - y[i] == x[j] - y[j] || x[i] + y[i] == x[j] + y[j] || x[i] == x[j] || y[i] == y[j]))
			{
				c++;
			}
		}
	}
	if (c > 1 && p == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
