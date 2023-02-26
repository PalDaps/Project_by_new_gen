#include <iostream>
#include <string>
#include <vector>

//
// Write a program that determines whether a given string 
// is the correct IP address.
//

int main()
{
	int pointPosition = 0, numbOfPoints = 0, indOfBegNumb = 0;
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
	for (indOfBegNumb; indOfBegNumb < fourPosPoint[0]; indOfBegNumb++) // looking for the number up to the first point
	{
		number_null = number_null + ipAddres[indOfBegNumb];
	}
	indOfBegNumb = fourPosPoint[0] + 1;
	for (indOfBegNumb; indOfBegNumb < fourPosPoint[1]; indOfBegNumb++) // looking for the number up to the first point
	{
		number_one = number_one + ipAddres[indOfBegNumb];
	}
	indOfBegNumb = fourPosPoint[1] + 1;
	for (indOfBegNumb; indOfBegNumb < fourPosPoint[2]; indOfBegNumb++) // looking for the number up to the first point
	{
		number_two = number_two + ipAddres[indOfBegNumb];
	}
	indOfBegNumb = fourPosPoint[2] + 1;
	for (indOfBegNumb; indOfBegNumb < ipAddres.size(); indOfBegNumb++) // looking for the number up to the first point
	{
		number_three = number_three + ipAddres[indOfBegNumb];
	}
	int codeNumberNull, codeNumberOne, codeNumberTwo, codeNumberThree;
	codeNumberNull = stoi(number_null);
	codeNumberOne = stoi(number_one);
	codeNumberTwo = stoi(number_two);
	codeNumberThree = stoi(number_three);
	std::cout << codeNumberNull << " " << codeNumberOne << " " << codeNumberTwo << " " << codeNumberThree << " " << std::endl;
	std::cout << number_null << " " << number_one << " " << number_two << " " << number_three << std::endl;
	std::cout << numbOfPoints;
	return 0;
}