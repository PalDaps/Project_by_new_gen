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
		return codeNumberNull;
	}
	catch (...)
	{
		return 256;
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
	if (Catching_exceptions(codeNumberNull, number_null) == 256 || Catching_exceptions(codeNumberNull, number_null) < 0 || Catching_exceptions(codeNumberNull, number_null) > 255)
	{
		std::cout << "NO";
		return 0;
	}
	indOfBegNumb = fourPosPoint[0] + 1;
	for (indOfBegNumb; indOfBegNumb < fourPosPoint[1]; indOfBegNumb++) // looking for the number up to the first point
	{
		number_one = number_one + ipAddres[indOfBegNumb];
	}
	if (Catching_exceptions(codeNumberOne, number_one) == 256 || Catching_exceptions(codeNumberOne, number_one) < 0 || Catching_exceptions(codeNumberOne, number_one) > 255)
	{
		std::cout << "NO";
		return 0;
	}
	indOfBegNumb = fourPosPoint[1] + 1;
	for (indOfBegNumb; indOfBegNumb < fourPosPoint[2]; indOfBegNumb++) // looking for the number up to the first point
	{
		number_two = number_two + ipAddres[indOfBegNumb];
	}
	if (Catching_exceptions(codeNumberTwo, number_two) == 256 || Catching_exceptions(codeNumberTwo, number_two) < 0 || Catching_exceptions(codeNumberTwo, number_two) > 255)
	{
		std::cout << "NO";
		return 0;
	}
	indOfBegNumb = fourPosPoint[2] + 1;
	for (indOfBegNumb; indOfBegNumb < ipAddres.size(); indOfBegNumb++) // looking for the number up to the first point
	{
		number_three = number_three + ipAddres[indOfBegNumb];
	}
	if (Catching_exceptions(codeNumberThree, number_three) == 256 || Catching_exceptions(codeNumberThree, number_three) < 0 || Catching_exceptions(codeNumberThree, number_three) > 255)
	{
		std::cout << "NO";
		return 0;
	}
	std::cout << "YES";
	return 0;
}