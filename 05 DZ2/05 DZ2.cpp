// 05 DZ2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
 
	int n = 9;

	cout << "1\n";
	for (int i = 1; i <= n; i++)
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

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
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

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i <= j and i + j <= n + 1)
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

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i >= j and i + j >= n + 1)
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

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if ((i >= j and i + j >= n + 1) or (i <= j and i + j <= n + 1))
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

	cout << "\n6\n";

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if ((i <= j and i + j >= n + 1) or (i >= j and i + j <= n + 1))
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

	cout << "\n7\n";

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i >= j and i + j <= n + 1)
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

	
	cout << "\n8\n";

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i <= j and i + j >= n + 1)
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

	cout << "\n9\n";

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i + j <= n + 1)
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

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i + j >= n + 1)
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
}

