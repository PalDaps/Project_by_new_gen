#include <iostream>
#include <vector>
using namespace std;

// Cyclically shift the list items to the right
// (A[0] moves to the place of A[1], A[1] to 
// the place of A[2], ..., the last element 
// moves to the place of A[0]).
// Some tests:

int main()
{
	int n = 0;
	cin >> n;
	vector<int> future;
	// the reading
	for (int i = 0; i < n; ++i )
	{
		int temp = 0;
		cin >> temp;
		future.push_back(temp);
	}
	// the output
	cout << future[n - 1] << " ";
	for (int i = 0; i < n-1; ++i )
	{
		cout << future[i] << " ";
	}
	return 0;
}