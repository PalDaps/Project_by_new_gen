#include <iostream>
#include <map>
#include <string>
#include <set>
#include <iterator>

//
// Creating a Latin-English dictionary from English-Latin.
//

int main()
{
	int n = 0;
	std::string word = "";
	std::cin >> n;
	std::set <std::string> lat_words;
	std::map <std::string, std::set<std::string>> dict;
	std::map<std::string, std::set<std::string>>::iterator it;
	std::set<std::string> ::iterator it_set;
	for (int i = 0; i < n; i++) // the input in dict
	{
		std::string en_word = "", lat_word = "";
		std::cin >> en_word;
		for (int j = 0; j < 2; j++)
		{
			std::cin >> lat_word;
			lat_words.insert(lat_word);
		}
		dict[en_word] = lat_words;
	}
	it = dict.begin();
	it_set = lat_words.begin();
	for (auto now : dict )
	{
		std::cout << now.first << " - ";
		int count = 1;
		for (auto some : now.second)
		{
			std::cout << some;
			count++;
			if (count != now.second.size() + 1) std::cout << ", ";
		}
		std::cout << std::endl;
	}

	return 0;
}