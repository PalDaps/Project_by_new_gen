#include <iostream>
#include <cmath>
using namespace std;
// ���������� ������ �� ������ ���������� P ��������� �������, 
// ������� ������������ � ����� ������ � ����� ����. 
// ����� ���������� X ������ Y ������. ���������� ������ ������ ����� ���.
// ��������� ������ ������� ��� ����� : �������� ������ ����� ��� � ������ 
// � ��������.������� ����� ������ �������������.
// ������ ������ ������ ������������� ��������������� ��������� ���� ������.
// �����.
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
	sum_incop_proc = sumkop * p / 100; // ������������� int � ��� double (��������� �� ���������� �.)
	sumkop_with_proc = sum_incop_proc + sumkop; // �������������� double � int (������ ���)
	kop = sumkop_with_proc % 100;
	rubl = (sumkop_with_proc - kop) / 100;
	cout << rubl << " " << kop << endl << "New step for my view";
	return 0;
	
}