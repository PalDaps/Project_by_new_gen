#include <iostream>
#include <string>

//
// A string containing spaces is given. 
// Find how many words there are in it 
// (a word is a sequence of non–blank characters, 
// words are separated by one space, the first and 
// last characters of the string are not spaces).
//

int main()
{
	std::string s;
	int n = 0, b = 0, counter = 0;
	getline(std::cin, s);
	int x = s.size();
	while ( n < x )
	{
		n = s.find(" ", n + 1);
		counter++;
		if (n == -1)
		{
			break;
		}
	}
	std::cout << counter;
	return 0;
}