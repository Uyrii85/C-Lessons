

#include <iostream>
using namespace std;

int main()
{

    cout << "Task1\n";
    int i = 1;
    while (i <= 100)
    {
        cout << i << " ";
        i++;
    }


    cout << "\nTask2\n";
    int k2 = 0;
    int j2 = 2;
    while (j2 <= 200)
    {
        cout << j2 << " ";
        j2 += 2;
        k2++;
    }
    cout << "\nnumber: " << k2 << endl;



    cout << "\nTask3\n";
    int i3 = 0; int k3; int s3 = 0; int p3;
    cout << "enter number:";
    cin >> k3;
    if (k3 <= 0)
    {
        cout << "Incorrect\n";
    }
    
    else
    {
         while (i3 < k3)
        {
            cout << "enter number " << i3 + 1 << ": ";
            cin >> p3;
            if (p3 % 2 == 0)
            {
                s3 += p3;
            }
            i3++;
        }
        cout << "Sum of even numbers =" << s3;
    }

    

        cout << "\nTask4\n";
        int i4 = 0; float s4 = 0; float p4;

        while (i4 < 10)
        {
            cout << "enter number " << i4 + 1 << ": ";
            cin >> p4;
            s4 += p4;
            i4++;
        }
        float arifm = s4 / 10;
         cout << "Sum=" << s4 << "\nArithmetic mean =" << arifm << endl;


          cout << "Task5\n";
          int i5 = 100;
          while (i5 >= 1)
          {
              cout << i5 << " ";
              i5--;
          }


           cout << "\nTask6\n";
          int i6 = 0; int s6 = 0; int p6;

          while (i6 < 7)
          {
              cout << "enter number " << i6 + 1 << ": ";
              cin >> p6;
              s6 += p6;
              i6++;

          }
          cout << "Sum=" << s6 << endl;



        cout << "\nTask7\n";
    int s7 = 0;
    for (int i7 = 1; i7 <= 12; i7++)
    {
        s7 += i7;
    }
    cout << "Sum=" << s7 << endl;



    cout << "\nTask8\n";
    int s8 = 0; int k8;
    for (;;)
    {
        cout << "Enter number:";
        cin >> k8;
        s8 += k8;
        if (k8 == 0)
        {
            break;
        }
    }
    cout << "Sum=" << s8 << endl;
}
