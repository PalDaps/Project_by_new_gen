#include <iostream>
#include <vector>
// Rearrange the adjacent elements of the vector 
// (A[0] c A[1], A[2] c A[3], etc.). 
// If there are an odd number of elements, 
// then the last element remains in its place.
// Some tests:

using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	vector<int> future;
	// the reading
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		future.push_back(temp);
	}
	int safe = future.size();
	if (future.size() % 2 == 0)
	{
		future.push_back(1);
		n = future.size();
	}
	for (int i = 2; i < n; i+=2)
	{
		int box = future[i-2];
		future[i-2] = future[i-1];
		future[i-1] = box;
	}
	if (safe % 2 == 0)
	{
		future.erase(future.end() - 1);
		n = future.size();
	}
	for (int i = 0; i < n; ++i)
	{
		cout << future[i] << " ";
	}

	return 0;
}
