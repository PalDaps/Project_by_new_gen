#include <iostream>
#include <vector>
using namespace std;
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
	for (int i = 0; i<n; i++)
	{
		cout << posled[i];
	}
	return 0;
}