#include <iostream>
#include <string>
#include <vector>

//
// Find the longest word in this line and output it.
//

int main()
{
	std::string s;
	std::vector<int> length_of_each_word;
	std::vector<int> first_index_of_word;
	getline(std::cin, s);
	int counter = 0, safe_index = 0;
	for (int i = 0; i <= s.size() - 1; ++i)
	{
		counter++;
		safe_index = i;
		if (s[i] == ' ')
		{ 
			first_index_of_word.push_back( i + 1 - counter);
			length_of_each_word.push_back(counter-1);
			counter = 0;
		}
	} 
	length_of_each_word.push_back(counter);
	first_index_of_word.push_back(safe_index - counter + 1);
	int num_max = 0;
	for (int i = 0; i < length_of_each_word.size(); ++i)
	{
		if (length_of_each_word[i] > length_of_each_word[num_max])
		{
			num_max = i;
		}
	}
	int woy = first_index_of_word[num_max];
	for (int i = woy; i < s.size(); ++i)
	{
		if (s[i] == ' ')
		{
			break;
		} 
		std::cout << s[i];
	}
	return 0;
}