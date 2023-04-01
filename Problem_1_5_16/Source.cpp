#include <iostream>

//
// Determine the smallest distance between two local maxima of a sequence of natural numbers ending with the number 0. If there are no two local maxima in the sequence, print the number 0.
//

int main()
{
	int n = 0, before_n = 0, max = 0, before_before_n = 0;
	int dist_max1 = 0, dist_max2 = 0, pos1 = 0, pos2 = 0, delta = 0, min = 0;
	int counter_of_max = 0, counter_of_local_max = 0;
	std::cin >> n;
	max = n;
	while (n != 0)
	{
		dist_max1++;
		if ( before_n > before_before_n && before_n > n )
		{
			counter_of_local_max++;
			counter_of_max = counter_of_local_max;
			if ( counter_of_max > 1 )
			{ 
				pos2 = dist_max1 - 1;
				delta = pos2 - pos1;
				if ( counter_of_max == 2 ) min = delta;
				if ( delta < min )
				{
					min = delta;
				}
			}
			pos1 = dist_max1 - 1;
		}
		before_before_n = before_n;
		before_n = n;
		std::cin >> n;
		// проверка на локальный максимум
		if (n > before_n)
			if ( max <= n )
			{ 
				max = n;
				if (pos1 == 0) counter_of_max = 0;
		        counter_of_max++;
			}
	}
	std::cout << min;
	return 0;
}