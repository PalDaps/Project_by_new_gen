#include <iostream>
#include <cmath>
using namespace std;
// Step by step
// Решение любого квадратного уравнения в действительных числах!
// ax^2 + bx + c = 0, a != 0.
// Тесты.
//
int main()
{
	double a = 1, b = 0, c = 0, d = 0, x = 0, x1 =0, x2 = 0;
	if ( cin >> a && a != 0 )
	{ 
		cin >> b >> c;
		d = pow(b, 2) - 4 * a * c;
		if (d == 0)
		{
			x = -b / (2 * a);
			cout << x;
		}
		else if (d > 0)
		{
			x1 = -b / (2 * a) - sqrt(d) / (2 * a);
			x2 = -b / (2 * a) + sqrt(d) / (2 * a);
			if (x1 > x2)
			{
				cout << x2 << " " << x1;
			}
			else
			{
				cout << x1 << " " << x2;
			}
		}

	}
	return 0;
}