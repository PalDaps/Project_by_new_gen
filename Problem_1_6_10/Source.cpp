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
	cout << setprecision(2) << fixed;
	if ( n != 0 ) 
	{ 
		form_1 = a;
		while ( i < n )
		{
		cin >> a;
		++i;
		form_1 = form_1 * x + a;
		}
		if ( n == 1 )
		{
		cout << form_1;
	    }
	    else
	    {
		cout << form_1;
	    }
	}
	else if (n == 0)
	{
		cout << a;
	}
	return 0;
}