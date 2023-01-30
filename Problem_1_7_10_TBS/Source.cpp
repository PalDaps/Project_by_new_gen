#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n = 0, c = 0, b = 0;
	bool g = true;
	cin >> n;
	vector<int> pepega;
	// the processing
	for (int i = 0; i < n; ++i)
	{
		int temp = 0;
		cin >> temp;
		for (int i = 0; i < pepega.size(); ++i)
		{
			if (pepega[i] == temp)
			{
				g = false;
			}
			else
			{
				g = true;
			}
		}
		if (g) pepega.push_back(temp);	
	}
	cout << pepega.size();
}