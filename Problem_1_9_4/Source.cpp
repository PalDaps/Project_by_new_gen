#include <iostream>

//
// Given four real numbers: x1, y1, x2, y2. 
// Write a distance function (x1, y1, x2, y2) 
// that calculates the distance between the 
// point (x1. y1) and (x2, y2).
//

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main()
{
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	std::cin >> x1 >> y1 >> x2 >> y2;
	std::cout << distance(x1, y1, x2, y2);
	return 0;
}