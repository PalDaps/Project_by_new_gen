#include <iostream>
#include <string>

//
// Use this line to determine whether it is a palindrome 
// (that is, it reads the same from left to right 
// and from right to left).
//

int main()
{
	std::string s;
	getline(std::cin, s);
	int counter = 0;
	int leng = s.size();
	for (int i = 0; i < (s.size() + 1) / 2; ++i)
	{
		if (s[i] == s[s.size() - i - 1])
		{
			counter++;
		}
	}
	if (counter >= (s.size() +1) / 2) std::cout << "YES";
	else std::cout << "NO";
	return 0;
}