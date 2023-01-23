#include <iostream>
#include <iomanip>
// Определите среднее значение всех элементов последовательности, завершающейся числом 0.
// setprecision(11) используется
using namespace std;
int main()
{
	int vvod = 0, after = 0, sum = 0, counter = 0;
	double average_v = 0;
	double sum_d = 0;
	double counter_d = 0;
	cin >> vvod;
	while (vvod != 0)
	{
		sum = vvod + after;
		after = sum;
		++counter;
		cin >> vvod;
	}
	sum_d = sum;
	counter_d = counter;
	average_v = sum_d / counter_d;
	cout << setprecision(11) << fixed;
	cout << average_v;
	return 0;
}