#include <iostream>
#include <string>

//
// Translate the character to uppercase.
//

int main()
{
	std::string s;
	char a = s[0], b;
	std::cin >> s;
	a = s[0];
	int c = a;
	if (a >= 'a' && a <= 'z') std::cout << char(c - 32);
	else std::cout << s;
 	return 0;
}