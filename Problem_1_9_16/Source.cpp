#include <iostream>
#include <vector>

//
// Given a number N. Determine in how many ways 
// there are N × N N queens on the board that do not 
// attack each other.
//
void put_one_in_field(std::vector<std::vector<int>>& field, int n, int i, int j)
{
	for (int io = 0; io < n; ++io) // 
	{
		for (int jo = 0; jo < n; ++jo)
		{
			if (i == io || j == jo || i - j == io - jo || i + j == io + jo)
				field[io][jo] = 1;
		}
	}
}

int main()
{
	int n = 0;
	std::cin >> n;
	std::vector<std::vector<int>> field(n, std::vector<int>(n, 0));
	for (int i = 0; i < n; ++i) // put the first queen in each sell
	{
		for (int j = 0; j < n; ++j)
		{
			for (int io = 0; io < n; ++io) // заполняем единичкой пространство относительно ячейки i, j
			{
				for (int jo = 0; jo < n; ++jo)
				{
					if (i == io || j == jo || i - j == io - jo || i + j == io + jo)
						field[io][jo] = 1;
				}
			}

			for (int it = 0; it < n; ++it) // после заполнения вариантов ходов первого ферзя, ищем, то место, куда поставить второго ферзя
			{
				for (int jt = 0; jt < n; ++jt)
				{
					if (field[it][jt] == 0)
					{

					}
				}
			}
			break;
		}
		break;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << field[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;

}