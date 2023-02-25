#include <iostream>
#include <string>
 
//
// Use the entered character to determine whether it is a digit.
//

int main()
{
	std::string s = "void string";
	std::cin >> s;
	char q = s[0];
	if (q >= '0' && q <= '9') std::cout << "yes";
	else std::cout << "no";
	return 0;
}