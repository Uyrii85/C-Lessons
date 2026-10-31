

#include <iostream>
using namespace std;

//void InitArray(int* arr, int)

int main()
{
	srand(time(0));
	int a = 5;
	int b = 7;

	int* pa = &a;
	int* pb = &b;

	cout << "A=" << a << endl;
	cout << "B=" << a << endl;
	cout << "pA=" << pa << endl;
	cout << "pB=" << pb << endl;
	cout << "*pA=" << *pa << endl;
	cout << "*pB=" << *pb << endl;

	cout << a + b << endl;
	cout << *pa + *pb << endl;

	//*pb = &pa;
	cout << "a=" << a << endl;
	cout << "pa=" << *pa << endl;
	cout << "pb=" << *pb << endl;

	const int size = 10;
	int arr[size];
	int* parr = &arr[0];


	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << endl;
		*parr = rand() % 50;
		cout<<arr[i] << " ";
	}
}


