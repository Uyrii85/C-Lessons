
#include <iostream>
using namespace std;


void rand_array(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}

void print_array(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }
}


void add_row(int* arr, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        arr[i] = rand() % 100;
    }
}


int main()

{
    int rows = 5;
    int cols = 5;
    cout <<"Enter number of rows: "; 
    cin>>rows;
    cout << "Enter number of cols: "; 
    cin>>cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    rand_array(arr, rows, cols);
    print_array(arr, rows, cols);




    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }
    delete arr[];
}
