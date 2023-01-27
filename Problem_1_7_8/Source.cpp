#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	int n = 0, c = 0, time = 0, b = 0, safe = 0, min_of = 0;
	int last = 0;
	cin >> n;
	vector<int> pepega;
	// The reading
	for (int i = 0; i < n; ++i)
	{
		cin >> time;
		if (time > 0)
		{
			if ( time < last )
			{ 
			c = min(time, last);
			}
			if (time > last)
			{
			b = min(time, last);
			if (b > safe) // нужно ставить меньше так как не работает если увеличивать ввод послед
			{
				min_of = safe;
			}
			safe = b;
			}
			last = time;
		}
		pepega.push_back(time);
		
	}
	// the processing
	for (int i = 0; i < n; ++i)
	{

	}
	cout << c;
	return 0;
}