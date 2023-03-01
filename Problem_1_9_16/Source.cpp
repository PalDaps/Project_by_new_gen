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
int full_check_one(std::vector<std::vector<int>>& field, int n) // проверяем есть ли место для четвертого ферзя
{
	int counter_full_check = 0;
	for (int i = 0; i < n; i++ )
	{ 
		for (int j = 0; j < n; j++)
		{
			if (field[i][j] == 1)
			{
				counter_full_check++;
			}
		}
	}
	return counter_full_check;
}
void output_vector(std::vector<std::vector<int>>& field, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << field[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void fill_null_vec(std::vector<std::vector<int>>& field, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			field[i][j] = 0;
		}
	}
}

int main()
{
	int n = 0, counter = 0, number_of_options = 0;
	std::cin >> n;
	std::vector<std::vector<int>> field(n, std::vector<int>(n, 0));
	for (int i = 0; i < n; ++i) // put the first queen in each sell
	{
		for (int j = 0; j < n; ++j)
		{
			put_one_in_field(field, n, i, j);
			for (int ni = 2; ni <= n; ni++)
			{
				if (ni == n && full_check_one(field, n) != n * n)
				{
					put_n_queen_in_first_null(field, n, counter);
					number_of_options++;
				}// четвертый ферзь
				else if ( ni < n)
				{
					put_n_queen_in_first_null(field, n, counter);
				}
				counter = 0;
			}
			fill_null_vec(field, n); // заполняем вектор нулями для того, чтобы проверять следующую позицию
			
		}
	}
	output_vector(field, n);
	std::cout << number_of_options;
	return 0;
}