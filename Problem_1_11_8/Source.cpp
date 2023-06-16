#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>

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

std::set<std::string> InOrderLat(std::vector<std::string>& mem) {
	std::set<std::string> result;
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

std::multimap<std::string, std::vector<std::string>> LatEng(std::map<std::string, std::vector<std::string>>& result, std::set<std::string> lat) {
	std::multimap<std::string, std::vector<std::string>> LatEng;
	for (const auto& j : lat) {
		std::string key = j;
		std::vector<std::string> not_key;
		for (const auto& i : result) {
			const std::vector<std::string>& values = i.second;
			if (std::find(values.begin(), values.end(), j) != values.end()) {
				not_key.push_back(i.first);
			}
		}
		LatEng.insert(std::make_pair(key, not_key));
	}
	return LatEng;
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
	std::cin >> number_of_word;
	std::cin.ignore(1, '\n');
	for (int i = 1; i < number_of_word+1; i++) {
		std::getline(std::cin, line);
		mem.push_back(line);
	}
	/*for (const auto& i : mem)
		std::cout << i << std::endl;*/
	/*mem.push_back("apple - malum, pomum, popula");
	mem.push_back("fruit - baca, bacca, popum");
	mem.push_back("punishment - malum, multa");*/
	//std::map<std::string, std::vector<std::string>> result = splitEngLat(mem);
	//std::set<std::string> lat = InOrderLat(mem);
	//// splitLine(mem[0]);
	//
	//for (const auto& j : lat) {
	//	std::cout << j << " - ";
	//	for (const auto& i : result) {
	//		const std::vector<std::string>& values = i.second;
	//		if (std::find(values.begin(), values.end(), j) != values.end()) {
	//			std::cout << i.first << " ";
	//		}
	//	}
	//	std::cout << std::endl;
	//}
	std::map<std::string, std::vector<std::string>> result = splitEngLat(mem);
	std::set<std::string> lat = InOrderLat(mem);
	std::multimap<std::string, std::vector<std::string>> Finish = LatEng(result, lat);

	for (const auto& i : Finish) {
		std::cout << i.first << " - ";
		int counter = 0;
		for (const auto& j : i.second) {
			if (i.second.size() > 1) {
				if (counter < i.second.size() - 1) {
					std::cout << j << ", ";
					counter++;
				}
				else std::cout << j;
			}
			else
				std::cout << j << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}