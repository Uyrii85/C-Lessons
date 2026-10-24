

#include <iostream>
using namespace std;
void foo(int a)
{
	cout << "Hello\n";
	cout << a<<endl;
	
	a--;
	if (a<-10)
	{
		return;
	}
	foo(a);
}

int summa(int arr[], int size)
{
	int summa = 0;
}

int recursion(int arr[], int size, int index)
{
	return arr[index]+recursion(arr, size, index+1);
}

int binnarysearch(int arr[], int size, int key)
{
	int B = 0;
	E = size - 1;
	while true
	{
		int p = (B + E) / 2;
		if (key > arr[p])
			B = p + 1;
	}

}

int main()
{
	if (index==size-1)
	{
		return arr[index];
	}
	int a = 5;
	cout << foo;
	foo(a);
	const unt size = 5;
	int arr[size] = { 5,9,3,7,0 };

}

