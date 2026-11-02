// 10 DZ2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//вивід масиву
void printer(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        cout<<*(arr+i)<<" ";
     cout << endl;
}

//ініціалізація масиву
void massiv(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 - 50;
    }
}

//Task6
void changes(int* a, int* b)
{
    int c;
    c = *a;
    *a = *b;
    *b =c;
}

//Task 7
void Null(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        if (*(arr + i)<0)
        {
            *(arr + i) = 0;
        }
}

int main()
{
    srand(time(0));
    cout << "Task 3\n";
    const int size3 = 10;
    int arr3[size3];
    
    massiv(arr3, size3);

    printer(arr3, size3);
    
   int *max=&arr3[0];
   int *min=&arr3[0];

    for (int i = 1; i < size3; i++)
    {
        if (*(arr3+i)> *max)
            max = arr3+i;
        if (*(arr3+i) < *min)
            min = arr3+i;  
    }
        
    int change;
    
    change = *max;
    *max = *min;
    *min = change;

    printer(arr3, size3);

    cout << "\nTask 4\n";
    const int size4 = 10;
    int arr4[size4];

    massiv(arr4, size4);

    printer(arr4, size4);

    int change4;
    for (int i = 0; i < size4; i+=2)
    {
        change4 = *(arr4 + i);
        *(arr4 + i)= *(arr4 + i+1);
        *(arr4 + i+1)= change4;
    }
    printer(arr4, size4);


    cout << "\nTask 6\n";

    int a6, b6;
    cout << "a="; cin >> a6;
    cout << "b="; cin >> b6;
  
    changes(&a6, &b6);

    cout << "a=" << a6 << endl;
    cout << "b=" << b6 << endl;



    cout << "\nTask 7\n";
    const int size7 = 10;
    int arr7[size7];
    
    massiv(arr7, size7);

    printer(arr7, size7);

    Null(arr7, size7);

    printer(arr7, size7);
  

}

