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
	cout << "Hello its me";
	return 0;

}