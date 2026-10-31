#include <iostream>
using namespace std;

void CharVar(int a)
{
	a++;
}
void CharVar(int* a)//021a5sd
{
	(*a)++;
	cout << *a << endl;
}
int FindMax(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	else if (b > a && b > c)
		return b;
	else
		return c;
}
int* FindMax(int* a, int* b, int* c)
{
	if (*a > *b && *a > *c)
		return a;
	else if (*b > *a && *b > *c)
		return b;
	else
		return c;
}
void InitArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{

		*(arr + i) = rand() % 50;
	}
}
void ShowArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;
}
int* FindMaxInArray(int* arr, int size)
{
	int* max = &arr[0];
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > *max) {
			max = arr + i;
		}
	}
	return max;
}
int main()
{
	srand(time(0));
	const int size = 10;
	int arr[size];
	InitArray(arr, size);
	ShowArray(arr, size);

	int* max = FindMaxInArray(arr, size);
	cout << "Max element : " << *max << endl;
	*max = 1000;
	ShowArray(arr, size);

	//cout << arr << endl;
	//cout << *arr << endl;
	//cout << arr + 1 << endl;
	//cout << *(arr + 1) << endl;
	//cout << arr + 2 << endl;
	//cout << *arr + 2 << endl;





	/*
	int a = 5, b = 7, c = 22;
	cout << "a = " << a << endl;
	CharVar(a);
	cout << "a = " << a << endl;
	CharVar(&a);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	int max = FindMax(a, b, c);
	cout << "-------------Max = ----------------" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "max = " << max << endl;
	max *= 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "max = " << max << endl;
	cout << "-------------Max with pointer ----------------" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	int* pMax = FindMax(&a, &b, &c);
	*pMax *= 2;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "max = " << pMax << endl;
	cout << "max = " << *pMax << endl;
	*/
	/*
	srand(time(0));
	int a = 5;
	int b = 7;

	int* pa = &a;
	int* pb = &b;


	cout << "a = " << a << endl;
	cout << "pa = " << pa << endl;
	cout << "b = " << b << endl;
	cout << "pb = " << pb << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;

	cout << a + b << endl;
	cout << *pa + *pb << endl;

	pb = &a;
	cout << "a = " << a << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;

	*pa *= 2;
	cout << "a = " << a << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;


	const int size = 10;
	int arr[size];
	int* parr =&arr[0];

	for (int i = 0; i < size; i++)
	{
		*parr = rand() % 50;
		parr++;//a = a + 1
	}

	parr = arr;
	for (int i = 0; i < size; i++)
	{
		cout<< *parr<< " ";
		parr++;//a = a + 1
	}

	int *newPtr = arr;
	*newPtr = 0;
	newPtr += 3;
	*newPtr = 0;

	cout << endl;
	parr = arr;
	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr++;//a = a + 1
	}
	cout << endl;
	parr--;
	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr--;
	}*/

	//for (int i = 0; i < size; i++)
	//{
	//	
	//	*(parr+i )= rand() % 50;  //arr[i] = rand() % 50;
	//	//cout << arr[i] << " ";
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	cout << *(parr + i) << " ";
	//}
	//cout << endl;
	//cout << parr << endl;
	//cout << *parr << endl;
	//cout << arr[0] << endl;
	//cout << parr+1 << endl;
	//cout << *(parr+1) << endl;
	//cout << arr[1] << endl; 

	//cout << arr << endl;


}