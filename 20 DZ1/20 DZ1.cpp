

#include <iostream>
using namespace std;

int* create_arr(int size)
{
    int* arr = new int[size];
    return arr;
}

void enter_arr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        *(arr + i) = rand() % 100 - 50;
}

void print_arr(int* arr, int size)
{
    for (int i = 0; i < size; i++)
        cout<<*(arr + i)<<"\t";
    cout << endl;
}

void del_last(int* &arr, int &size)
{
    int* arr2=new int[size - 1];
    for (int i = 0; i < size-1; i++)
        arr2[i] = arr[i];
    delete []arr;
    arr = arr2;
}

void add_number(int* &arr, int &size, int number, int add)
{
    int* arr5 = new int[size+1];
    for (int i = 0; i < add; i++)
        arr5[i] = arr[i];
    arr5[add] = number;
    for (int i = add+1; i < size+1; i++)
        arr5[i] = arr[i - 1];
    delete[]arr;
    arr = arr5;
}

int main()
{
    srand(time(0));
    cout << "Task 1\n";
           
    int a;
    double b;
    long c;
   
    
    int* pa = new int(15);
    double* pb = new double(5.17);
    long* pc = new long (2545);
   

    cout <<"a="<< * pa << endl;
    cout <<"b="<< * pb << endl;
    cout <<"c="<< * pc << endl;
    cout <<"Product="<< (*pa)*(*pb)*(*pc) << endl;

    delete pa;
    delete pb;
    delete pc;


    cout << "\nTask 2\n";

    int size;
    cout << "Enter size of arr:";
    cin >> size;
    int* arr = create_arr(size);
    
    enter_arr(arr, size);
    
    print_arr(arr, size);

   
    del_last(arr, size);

    cout << "\nNew arr\n";

    print_arr(arr, size-1);

    int add;
    int number_add;

    cout << "Enter number for add:";
    cin >> number_add;

    cout << "Enter position for add:";
    cin >> add;

    add_number(arr, size, number_add, add);

    cout << "\nAdd arr\n";

    print_arr(arr, size);

    delete[]arr;
}

