

#include <iostream>
#include <iomanip>
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
            cout <<setw(3)<< arr[i][j] << " ";
        }
        cout << endl;
    }
}



// Task 4
int** add_col_start(int** arr, int rows, int &cols)
{
    int** temp = new int* [rows];

    for (int i = 0; i < rows; i++)
    {
        temp[i] = new int[cols + 1];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 1;  j < cols+1;  j++)
        {
            temp[i][j]= arr[i][j-1];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;

    for (int i = 0; i < rows; i++)
    {
        temp[i][0] = rand() % 100;
    }

    cols++;
    return temp;
}


// Task 5
int** add_col_number(int** arr, int rows, int& cols, int number)
{
    int** temp = new int* [rows];

    for (int i = 0; i < rows; i++)
    {
        temp[i] = new int[cols+1];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < number-1; j++)
        {
            temp[i][j] = arr[i][j];
        }

        for (int k = number; k <= rows+1; k++)
        {
            temp[i][k] = arr[i][k-1];
        }
    }

    
    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;

    for (int i = 0; i < rows; i++)
    {
        temp[i][number - 1] = rand() % 100;
    }

    cols++;
    return temp;
}


// Task 6
int** del_col_number(int** arr, int rows, int& cols, int number)
{
    int** temp = new int* [rows];

    for (int i = 0; i < rows; i++)
    {
        temp[i] = new int[cols - 1];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < number - 1; j++)
        {
            temp[i][j]=arr[i][j];
        }

        for (int k = number - 1; k <= rows; k++)
        {
            temp[i][k] = arr[i][k + 1];
        }
    }


    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;

    cols--;
    return temp;
}




int main()
{
    int rows = 5;
    int cols = 5;
    cout << "Enter number of rows: "; cin >> rows;
    cout << "Enter number of cols: "; cin >> cols;

    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    cout << "First arr\n";
    rand_array(arr, rows, cols);
    print_array(arr, rows, cols);


    cout << "\nTask4\n";
    arr = add_col_start(arr, rows, cols);
    print_array(arr, rows, cols);


    int number1 = 0;
    cout << "\nTask5\nEnter number of cols to add: ";
    cin >> number1;
    arr = add_col_number(arr, rows, cols, number1);
    print_array(arr, rows, cols);


    int number2 = 0;
    cout << "\nTask6\nEnter number of cols to delete: ";
    cin >> number2;
    arr = del_col_number(arr, rows, cols, number2);
    print_array(arr, rows, cols);

    for (int i = 0; i < rows; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
}
