#include <iostream>

//
// Given a real positive number a and an integer n.
// Calculate a to the power of n.Formalize the solution 
// in the form of a recursive function power(a, n).
//
double pow(double a, int n)
{
    double pow_1 = a;
    if (n > 0)
    {
        for (int i = 1; i < n; ++i)
        {
            pow_1 = a * pow_1;
        }
        return pow_1;
    }
    else if (n == 0) return 1;
    else return 1 / (pow(a, abs(n)));
}
int main()
{
    int n = 0;
    double a = 0;
    std::cin >> a >> n;
    std::cout << pow(a,n);
    return 0;
}
