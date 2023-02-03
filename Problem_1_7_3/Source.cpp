#include <iostream>
#include <vector>
using namespace std;

// Output all elements of the vector with even indexes

int main()
{
	int n = 0;
	cin >> n;
	vector<int> posled(n);
	// the vector reading
	for (int i = 0 ; i < n ; i++)
	{
		cin >> posled[i];
	}
	// processing the vector
	for (int i = 0; i<n; i+=2)
	{
		cout << " " << posled[i];
	}
	return 0;
}
