
#include <iostream>
using namespace std;

int main()
{
	cout << "\nTask1\n";
	const int rows1 = 4;
	const int cols1 = 3;
	int mas1[rows1][cols1];

	int num1 = 0;
	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < cols1; j++)
		{
			mas1[i][j] = rand() % 5;
			cout << mas1[i][j] << "\t";
			if (mas1[i][j] != 0)
			{
				num1++;
			}

		}
		cout << endl;
	}
	cout << "Elements not null=" << num1 << endl;


	cout << "\nTask2\n";
	const int rows2 = 3;
	const int cols2 = 3;
	int mas2[rows2][cols2];

	int num2 = 0;
	for (int i = 0; i < rows2; i++)
	{
		for (int j = 0; j < cols2; j++)
		{
			mas2[i][j] = rand() % 5;
			cout << mas2[i][j] << "\t";
			if (mas2[i][j] == 0)
			{
				num2++;
			}

		}
		cout << endl;
	}
	cout << "Elements null=" << num2 << endl;


	cout << "\nTask3\n";
	const int rows3 = 7;
	const int cols3 = 3;
	int mas3[rows3][cols3];
	int num3 = 0;
	for (int i = 0; i < rows3; i++)
	{
		for (int j = 0; j < cols3; j++)
		{
			mas3[i][j] = rand() % 40 - 20;
			cout << mas3[i][j] << "\t";
			if (mas3[i][j] <12 and mas3[i][j]>-12)
			{
				num3++;
			}

		}
		cout << endl;
	}
	cout << "Elements=" << num3 << endl;


	cout << "\nTask4\n";
	const int rows4 = 4;
	const int cols4 = 5;
	int mas4[rows4][cols4];

	int num4 = 0;
	for (int i = 0; i < rows4; i++)
	{
		for (int j = 0; j < cols4; j++)
		{
			mas4[i][j] = rand() % 10 - 5;
			cout << mas4[i][j] << "\t";
			if (mas4[i][j] > 0)
			{
				num4++;
			}

		}
		cout << endl;
	}
	cout << "Elements positive=" << num4 << endl;


	cout << "\nTask5\n";
	const int rows5 = 5;
	const int cols5 = 4;
	int mas5[rows5][cols5];

	int num5 = 1;
	for (int i = 0; i < rows5; i++)
	{
		for (int j = 0; j < cols5; j++)
		{
			mas5[i][j] = rand() % 10 - 5;
			cout << mas5[i][j] << "\t";
			if (mas5[i][j] > 0)
			{
				num5 *= mas5[i][j];
			}

		}
		cout << endl;
	}
	cout << "Product positive=" << num5 << endl;


	cout << "\nTask6\n";
	const int rows6 = 5;
	const int cols6 = 4;
	int mas6[rows6][cols6];

	int num6 = 1;
	for (int i = 0; i < rows6; i++)
	{
		for (int j = 0; j < cols6; j++)
		{
			mas6[i][j] = rand() % 10 - 5;
			cout << mas6[i][j] << "\t";
			if (mas6[i][j] < 0)
			{
				num6 *= mas6[i][j];
			}

		}
		cout << endl;
	}
	cout << "Product negative=" << num6 << endl;


	cout << "\nTask7\n";
	const int rows7 = 4;
	const int cols7 = 4;
	int mas7[rows7][cols7];

	int num7 = 0;
	for (int i = 0; i < rows7; i++)
	{
		for (int j = 0; j < cols7; j++)
		{
			mas7[i][j] = rand() % 40;
			cout << mas7[i][j] << "\t";
			if (mas7[i][j] % 6 == 1)
			{
				num7++;
			}

		}
		cout << endl;
	}
	cout << "Numbers=" << num7 << endl;


	cout << "\nTask8\n";
	const int rows8 = 5;
	const int cols8 = 6;
	int mas8[rows8][cols8];

	for (int i = 0; i < rows8; i++)
	{
		for (int j = 0; j < cols8; j++)
		{
			mas8[i][j] = rand() % 100;
			cout << mas8[i][j] << "\t";
		}
		cout << endl;
	}

	int min8 = mas8[0][0];

	for (int i = 0; i < rows8; i++)
	{
		for (int j = 0; j < cols8; j++)
		{
			if (mas8[i][j] < min8)
			{
				min8 = mas8[i][j];
			}

		}
	}
	cout << "Min element=" << min8 << endl;


	cout << "\nTask9\n";
	const int rows9 = 5;
	const int cols9 = 6;
	int mas9[rows9][cols9];

	for (int i = 0; i < rows9; i++)
	{
		for (int j = 0; j < cols9; j++)
		{
			mas9[i][j] = rand() % 100;
			cout << mas9[i][j] << "\t";
		}
		cout << endl;
	}

	int max9 = mas9[0][0];

	for (int i = 0; i < rows9; i++)
	{
		for (int j = 0; j < cols9; j++)
		{
			if (mas9[i][j] > max9)
			{
				max9 = mas9[i][j];
			}

		}
	}
	cout << "Max element=" << max9 << endl;



	cout << "\nTask10\n";
	const int rows10 = 5;
	const int cols10 = 4;
	int mas10[rows10][cols10];

	int num10 = 0;
	for (int i = 0; i < rows10; i++)
	{
		for (int j = 0; j < cols10; j++)
		{
			mas10[i][j] = rand() % 10 - 5;
			cout << mas10[i][j] << "\t";
			if (mas10[i][j] < 0)
			{
				num10 += mas10[i][j]++;
			}

		}
		cout << endl;
	}
	cout << "Sum negative" << num10 << endl;


}

