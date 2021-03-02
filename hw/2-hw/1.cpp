#include "iostream"
#include "string"

int sum(int *a, int size)
{
	int sum_num = *a;
	for (int i = 0;i < size; i++)
	{	
		sum_num += *(a+1);
	}
	return sum_num;
}

int main()
{	
	int massive[4] = {1,10,20,30};
	std::cout << sum(&massive[0], 4);

	return 0;
}