

#include <iostream>
using namespace std;

int Liner_Search(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void selection_sort(int arr[], int size)
{
	int temp, index;
	for (int i = 0; i < size; i++)
	{
		index = i;
		temp = arr[i];
		for (int j=i+1;  j< size; j++)
		{
			if (arr[j]<temp)
			{
				temp = arr[j];
				index = j;
			}

			if (index!=i)
			{
				arr[index] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

void bublesort(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = size-1; j >i; j--)
		{
			if (arr[j-1]>arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}



void shakersort(int arr[], int size)
{
	int j, temp, index = size - 1;
	int left = 1, right = size - 1;
	do
	{
		for (j = right; j < left; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			index = j;
		}
		left = index + 1;

		for (j = left; j <=right; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
			index = j;
		}
		right = index - 1;

	} while (left<right);
}

int main()
{
	srand(time(0));
	const int size = 10;
	int arr[size];
	InitArray(arr, size);
		ShowArray(arr, size);
		int search_key, index_search;
		cout << "\nEnter number for search:";
		cin >> search_key;
		index_search = Liner_Search(arr, size, search_key);
		cout << index_search;
		selection_sort(arr, size);
		shakersort(arr, size);
		ShowArray(arr, size);

}
