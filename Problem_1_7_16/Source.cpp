#include <iostream>
#include <vector>
using namespace std;

// N pins were placed in one row, numbering them from left 
// to right with numbers from 1 to N. Then K balls were 
// thrown along this row, while the i-th ball knocked down 
// all the pins with numbers from li to ri inclusive. 
// Determine which pins are left standing in place.

int main()
{
	int n = 0, s = 0, temp_I = 0, temp_R = 0;
	cin >> n >> s;
	vector<char> row(n, 'I');
	vector<int> chest_I, chest_R;
	// the reading of vectors for Ni and Ri
	for (int i = 0; i < s; ++i)
	{
		int temp = 0;
		cin >> temp_I >> temp_R;
		if (temp_R > n || temp_I < 1)
		{
			return 0;
		}
		chest_I.push_back(temp_I);
		chest_R.push_back(temp_R);
	}
	// the processing of all i think
	for (int i = 0; i < s; ++i)
	{
		chest_I[i]
	}
	// the output vector of I
	for (int i = 0; i < n; ++i)
	{
		cout << row[i];
	}

	return 0;
}