#include <iostream>


}
int Bin_Search_left(const int array[], int num, int len_mas)
{	
	int left = 0;
	int right = len_mas;
	int centr = 0;
	int index = 0;
	while (true)
	{	
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
		if (centr == num && array[index - 1] != num && array[index + 1] == num)
		{
			break;
		}
		if (centr == num && array[index - 1] == num)
		{
			right = index;
		}
		if (index == 0 || index == len_mas)
			break;
	}
	return index;
}
int Bin_Search_right(const int array[], int num, int len_mas)
{	
	int left = 0;
	int right = len_mas;
	int centr = 0;
	int index = 0;
	while (true)
	{	
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
		if (centr == num && array[index + 1] != num && array[index - 1] == num)
		{
			break;
		}
		if (centr == num && array[index + 1] == num)
		{
			left = index;
			continue;
		}
		if (index == 0 || index == len_mas)
			break;
	}
	return index;
}

std::pair<int, int> Task(const int array[], int num, int len_mas )
{	
	int left = Bin_Search_left(array, num, len_mas);
	int right = Bin_Search_right(array, num, len_mas);
	return  std::pair<int, int>(left, right);
}

int main()
{
	int mas[] = {0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3};
	auto p = Task(mas, 0, 20);
	std::cout << p.first << " " << p.second;
	return 0;
}