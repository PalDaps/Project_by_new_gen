#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
// Determine the standard deviation for a given sequence of natural numbers ending with the number 0.
// 1 7 9 0 -> 4.16333199893

int main()
{
	int vvod = 0, after = 0, sum = 0, counter = 0, sum_sq = 0;
	double average_v = 0, chislit = 0, znamenat = 0, drob = 0, sq_drob = 0;
	double sum_d = 0;
	double counter_d = 0; 
	double vvod_d = 0;
	cout << setprecision(11) << fixed;
	cin >> vvod;
	while (vvod != 0)
	{
		sum = vvod + sum;
		sum_sq = pow(vvod, 2) + sum_sq;
		++counter;
		cin >> vvod;
	}
	sum_d = sum;
	counter_d = counter;
	vvod_d = vvod;
	average_v = sum_d / counter_d;
	chislit = sum_sq - counter_d * pow(average_v, 2);
	znamenat = counter_d - 1;
	drob = chislit / znamenat;
	sq_drob = sqrt(drob);
	cout << sq_drob;
	return 0;
}
