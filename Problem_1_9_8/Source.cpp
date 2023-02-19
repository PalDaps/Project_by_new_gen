#include <iostream>

//
// Does the point belong to the given shaded area?
//

bool IsPointInArea(double x, double y, double xc, double yc, double r)
{
	return (y - 2*x >= 2 && y + x >= 0 && pow(x - xc, 2) + pow(y - yc, 2) <= pow(r,2)) || (pow(x - xc, 2) + pow(y - yc, 2) >= pow(r,2) && y - 2*x <= 2 && y + x <= 0);
}
int main()
{
	double x = 0, y = 0, xc = -1, yc = 1, r = 2;
	std::cin >> x >> y;
	if (IsPointInArea(x, y, xc, yc, r)) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}