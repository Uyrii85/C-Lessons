
#include <iostream>
#include <conio.h>
using namespace std;

void test1()
{
    const int size = 10;
    int arr[size];

}

void test2()
{
    int size = 5;
    int* arr=new int[size];

}

int* create(int size)
{ 
    int* arr = new int[size];
    return arr;
}

int* add_number(int *arr, int* size, int number)
{
    (*size)++;
    int* temp = new int[*size];
    for (int i = 0; i < *size-1; i++)
    {
        temp[i] = arr[i];
    }

    temr[*size - 1] = number;
    delete[]arr;
    arr = temp;
    return arr;




}

int main()
{
    srand(time(0));
    int size = 5;
    cin >> size;
    int* arr=create(size);
    delete []arr;

    int number;
    char choice = 'y';
    while (true)
    {
        cout << "y/n\n";
        choice = _getch();
        if (choice=='n')
        {
            break;
        }
        cout << "Enter number";
            cin >> number;
            add_number();
            system("cls");
    }

    int a = 10;
    //int a = 10;
    int* pa = new int(100);
    int* pb = new int;
    int* pc = nullptr;

    *pb = 50;
   
    
    delete pc;
    pc = new int(20);
    cout << *pa << endl;
    cout << *pb << endl;
    cout << *pc << endl;

    delete pa;
    delete pb;
    delete pc;

}

