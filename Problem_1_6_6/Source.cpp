#include <iostream>
#include <cmath>
using namespace std;
// Процентная ставка по вкладу составляет P процентов годовых, 
// которые прибавляются к сумме вклада в конце года. 
// Вклад составляет X рублей Y копеек. Определите размер вклада через год.
// Программа должна вывести два числа : величину вклада через год в рублях 
// и копейках.Дробная часть копеек отбрасывается.
// Данная задача хорошо демоснтрирует соприкосновение различных типо данных.
// Тесты.
// 12 179 90 -> 201 48
// 14 25 69 -> 29 28
// 13 179 0 -> 202 27
int main()
{
	int p = 0, x = 0, y = 0, rubl_incop = 0, sumkop = 0, sumkop_with_proc = 0, rubl = 0, kop = 0;
	double sum_incop_proc = 0;
	cin >> p >> x >> y;
	rubl_incop = 100 * x;
	sumkop = rubl_incop + y;
	sum_incop_proc = sumkop * p / 100; // преоразование int в тип double (безопасно по Страуструп Б.)
	sumkop_with_proc = sum_incop_proc + sumkop; // преобразование double в int (опасно ппц)
	kop = sumkop_with_proc % 100;
	rubl = (sumkop_with_proc - kop) / 100;
	cout << rubl << " " << kop << endl << "New step for my view";
	return 0;
	
}