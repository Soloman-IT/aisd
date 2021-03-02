#include "iostream"

int main()
{
	int mas_1[2] = {2,2};
	int mas_2[2] = {223,231};
	int *mas_3 = new int[4];
	for (int i = 0; i < 4; i++)
	{
		if (i < 2) { mas_3[i] = mas_1[i]; }
		else { mas_3[i] = mas_2[i-2];}
	}
	for (int i = 0; i < 4; i++)
	{
		std::cout <<(mas_3[i])<< std::endl;
	}
	return 0;
}