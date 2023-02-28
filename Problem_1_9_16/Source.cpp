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
void put_n_queen_in_first_null(std::vector<std::vector<int>>& field, int n, int counter)
{
	for (int ith = 0; ith < n; ++ith) // ищем позицию для третьего ферзя
	{
		for (int jth = 0; jth < n; ++jth)
		{
			if (field[ith][jth] == 0 && counter < 1)
			{
				counter++; // чтобы находило только первый 0
				put_one_in_field(field, n, ith, jth);
			}
		}
	}
}

int main()
{
	int n = 0, counter = 0;
	std::cin >> n;
	std::vector<std::vector<int>> field(n, std::vector<int>(n, 0));
	for (int i = 0; i < n; ++i) // put the first queen in each sell
	{
		for (int j = 0; j < n; ++j)
		{
			put_one_in_field(field, n, i, j);
			for (int it = 0; it < n; ++it) // после заполнения вариантов ходов первого ферзя, ищем, то место, куда поставить второго ферзя
			{
				for (int jt = 0; jt < n; ++jt)
				{
					if (field[it][jt] == 0 && counter < 1)
					{
						counter++; // чтобы находило только первый 0
						put_one_in_field(field, n, it, jt);
					}
				}
			}
			counter = 0;
			for (int ith = 0; ith < n; ++ith) // ищем позицию для третьего ферзя
			{
				for (int jth = 0; jth < n; ++jth)
				{
					if (field[ith][jth] == 0 && counter < 1)
					{
						counter++; // чтобы находило только первый 0
						put_one_in_field(field, n, ith, jth);
					}
				}
			}
			counter = 0;
			for (int ifo = 0; ifo < n; ++ifo) // ищем позицию для четвертого ферзя
			{
				for (int jfo = 0; jfo < n; ++jfo)
				{
					if (field[jfo][jfo] == 0 && counter < 1)
					{
						counter++; // чтобы находило только первый 0
						put_one_in_field(field, n, ifo, jfo);
					}
					break;
				}
				break;
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