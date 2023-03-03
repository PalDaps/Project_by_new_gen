#include <iostream>
#include <map>
#include <string>

//
// You are given a dictionary consisting of pairs of words. 
// Each word is a synonym for its paired word. 
// All the words in the dictionary are different. 
// For one given word, define its synonym.
//

int main()
{
	int n = 0;
	std::string word = "", name = "";
	std::cin >> n;
	std::map <std::string, std::string> dictionary;
	for (int i = 0; i < n; ++i) // the input words in the map
	{
		std::string key = "", value = "";
		std::cin >> key >> value;
		dictionary[key] = value;
	}
	std::cin >> word;
	std::map <std::string, std::string> ::iterator it = dictionary.begin(), it2;
	it2 = dictionary.find(word);
	if (it2 != dictionary.end()) std::cout << it2->second;
	for (it; it != dictionary.end(); it++)
	{
		if (it->second == word)
		{
			std::cout << it->first;
			return 0;
		}
	}

	return 0;
}