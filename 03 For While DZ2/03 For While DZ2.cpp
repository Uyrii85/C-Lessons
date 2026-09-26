
#include <iostream>
using namespace std;

int main()
{
   cout << "Task1\n";
   int i1 = 14;
   while (i1<=123)
   {
	   cout << i1 << " ";
	   i1++;
   }


   cout << "\nTask2\n";
   int i2 = 1;
   while (i2 <= 100)
   {
	   if (i2 % 2 == 1)
	   {
		   cout << i2 << " ";
	   }
	   i2++;
   }

	cout << "\nTask3\n";
	int n3;
	cout << "Enter number:"; cin >> n3;
	
	if (n3<=0)
	{
		cout << "Error\n";
	}
	else
	{
		int s3 = 0;
		int i3 = 1;
		int k3;
		while (i3 <= n3)
		{
			cout << "Enter number" << i3 << ":";
			cin >> k3;
			if (k3 < 0)
			{
				s3++;
			}
			i3++;
		}
		cout << "Number of negative numbers:" << s3 << endl;
	}

	cout << "\nTask4\n";
	int i4 = 1; float s4 = 0; int d=1; float p4;

	while (i4 <=8)
	{
		cout << "enter number " << i4 << ": ";
		cin >> p4;
		s4 += p4;
		d=d*p4;
		i4++;
	}
	float arifm = s4 / 8;
	cout << "Product=" << d << "\nArithmetic mean =" << arifm << endl;


	cout << "\nTask5\n";
	int i5 = 99;
	
	do
	{
		cout << i5 << " ";
		i5 -= 2;
	} 
		while (i5>=1);


	cout << "\nTask6\n";
	int i6 = 1; int d6 = 1; int p6;

	do
	{
		cout << "Enter number " << i6 << ":";
		cin >> p6;
		d6 *= p6;
		i6++;
	}
	while (i6<=5);
	cout << "Product=" << d6 << endl;


	cout << "\nTask7\nPart1\n";
	int i7 = 1; int s7= 0;
	while (i7<=50)
	{
		if (i7%4==0)
		{
			s7 += i7;
		}
		i7++;
	}
	cout << "Sum=" << s7 << endl;

	s7 = 0;
	cout << "\nTask7\nPart2\n";
	for (i7 = 4; i7 <= 50; i7+=4)
	{
		s7 += i7;
	}
	cout << "Sum=" << s7 << endl;


	cout << "\nTask8\n";
	int n8;
	cout <<"Enter number:"; cin >> n8;

	if (n8 <= 0)
	{
		cout << "Error\n";
	}
	else
	{
		int i8 = 1;
		while (i8 <= n8)
		{
			cout << i8 << " ";
			i8++;
		}
	}
	

	cout << "\nTask9\n";
	int l1; int l2;
	cout << "Enter start number:"; cin >> l1;
	cout << "Enter finish number:"; cin >> l2;

	if (l1>l2)
	{
		int l = l1;
		l1 = l2;
		l2 = l;
	}
	int i9 = l1;
	for (l1; i9<=l2; i9++)
	{
		cout << i9<<" ";
	}

	cout << "\nEven numbers:\n";
	i9 = l1;
	for (l1; i9 <= l2; i9++)
	{
		if (i9%2==0)
		{
			cout << i9 << " ";
		}
			
	}

	cout << "\nOdd numbers:\n";
	i9 = l1;
	for (l1; i9 <= l2; i9++)
	{
		if (i9 % 2 == 1)
		{
			cout << i9 << " ";
		}

	}

	cout << "\nNumbers multiple of 7:\n";
	i9 = l1;
	for (l1; i9 <= l2; i9++)
	{
		if (i9 % 7 ==0)
		{
			cout << i9 << " ";
		}

	}

	cout << "\nTask10\n";
	int r1; int r2;
	cout << "Enter start number:"; cin >> r1;
	cout << "Enter finish number:"; cin >> r2;

	if (r1 > r2)
	{
		int r = r1;
		r1 = r2;
		r2 = r;
	}
	
	for (r1; r1 <= r2; r1++)
	{
		cout << r1 << " ";
	}


	cout << "\nTask11\n";
	int s11 = 0; int k11;
	for (;;)
	{
		cout << "Enter number:";
		cin >> k11;
		s11 += k11;
		if (k11 == 0)
		{
			break;
		}
	}
	cout << "Sum=" << s11 << endl;

	
}

