#include <climits>
#include <cmath>
#include <math.h>
int Bin_Search_ts_2(const int array[], int num, int len_mas)  
{	
	int left = 0;
	int right = len_mas;
	int centr = 0;
	int index = 0;
	int count = 0; 
	while (true)
	{	
		if (count >= len_mas)
			return 0;
		count += 1;
		index = left + (right - left)/2;
		centr = array[index];
		if (centr > num)
		{	
			right = index;
			continue;
		}
		if (centr < num)
		{
			left = index;
			continue;
		}
		if (centr == num)
			break;
	}
	return 1;
}
int Bin_Search_ts_3(int num) 
{
	double sq_n = sqrt(num);
	int left = 0;
	int right = INT_MAX;
	int centr = 0;
	while (true)
	{	
		centr = left + (right - left)/2;
		if (abs(sq_n - centr) <= 0.5)
			break;
		if (centr > sq_n)
		{	
			right = centr;
			continue;
		}
		if (centr < sq_n)
		{
			left = centr;
			continue;
		}
	}
	return centr;
}
std::pair<int, int> Bin_Search_ts_4(const int array[], int num, int len_mas) 
{
	int left = 0;
	int centr = 0;
	int count_l = 0;
	int count_r = 0;
	int left = 0;
	int right = len_mas;
	int count = 0; 
	while (count <= len_mas)
	{	
		count += 1;
		index = left + (right - left)/2;
		centr = array[index];

		if (centr > num)
		{	
			count_l += 1;
			right = index;
			continue;
		}
		if (centr < num)
		{	
			count_r += 1;
			left = index;
			continue;
		}
	}
	return std::pair<int, int>(count_l, count_r);
}