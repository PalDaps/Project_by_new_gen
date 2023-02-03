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
	int n = 8;
	vector<int> x;
	vector<int> y;
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		x.push_back(temp);
		cin >> temp;
		y.push_back(temp);
	}
	return 0;
}
