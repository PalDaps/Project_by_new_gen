#include <iostream>
#include <cmath>
using namespace std;
// Solve the system by Cramer's method. 
// FULL VERSION
// Tests:
//
//
//

int main()
{
	double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, x = 0, y = 0, n = 0, k = 0;
	double opred = 0, opred_x, opred_y;
	cin >> a >> b >> c >> d >> e >> f;
	opred = a * d - c * b;
	opred_x = e * d - b * f;
	opred_y = a * f - e * c;
	if (opred != 0)
	{
		x = opred_x / opred;
		y = opred_y / opred;
		cout << 2 << " " << x << " " << y;
	}
	else
	{
		if (opred_x == 0 && opred_y == 0)
		{
			if (a == 0 && b == 0 && c == 0 && d == 0)
			{
				if (e != 0 || f != 0)
				{
					cout << 0;
				}
				else
				{
					cout << 5;
				}
			}
			else
			{
				if (a == 0 && c == 0)
				{
					if (b != 0)
					{
						y = e / b;
						cout << 4 << " " << y;
					}
					else
					{
						y = f / d;
						cout << 4 << " " << y;
					}
				}
				else
				{
					if (b == 0 && d == 0)
					{
						if (a != 0)
						{
							x = e / a;
							cout << 3 << " " << x;
						}
						else
						{
							x = f / c;
							cout << 3 << " " << x;
						}
					}
					else
					{
						if (b != 0)
						{
							n = e / b;
							k = -a / b;
							cout << 1 << " " << k << " " << n;
						}
						else
						{
							n = f / d;
							k = -c / d;
							cout << 1 << " " << k << " " << n;
						}
					}
				}
			}
		}
		else
		{
			cout << 0;
		}


	}
	return 0;
}