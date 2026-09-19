// 02 Logic Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";

    int a = 5, b = 7;
    cout <<a + b<< endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
        a++;
    ++a;
    a -= 1;
    --a;
    int c = 8;
        cout << c<<endl;
        cout << a << endl;
        cout << b << endl;
        cout << (float)a / b << endl;

        bool flag = true;

        int num1, num2;
        cout << "num1="; cin >> num1;
        cout << "num2="; cin >> num2;
        

        if (num2 == 0)
        {
            cout << "no del 0";
        }

        else
        {
            int res = num1 / num2;
            cout << res;
        }

        int sum;
        cout << "sum=";

        int res;
        char key;
        cout << "key=";
        cin >> key;
        switch (key)
        {
        case'+':
            res = a + b;
            cout << res;
            break;

        case'-':
            res = a - b;
            cout << res;
            break;

        case'*':
            res = a * b;
            cout << res;
            break;

        case'/':
            res = a / b;
            cout << res;
            break;

        default:
            cout << "Error";

        }



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
