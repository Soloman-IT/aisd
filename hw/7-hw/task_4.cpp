#include <iostream>

int Search_Mediana(const int mas[4][4], int num, int len_str, int len_stolb)
{
	int count_l = 0;
	int count_r = 0;
	for (int i = 0; i < len_str; i++)
	{
		auto p = Bin_Search_ts_4(mas[i], num, len_stolb);
		if (p.first == p.second)
			return 1;
	}
	return 0;
}
int main()
{
	int mas[4][4] =
	{
		{4,6,8,9},
		{1,4,5,6},
		{2,4,7,10},
		{3,6,8,12}
	};
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (Search_Mediana(mas, mas[i][j], 4, 4))
				return mas[i][j];
		}
	}
	return 0;
}