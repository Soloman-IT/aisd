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
		while (i > 1) 
		{	
			if (array[i] > array[Parent(i)])
			{
				int t = array[i];
				array[i] = array[Parent(i)];
				array[Parent(i)] = t;
				i = Parent(i);
			}
			else
				break;
		}	

	}

	void SiftDown(int i)
	{
		int max_index = i;

		if (LeftChild(i) < size && array[LeftChild(i)] > array[max_index])
		{
			max_index = LeftChild(i);
		}
		
		if (RightChild(i) < size && array[RightChild(i)] > array[max_index])
		{
			max_index = RightChild(i);
		}

		
		if (max_index != i)
		{	
			int t = array[max_index];
			array[max_index] = array[i];
			array[i] = t;
			SiftDown(max_index);
		}
	}

	void Insert(int p)
	{
		if (size < max_size)
		{
			array[size] = p;

			SiftUp(size);
			size++;
		}
	}

	int ExtractMax()
	{	


		int result = array[0];
		array[0] = array[size-1];
		size--;
		SiftDown(0);
		return result;
	}

	void PrintArray()
	{
		for (int i = 0; i < size; i++)
			std::cout<<array[i] << " ";
		std::cout << std::endl;
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
		for (int i = size; size > 0; size--)
		{	
			ar[i] = heap->ExtractMax();
			std::cout <<ar[i]<<std::endl;
		}
		return array;
	}

int main()
{
	int students[6] = {200,1,5,45,86,231};
	HeadSort(students, 6);

	return 0;
}