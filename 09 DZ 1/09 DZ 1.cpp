

#include <iostream>
using namespace std;

void sort_up(int arr[], int size)
{
	int change;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				change = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = change;
			}
		}
	}
}

void sort_down(int arr[], int size)
{
	int change;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] < arr[j])
			{
				change = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = change;
			}
		}
	}
}

void sort(int arr[], int size, int k=1)
{
	if (k == 0)
		sort_up(arr, size);
	else
		sort_down(arr, size);
}

void print_arr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << "\t";
}


int main()
{
	const int size = 10;
	int arr[size], k;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter number " << i + 1 << " : ";
		cin >> arr[i];
	}

	print_arr(arr, size);

	cout << "\nEnter 1 to sort down or enter 0 to sort up\n";
	cin >> k;

	sort(arr, size, k);

	print_arr(arr, size);

}

