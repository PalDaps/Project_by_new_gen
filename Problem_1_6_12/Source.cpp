#include <iostream>
using namespace std;
int main()
{
	double a = 0, b = 0, c = 0, d = 0, x = 0, x1 = 0, x2 = 0, y = 0;
		cin >> a >> b >> c;
		if ( ( a == 0 && b == 0 && c == 0 ) || ( a == 0 && b == 0 ) )
		{
			cout << 3;
		}
		else if ( a == 0 && b != 0)
		{
			y = -c / b;
			cout << 1 << " " << y;
		}
		d = pow(b, 2) - 4 * a * c;
		if (d == 0 && a != 0 && b !=0 && c != 0)
		{
			x = -b / (2 * a);
			cout << 1 << " " << x;
		}
		else if (d > 0)
		{
			x1 = -b / (2 * a) - sqrt(d) / (2 * a);
			x2 = -b / (2 * a) + sqrt(d) / (2 * a);
			if (x1 > x2)
			{
				cout << 2 << " " << x2 << " " << x1;
			}
			else
			{
				cout << 2 << " " << x1 << " " << x2;
			}
		}
		else if ( d < 0 )
		{
			cout << 0;
		}
	return 0;
}