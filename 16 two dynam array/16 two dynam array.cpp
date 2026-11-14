

#include <iostream>
using namespace std;

void initial_array(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand()%100;
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
        arr[i] = rand()%10;
    }
}

int** add_row_start(int** arr, int &rows, int cols)
{
    int** temp = new int* [rows + 1];
  
    for (int i = 1; i < rows+1; i++)
    {
        temp[i] = arr[i-1];
    }
    
    temp[0] = new int[cols];
    
    add_row(temp[0], cols);
    delete []arr[rows+1];
    delete []arr;
    arr = temp;
    rows++;
    return arr;
}

int** delete_row_end(int** arr, int rows, int cols)
{
    int** temp = new int* [rows - 1];
    for (int i = 0; i < rows - 1; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr[rows - 1];
    delete[]arr;
    rows--;
    return temp;
}

int** add_row_end(int** arr, int rows, int cols)
{
    int** temp = new int* [rows+1];
    for (int i = 1; i < rows+1; i++)
    {
        temp[i] = arr[i-1];
    }
    delete[] arr[rows +1];
    delete[]arr;
    rows++;
    return temp;
}

int main()
{

    int rows = 5;
    int cols = 6;

    cout << "Enter rows:"; cin >> rows;
    cout << "Enter cols:"; cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    
    
    initial_array(arr, rows, cols);
    print_array(arr, rows, cols);

    arr=add_row_start(arr, rows, cols);
    print_array(arr, rows, cols);



    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }
    
    
    delete[]arr;

}

