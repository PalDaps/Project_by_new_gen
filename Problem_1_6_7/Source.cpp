#include <iostream>
#include <cmath>
using namespace std;
// ���������� ������ �� ������ ���������� P ��������� �������, ������� ������������ 
// � ����� ������ ����� ���.����� ���������� X ������ Y ������.���������� ������ ������ 
// ����� K ���. ��������� ������ ������� ��� ����� : �������� ������ ����� K ��� � ������ 
// � ��������.������� ����� ������ �� ��������� ���� �������������.
// ���������� ����� ������ (� ������������� ������� ������ ������) ���������� ��������.
// �����.
// 12 179 0 5 -> 315 43
//
//
int main()
{
	double p = 0, x = 0, y = 0, k = 0, rubl_incop = 0, sumkop = 0, sumkop_with_proc = 0, rubl = 0, kop = 0;
	double perem = 0;
	double proc = 0;
	int i = 0;
	cin >> p >> x >> y >> k;
	rubl_incop = 100 * x;
	sumkop = rubl_incop + y;
	proc = p / 100;
	while ( i < k )
	{ 
		perem = sumkop * proc + sumkop;
		sumkop = perem;
	    ++i;
	}
	cout << perem;
	return 0;

}