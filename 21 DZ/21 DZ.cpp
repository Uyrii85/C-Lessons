

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
            cout << arr[i][j] << " ";
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

//Task 1
int** add_row_start(int** arr, int &rows, int cols)
{
    int** temp = new int* [rows + 1];

    temp[0] = new int[cols];

    add_row(temp[0], cols);

    for (int i = 1; i < rows + 1; i++)
    {
        temp[i] = arr[i - 1];
    }
    
    delete[]arr;
    arr = temp;
    rows++;
    return arr;
}

//Task 2
int** delete_row_start(int** arr, int &rows, int cols)
{
    int** temp = new int* [rows - 1];
    for (int i = 0; i < rows - 1; i++)
    {
        temp[i] = arr[i+1];
    }
    delete[] arr[0];
    delete[]arr;
    rows--;
    arr = temp;
    return arr;
}

//Task 3
int** delete_row_number(int** arr, int& rows, int cols, int number)
{
    int** temp = new int* [rows - 1];
    for (int i = 0; i < number-1; i++)
    {
        temp[i] = arr[i];
    }

    temp[number-1] = arr[number];

    for (int i = number; i < rows-1; i++)
    {
        temp[i] = arr[i+1];
    }


    delete[] arr[number-1];
    delete[]arr;
    rows--;
    arr = temp;
    return arr;
}

int main()
{
  
    int rows=5;
    int cols=5;
    cout << "Enter number of rows: "; cin>> rows;
    cout << "Enter number of cols: "; cin>> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    cout << "First arr\n";
    rand_array(arr, rows, cols);
    print_array(arr, rows, cols);


    cout << "\nTask1\n";
    arr = add_row_start(arr, rows, cols);
    print_array(arr, rows, cols);


    cout << "\nTask2\n";
    arr = delete_row_start(arr, rows, cols);
    print_array(arr, rows, cols);


    int number = 5;
    cout << "\nTask3\nEnter nunber of rows to dell:";
    cin >> number;
    
    arr = delete_row_number(arr, rows, cols, number);
    print_array(arr, rows, cols);
   

    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }
    delete []arr;

}

