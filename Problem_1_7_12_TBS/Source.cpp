#include<iostream>
#include<vector>
using namespace std;
// genius solution!
int main()
{
	int n = 0;
	cin >> n;
	vector<int> future(n);
	for (int i = 1; i <= n; ++i)
	{
		cin >> future[i % n];
	}
	for (auto i : future)
	{
		cout << i << " ";
	}
	return 0;
}
