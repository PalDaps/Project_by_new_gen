#include <iostream>
#include <cmath>
using namespace std;
// Solve the system by Cramer's method. 
// If it is known that the system of linear equations 
// has exactly one solution.
//

int main()
{
	double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, x = 0, y = 0;
	double opred = 0, opred_x, opred_y;
	cin >> a >> b >> c >> d >> e >> f;
	opred = a * d - c * b;
	opred_x = e * d - b * f;
	opred_y = a * f - e * c;
	x = opred_x / opred;
	y = opred_y / opred;
	cout << x << " " << y;
	return 0;
}