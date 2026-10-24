

#include <iostream>
using namespace std;

int recursion1(int a, int b)
{
    while (b >= 0)
    {
        return a * recursion1(a, b - 1);
        b--;
    }
}

//Task 2
void star(int c)
{
    cout << "*";
        c--;
    if (c<=0)
        return;
    star(c);
}

//Task 3
int sum(int d, int e)
{
    do
    {
        return d + sum(d + 1, e);
        d++;
    } 
    while (d<=e);
}


int main()
{
    /*int a, b;
    cout << "Task 1\n";
    cout << "Enter number: ";
    cin >> a;

    cout << "Enter power of number: ";
    cin >> b;
    
    cout<<recursion1(a, b);
    cout << a;*/

    cout << "\nTask 2\n";
    int a;
    cout << "Enter number of *:";
    cin >> a;
    star(a);

    cout << "\nTask 3\n";
    int c, d;
    cout << "Enter start number: ";
    cin >> c;
    cout << "Enter finish number: ";
    cin >> d;
    cout << sum(c, d);


}
