#include <iostream>
#include <cmath>
#include <iomanip>
// ��� ��������� � �������� x. 
// ��������� �������� ����� ����������, ���������������� ������ �������.
// �����.
// 
using namespace std;
int main()
{
	int n = 0, c = 0, i = 0;
	double x = 0, a = 0, form_1 = 0, form_2 = 0, next_a = 0;
	cin >> n >> x >> a;
	form_1 = a;
	while ( i < n )
	{
		cin >> a;
		++i;
		form_2 = form_1 + a;
		form_1 = (form_1 * x + a) * x;
		
	}
	cout << form_2;
	return 0;
}