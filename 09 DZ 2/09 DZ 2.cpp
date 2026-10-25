

#include <iostream>
using namespace std;

int recursion1(int a, int b)
{
    if (b== 0)
    return 1;
        return a * recursion1(a, b - 1);
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
    if (d == e)
        return e;
    return d + sum(d + 1, e);
}


int main()
{
    int a, b;
    cout << "Task 1\n";
    cout << "Enter number: ";
    cin >> a;

    cout << "Enter power of number: ";
    cin >> b;
    
    cout<<a<<" in power "<<b<<" = "<<recursion1(a, b) << endl;

    cout << "\nTask 2\n";
    int c;
    cout << "Enter number of *:";
    cin >> c;
    star(c);

    cout << "\nTask 3\n";
    int d, e;
    cout << "Enter start number: ";
    cin >> d;
    cout << "Enter finish number: ";
    cin >> e;
    cout <<"Sum of numbers between "<<d<<" and "<<e<<" is "<<sum(d, e)<<endl;
}
