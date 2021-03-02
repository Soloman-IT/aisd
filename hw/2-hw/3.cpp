#include "iostream"

void sort(int *a, int size)
{	while (1)
	{	
		int count = 0;

		for (int i = 0; i < size; i++)
		{
			if (*a > *(a+1)) 
			{
				int t = *(a);
				*(a) = *(a+1);
				*(a+1) = t;
				count ++;
			}
		}
		if (count == 0) {break;}
		
	
	}

}
int main()
{
	int mas[3]= {2,1,4};
	int *p = mas;
	sort(p, 3);
	for (int i = 0; i < 3; i++)
	{
		std::cout << mas[i] << std::endl;
	}
}