
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    cout << "Task 1\n";
    int a, b, c;
    cout << "Enter 1 number:"; cin >> a;
    cout << "Enter 2 number:"; cin >> b;
    cout << "Enter 3 number:"; cin >> c;

    int *pa = &a;
    int *pb = &b;
    int *pc = &c;

    cout << "a=" << *pa << endl;
    cout << "b=" << *pb << endl;
    cout << "c=" << *pc << endl;
    cout << "Product of numbers = " << *pa*(*pb)*(*pc) << endl;
    cout << "Arithmetic mean of numbers = " << (*pa+(*pb)+(*pc))/3 << endl;
    int min;
    int *pmin = &min;
    if (*pa<*pb and *pa<*pc)
       *pmin = *pa;
    else
    {
        if (*pb<*pc)
            *pmin = *pb;
        else
            *pmin = *pc;
    }
  
    cout << "Min number = " << *pmin<< endl;

    cout << "\nTask 2\n";

    const int size = 10;
    int arr[size];
    int sum = 0;
    int *parr = &arr[0];
    int *psum = &sum;

    for (int i = 0; i < size; i++)
    {
        *parr = rand() % 100 - 50;
        *psum += *parr;
        parr++;
    }

    parr = arr;

    for (int i = 0; i < size; i++)
    {
        cout<<*parr<<" ";
        parr++;
    }
    cout << endl;


    for (int i = 0; i < size; i++)
    {
        parr--;
        cout << *parr << " ";
    
    }
    
    cout << "\nSum = " << *psum << endl;

}