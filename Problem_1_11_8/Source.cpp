#include <iostream>
#include <map>
#include <string>
#include <set>
#include <iterator>
#include <vector>

//
// Creating a Latin-English dictionary from English-Latin.
//

std::vector<std::string> splitLine(std::string& line) {
	std::vector<std::string> result;
	std::string temp = "";
	for (int i = 0; i < line.size(); i++) {
		if (line[i] == ' ' || line[i] == ',' || line[i] == '-') {
			if ( temp != "") result.push_back(temp);
			temp = "";
		}
		else {
			temp.push_back(line[i]);
		}
	}
	result.push_back(temp);
	return result;
}

std::multiset<std::string> InOrderLat(std::vector<std::string>& mem) {
	std::multiset<std::string> result;
	for (int i = 0; i < mem.size(); i++) {
		std::vector<std::string> oneEngLats = splitLine(mem[i]);
		for (int j = 1; j < oneEngLats.size(); j++) {
			result.insert(oneEngLats[j]);
		}
	}
	return result;
}

std::map<std::string, std::vector<std::string>> splitEngLat(std::vector<std::string>& mem) {
	std::map<std::string, std::vector<std::string>> result;

	for (int i = 0; i < mem.size(); i++) {
		std::vector<std::string> EngLat = splitLine(mem[i]);
		std::string key = EngLat[0];
		std::vector<std::string> values;
		for (int i = 1; i < EngLat.size(); i++) {
			values.push_back(EngLat[i]);
		}
		result.insert(std::make_pair(key,values));
	}
	return result;
}

int main()
{
	int number_of_word = 0;
	std::string line;
	std::multimap<int, std::string> map;
	std::vector<std::string> mem;
	/*map.insert(std::make_pair("apple", "- malum, pomum, popula"));
	map.insert(std::make_pair("fruit", "- baca, bacca, popum"));
	map.insert(std::make_pair("punishment", "- malum, multa"));
	for (const auto& i : map)
		std::cout << i.first << " " << i.second << std::endl;*/
	/*std::cin >> number_of_word;
	std::cin.ignore(1, '\n');
	for (int i = 1; i < number_of_word+1; i++) {
		std::getline(std::cin, line);
		mem.push_back(line);
	}*/
	/*for (const auto& i : mem)
		std::cout << i << std::endl;*/
	mem.push_back("apple - malum, pomum, popula");
	mem.push_back("fruit - baca, bacca, popum");
	mem.push_back("punishment - malum, multa");
	// splitLine(mem[0]);
	InOrderLat(mem);
	splitEngLat(mem);
	return 0;
}