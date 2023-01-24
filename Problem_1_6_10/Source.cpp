#include <iostream>
#include <cmath>
#include <iomanip>
// Дан многочлен и значение x. 
// Вычислите значение этого многочлена, воспользовавшись схемой Горнера.
// Тесты.
// 
using namespace std;
int main()
{
	int n = 0, c = 0, i = 0;
	double x = 0, a = 0, form_1 = 0, form_2, next_a = 0;
	cin >> n >> x >> a;
	double pred = a;
	while ( i < n )
	{
		cin >> a;
		++i;
		form_1 = pred * x + a;
		form_2 = form_1 * x;

	}

	return 0;
}