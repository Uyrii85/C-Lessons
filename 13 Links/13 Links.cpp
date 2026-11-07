

#include <iostream>
using namespace std;

#define month 12 

void change(int &a)
{
   a++;
}

int find(int& a, int& b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}


int main()
{
    int a = 10;
    int b = 15;
    int* pa = &a;
    cout << a << endl;
    cout << pa << endl;
    cout << *pa << endl;
    int& la = a;
    cout <<la+la<< endl;

    change(a);
    cout << a << endl;

}
