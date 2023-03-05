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
		for (int j = 0; j < lat_words.size(); j++)
		{
			std::cin >> lat_word;
			lat_words.insert(lat_word);
		}
		dict[en_word] = lat_words;
		lat_words.clear();
	}
	for (auto it = dict.begin(); it != dict.end(); it++)
	{
		std::cout << it->first << " - ";
		int counter = 0;
		for (auto it_set = it->second.begin(); it_set != it->second.end(); it_set++)
		{
			counter++;
			std::cout << *it_set;
			if (counter != it->second.size()) std::cout << ", ";
		}
		std::cout << std::endl;
	}

	return 0;
}