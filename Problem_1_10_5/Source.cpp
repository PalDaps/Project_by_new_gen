#include <iostream>
#include <string>

//
// One character is entered, change its case.
//

int main()
{
	std::string s;
	std::cin >> s;
	char a = s[0];
	int b = a;
	if (a >= 'a' && a <= 'z') std::cout << char(b - 32);
	else if (a >= 'A' && a <= 'Z') std::cout << char(b + 32);
	else std::cout << s;
	return 0;
}