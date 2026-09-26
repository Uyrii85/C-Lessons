// 03 EnumCycles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
   // cout << "Hello World!\n";
   ///* const int USA = 1;
   // const int Ukraine = 3;
   // const int France = 33;
   // const int Italy = 61;*/

   // enum countries {USA=1, Ukraine=38, France = 33};
   // cout << Ukraine<<endl;
   // 
   // 
   // enum coins {penny=1, nickel=5, dime=10, quarter=25, half=50, dollar_coin=100};
   //     coins c;
   //     int coins;
   //     cin >> coins;

   //     switch (coins)
   //     {
   //         case penny: cout << "penny=1 coin" << endl; break;
   //             case nickel: cout << "penny=1 coin" << endl; break;
   //                 case dime: cout << "penny=1 coin" << endl; break;
   //                     case quarter: cout << "penny=1 coin" << endl; break;
   //                         case half: cout << "half=50 coin" << endl; break;
   //                             case dollar_coin: cout << "penny=1 coin" << endl; break;
   //                             default: cout << "Error" << endl;
   //                 
   //     }

   //     enum genre{Drama, Epos, Lirica, Comedy, Novel, Fantasy};
   //     string genre;

   // //набір іменованих цілочисельних констант
   //      
   //     int i = 0;
   //     while (i<=10)
   //     {
   //         cout << i;
   //         i++;
   //     }
   // 
   //     int k= 0;
   //     do
   //     {
   //         cout<<k;
   //         k++;
   //     } while (k<=10);

   //     int j;
   //     for (j = 0; j <=10; j+=2)
   //     {
   //         cout << j << " ";
   //     }

   //     int user;
   //     int number = 2;

   //     for (int i = 1; i <=5; i++)
   //     {
   //         cin << user;
   //         if (user==number)
   //         {
   //             cout << "Yes" << endl;
   //             break;
   //         }
   //         else
   //         {
   //             cout << "No" << endl;
   //         }
   //         if (i==5)

   //         {
   //             cout << "No" << endl;
   //         }
   //     }


        
    
  cout << "task1\n";
        int i = 1;
        while (i<=100)
        {
            cout << i <<" ";
            i++;
        }

        cout << "\ntask2\n";
        int k = 0;
        int j = 2;
        while (j<=200)
        {
            cout << j << " ";
            j += 2;
            k++;
        }
        cout << "quality: " << k << endl;

        cout << "\ntask3\n";
        int i3 = 0; int k3; int s = 0; int p;
        cout << "enter quality:";
            cin>>k3;
        while (i3<k3)
        {
            cout << "enter number "<<i3+1<<": ";
                cin >> p;
            if (p%2==0)
            {
                s += p;
            }
            i3++;
        }
        cout << "summa=" << s;*/
        

        /*cout << "\ntask4\n";
        int i4 = 0; int s4 = 0; int p4;
        
        while (i4 < 10)
        {
            cout << "enter number " << i4 + 1 << ": ";
            cin >> p4;
            s4 += p4;
            i4++;

        }*/
       /* float arifm = s4 / 10;
        cout << "summa=" << s4 << "\nserarifm=" << arifm << endl;*/

       /* cout << "task5\n";
        int i5 = 100;
        while (i5 >= 1)
        {
            cout << i5 << " ";
            i5--;
        }*/


       /* cout << "\ntask6\n";
       int i6 = 0; int s6 = 0; int p6;

       while (i6 < 7)
       {
           cout << "enter number " << i6 + 1 << ": ";
           cin >> p6;
           s6 += p6;
           i6++;

       }
       cout << "summa=" << s6 << endl;*/



cout << "/ntask7\n";
int s7 = 0;
for (int i7 = 1; i7 <=12; i7++)
{
    s7 += i7;
}
cout << "summa=" << s7 << endl;



cout << "/nTask8\n";
int s8 = 0; int k8;
for (;;)
{
    cout<<"Enter number:";
    cin >> k8;
    s8 += k8;
    if (k8==0)
    {
        break;
    }
}
cout << "Summa=" << s8 << endl;

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
