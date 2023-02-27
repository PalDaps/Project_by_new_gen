#include <iostream>
#include <string>
#include <vector>

//
// Write a program that determines whether a given string 
// is the correct IP address.
//
int Catching_exceptions(int codeNumberNull, std::string number_null)
{
	try
	{
		codeNumberNull = stoi(number_null);
		if (codeNumberNull != number_null.length())
			throw std::invalid_argument(number_null);
		if (codeNumberNull < 0 || codeNumberNull >255)
			throw std::out_of_range(number_null);
		return codeNumberNull;
	}
	catch (...)
	{
		std::cout << "NO";
		return 0;
	}
}


int main()
{
	int pointPosition = 0, numbOfPoints = 0, indOfBegNumb = 0;
	int codeNumberNull = 0, codeNumberOne = 0, codeNumberTwo = 0, codeNumberThree  = 0;
	std::vector<int> fourPosPoint;
	std::string ipAddres = "255.255.255.255", number_null = "", number_one = "", number_two = "", number_three = "";
	getline(std::cin, ipAddres);
	while (true) // find the number of points
	{
		pointPosition = ipAddres.find(".", pointPosition);
		if (pointPosition != -1 ) fourPosPoint.push_back(pointPosition); // memorize the positions of the four points
		if (pointPosition == -1) break;
		pointPosition++;
		numbOfPoints++;	
	}
	if (numbOfPoints != 3)
	{
		std::cout << "NO";
		return 0;
	}
	else if (fourPosPoint[0] == 0 || fourPosPoint[2] == ipAddres.size()-1)
	{
		std::cout << "NO";
		return 0;
	}
	for (indOfBegNumb; indOfBegNumb < fourPosPoint[0]; indOfBegNumb++) // looking for the number up to the first point
	{
		number_null = number_null + ipAddres[indOfBegNumb];
	}
	if (Catching_exceptions(codeNumberNull, number_null) == 0) return 0;
	indOfBegNumb = fourPosPoint[0] + 1;
	for (indOfBegNumb; indOfBegNumb < fourPosPoint[1]; indOfBegNumb++) // looking for the number up to the first point
	{
		number_one = number_one + ipAddres[indOfBegNumb];
	}
	codeNumberOne = stoi(number_one);
	if (codeNumberNull < 0 || codeNumberNull >255)
	{
		std::cout << "NO";
		return 0;
	}
	indOfBegNumb = fourPosPoint[1] + 1;
	for (indOfBegNumb; indOfBegNumb < fourPosPoint[2]; indOfBegNumb++) // looking for the number up to the first point
	{
		number_two = number_two + ipAddres[indOfBegNumb];
	}
	codeNumberTwo = stoi(number_null);
	if (codeNumberTwo < 0 || codeNumberNull >255)
	{
		std::cout << "NO";
		return 0;
	}
	indOfBegNumb = fourPosPoint[2] + 1;
	for (indOfBegNumb; indOfBegNumb < ipAddres.size(); indOfBegNumb++) // looking for the number up to the first point
	{
		number_three = number_three + ipAddres[indOfBegNumb];
	}
	codeNumberThree = stoi(number_null);
	if (codeNumberThree < 0 || codeNumberNull >255)
	{
		std::cout << "NO";
		return 0;
	}
	std::cout << codeNumberNull << " " << codeNumberOne << " " << codeNumberTwo << " " << codeNumberThree << " " << std::endl;
	std::cout << number_null << " " << number_one << " " << number_two << " " << number_three << std::endl;
	std::cout << numbOfPoints;
	return 0;
}