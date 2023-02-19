#include <iostream>
#include <cmath>

//
// Five real numbers are given: x, y, xc, yc, r. 
// visit whether point (x, y) belongs to a circle with 
// points (xc, yc) and radius r. If the point belongs to 
// the circle, print the word YES, otherwise print the word NO.
//

bool IsPointInCircle(double x, double y, double xc, double yc, double r)
{
    return pow(r, 2) >= pow((x - xc), 2) + pow((y - yc), 2);
}


int main() {
    double x = 0, y = 0, xc = 0, yc = 0, r = 0;
    std::cin >> x >> y >> xc >> yc >> r;
    if (IsPointInCircle(x, y, xc, yc, r))
    {
        std::cout << "YES";
    }
    else std::cout << "NO";
    return 0;
}