
#include <iostream>
using namespace std;

int main()
{
	/*for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "|###| ";
		}
		cout << endl;
	}

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
		cout << endl;
	}

	int line;
	int start;
	int lenght = 20;

	line = 1;

	while (line<lenght)
	{

		start = 1;

		while (start<=lenght)
		{
			cout << "* ";
			start++;
		}
		cout << endl;
		line++;
	}


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "* ";
		}
		cout << endl;*/

		//for (int i = 0; i < 11; i++)
		//{
		//	for (int j = 0; j < 11; j++)
		//	{
		//		if (i >= j and i+j>=10)
		//		{
		//			cout << "+ ";
		//		}
		//		else
		//		{
		//			cout << " ";
		//		}

		//	}
		//	cout << endl;
		//}


		/*int n = 9;

		// 1
		cout << "1\n";
		for (int i = 1; i <=n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (i <= j)
				{
					cout << "+ ";
				}
				else
				{
					cout << "  ";
				}

			}
			cout << endl;
		}

		cout << "\n2\n";

		//2

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <=n; j++)
			{
				if (i >= j)
				{
					cout << "+ ";
				}
				else
				{
					cout << "  ";
				}

			}
			cout << endl;
		}

		cout << "\n3\n";

		//3

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (i <= j and i+j<=n+1)
				{
					cout << "+ ";
				}
				else
				{
					cout << "  ";
				}

			}
			cout << endl;
		}

		cout << "\n4\n";

		//4

		for (int i = 1; i <=n; i++)
		{
			for (int j = 1; j <=n; j++)
			{
				if (i >= j and i + j >=n+1)
				{
					cout << "+ ";
				}
				else
				{
					cout << "  ";
				}

			}
			cout << endl;
		}

		cout << "\n5\n";

		//5

		for (int i = 1; i <=n; i++)
		{
			for (int j = 1; j <=n; j++)
			{
				if ((i >= j and i + j >=n+1) or (i <= j and i + j <=n+1))
				{
					cout << "+ ";
				}
				else
				{
					cout << "  ";
				}

			}
			cout << endl;
		}



		//6

		cout << "\n6\n";

		for (int i = 1; i <=n; i++)
		{
			for (int j = 1; j <=n; j++)
			{
				if ((i <= j and i + j >=n+1) or (i >= j and i + j <=n+1))
				{
					cout << "+ ";
				}
				else
				{
					cout << "  ";
				}

			}
			cout << endl;
		}


		//7

		cout << "\n7\n";

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <=n; j++)
			{
				if (i >= j and i + j <= n+1)
				{
					cout << "+ ";
				}
				else
				{
					cout << "  ";
				}

			}
			cout << endl;
		}

		//8

		cout << "\n8\n";



		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <=n; j++)
			{
				if (i <= j and i + j >=n+1)
				{
					cout << "+ ";
				}
				else
				{
					cout << "  ";
				}

			}
			cout << endl;
		}



		//9
		cout << "\n9\n";

		for (int i = 1; i <=n; i++)
		{
			for (int j = 1; j <=n; j++)
			{
				if (i + j <= n+1)
				{
					cout << "+ ";
				}
				else
				{
					cout << "  ";
				}

			}
			cout << endl;
		}

		cout << "\n10\n";

		for (int i = 1; i <=n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (i + j >=n+1)
				{
					cout << "+ ";
				}
				else
				{
					cout << "  ";
				}

			}
			cout << endl;
		}*/

	int train[3];
	train[0] = 5;
	train[1] = 4;
	train[2] = 7;

	cout << train[0] << endl;
	cout << train[1] << endl;
	cout << train[2] << endl;
	const int size = 10;
	int arr[size]{};
	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
	}

	int arr2[size] = {5,4,8,9,-7,5,0,7,66,7};
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i];
	}

	int arr3[] = { 7,9,4,0 };
	for (int i = 0; i < size; i++)
	{
		cout << arr3[i];
	}


	int arr5[size]{};
	for (int i = 0; i < size; i++)
	{
		cin>>arr5[i];
	}


	for (int i = 0; i < size; i++)
	{
		cout<<arr5[i];
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
