#include <iostream>
#include <vector>
using namespace std;
//  an honest decision
int main()
{
	int n = 0;
	cin >> n;
	vector<int> future;
	// the reading
	for ( int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		future.push_back(temp);
	}
	// the processing 
	int prev = future[n - 1];
	for ( int i = 0; i < n; ++i)
	{
		int current = future[i];
		future[i] = prev;
		prev = current;

	}
	// the output
	for (auto i : future)
	{
		cout << i << " ";
	}
	return 0;
}