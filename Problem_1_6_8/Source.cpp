#include <iostream>
#include <cmath>
using namespace std;
// ���������� ������� �������� ���� ��������� ������������������, ������������� ������ 0. 
// �����.
// 1 7 9 0 -> 5.66666666667

int main()
{
	int vvod = 0, after = 0, sum = 0;
	cin >> vvod;
	while ( vvod != 0 )
	{
		sum = vvod + after;
		after = vvod;
		cin >> vvod;
	}
}