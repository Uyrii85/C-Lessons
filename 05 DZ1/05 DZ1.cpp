

#include <iostream>
using namespace std;

int main()
{
	cout << "Task 1\n";
	int mas[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter " << i+1 << " number:";
			cin >> mas[i];
		}
	
	int s = 1;

	for (int i = 0; i < 10; i++)
	{
		cout <<mas[i]<<"\t";
		s *= mas[i];
	}
	cout << "\nProduct=" << s << endl;


	cout << "\nTask 2\n";
		int mas2[7];
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter " << i + 1 << " number between -12 and 50:";
		cin >> mas2[i];
	}

	int positive=0;
	int negative=0;

	for (int i = 0; i < 7; i++)
	{
		cout << mas2[i] << "\t";
		if (mas2[i]>0)
			positive++;

		else if (mas2[i]<0)
			negative++;
	}

	cout << "\nNumber of negative = " << negative << endl;
	cout << "\nNumber of positive = " << positive << endl;

	cout << "\nTask 3\n";
	long mas3[7];
	for (int i = 0; i < 7; i++)
	{
		cout << "Enter " << i + 1 << " number:";
		cin >> mas3[i];
	}

	int sum = 0;
	
	for (int i = 0; i < 7; i++)
	{
		cout << mas3[i] << "\t";
		if (mas3[i] % 2 == 0)
			sum += mas3[i];
	}

	cout << "\nSum of even numbers = " << sum << endl;


	cout << "\nTask 4\n";
	int mas4[10]{};
	mas4[0] = 2;
	for (int i = 1; i < 10; i++)
	{
		mas4[i] = mas4[i - 1]*2;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << mas4[i] << "\t";
	}

	cout << endl;

	for (int i = 9; i >= 0; i--)
	{
		cout << mas4[i] << "\t";
	}

	cout << "\nTask 5\n";

	int mas5[7];

	for (int i = 0; i < 7; i++)
	{
		cout << "Enter " << i + 1 << " number:";
		cin >> mas5[i];
		
	}

	for (int i = 0; i <7; i++)
	{
		if (mas5[i] < 0)
			mas5[i] = mas5[i] * -1;
		cout << mas5[i] << "\t";
	}
	
}
