#include "iostream"

int Parent(int i) { return ((i - 1) / 2); }
int LeftChild(int i) { return (2 * i + 1); }
int RightChild(int i) { return (2 * i + 2); }

struct MaxHeap
{
	int * array;
	int size;
	int max_size;

	void SiftUp(int i)
	{	
		while (i > 0) 
		{	
			if (array[i] > array[Parent(i)])
			{
				int t = array[i];
				array[i] = array[Parent(i)];
				array[Parent(i)] = t;
				//std::cout << array[i]<<std::endl;
				i = Parent(i);
			}
			else
				break;
		}	
			// count += 1;
			// int k = 0;
			// std::cout <<"!!"<<std::endl;
			// for (int k =0; k < count;k++)
			// {
			// 	std::cout << array[k]<<std::endl;
			// }
			// std::cout <<"!!"<<std::endl;
	}

	void SiftDown(int i)
	{
		int max_index = i;

		if (LeftChild(i) < max_size && array[LeftChild(i)] > array[i])
		{
			max_index = LeftChild(i);
		}
		
		if (RightChild(i) < max_size && array[RightChild(i)] > array[i])
		{
			max_index = RightChild(i);
		}
		
		if (max_index != i)
		{	
		//	std::cout << array[max_index] <<std::endl;
			array[max_index] = array[i];
			array[i] = array[max_index];
			i = max_index;
			SiftDown(max_index);
		}

	}

	void Insert(int p)
	{
		if (size < max_size)
		{
			array[size] = p;

			//std::cout << p << std::endl;
			SiftUp(size);
			size++;
		}
	}

	int ExtractMax()
	{	
		int result = array[0];
		//std::cout <<array[0]<<std::endl;
		//std::cout <<array[size]<<std::endl;
		array[0] = array[size-1];

		size--;
		SiftDown(0);
		return result;
	}

	int GetMax()
	{
		return array[0];
	}

};



	int * HeadSort(int * array, int size)
	{	
		MaxHeap * heap = new MaxHeap;
		int ar[size];
		heap->array = ar;
		heap->size = 0;
		heap->max_size = size;

		for (int i = 0; i < size; i++)
		{
			heap->Insert(array[i]);
		}
		for (int i = size; size >= 0; size--)
		{	
			ar[i] = heap->ExtractMax();
			std::cout <<ar[i]<<std::endl;
		}
		return array;
	}



int main()
{
	int students[6] = {1,2,3,4,5,6};
	HeadSort(students, 6);
	// while (i!=0)
	// {
	// 	std::cout <<a[i]<<std:end;
	// 	i++; 
	// }

	return 0;
}