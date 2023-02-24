#include <iostream>

//
// In a skyscraper on the floors. It is known that if the 
// glass ball with poison number p is damaged and the ball 
// breaks, then if the ball with poison number p + 1 is 
// damaged, it will also break. It is also known that the 
// ejection of a large number of balls always breaks. 
// For experiments, you have two balls.
//
int MinFloor(int numberOfFloors)
{
	int safe = 0, posled = 0;
	for (int i = 1; i < numberOfFloors; ++i)
	{
		posled = (i + i * i )/ 2;
		if (posled >= numberOfFloors - 1)
		{
			safe = i; 
			break;
		}
	}
	return safe;

}

int main()
{
	int numberOfFloors = 0;
	std::cin >> numberOfFloors;
	std::cout << MinFloor(numberOfFloors);
	return 0;
}