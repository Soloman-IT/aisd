#include <iostream>
#include "bin_s.h"

bool Check(const int mas[3][3], int num, int len_str, int len_stolb)
{
	for (int i = 0; i < len_str; i++)
	{
		if (Bin_Search_ts_2(mas[i], num, len_stolb))
			return 1;
		
	}
	return 0;
}

int main()
{
	int mas[3][3] = 
	{
		{1,3,4},
		{6,8,10},
		{45,67,68}
	};
	if (Check(mas, 11, 3, 3))
		std::cout <<"have";
	else 
		std::cout << "no have";
	return 0;
}