// 10 DZ2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printer(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout<<*(arr+i)<<" ";
     cout << endl;
}

int main()
{
    srand(time(0));
    cout << "Task 3\n";
    const int size3 = 10;
    int arr3[size3];
    int *parr3 = &arr3;
  
    for (int i = 0; i < size3; i++)
    {
        *parr3 = rand()%100 - 50;
        parr3++;
    }

    printer(*parr3, size3);
    int max;
    int *pmax = &max;
    int *pmin=&min;

    for (int i = 0; i < size3; i++)
    {
        cout << *parr << " ";
        if (*parr>*pmax)
            *pmax = *parr;
        if (*parr < *pmin)
            *pmin = *parr;  
    }
    
    int change;
    int* pchange = &s;

    *change = *pmax;
    *pmax = *pmin;
    *pmin = *change;

    printer(*parr[size], size);



}

