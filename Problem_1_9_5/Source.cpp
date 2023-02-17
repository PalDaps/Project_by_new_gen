#include <iostream>

//
// Two real numbers x and y are given. 
// Check whether the point with coordinates 
// (x, y) belongs to the shaded square 
// (including its border). If the point belongs 
// to a square, print the word YES, otherwise 
// print the word NO.
//
bool IsPointInSquare(double x, double y)
{
	return (x <= 1 && x >= -1) && (y <= 1 && y >= -1);
}

int main()
{
	double x = 0, y = 0;
	std::cin >> x >> y;
	if (IsPointInSquare(x, y)) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}