

#include <iostream>
using namespace std;

//Tas1
//Max betwwem 2 parameters
template<typename M1>
M1 Max1(M1 a, M1 b)
{
	return (a > b) ? a : b;
}

//Max betwwem 3 parameters
template<typename M2>
M2 Max2(M2 a, M2 b, M2 c)
{
	if (a > b and a > c)
		return a;
	else
	{
		if (b > c)
			return b;
		else
			return c;
	}
}

//Min betwwem 2 parameters
template<typename M3>
M3 Min1(M3 a, M3 b)
{
	return (a < b) ? a : b;
}

//Min betwwem 3 parameters
template<typename M4>
M4 Min2(M4 a, M4 b, M4 c)
{
	if (a < b and a < c)
		return a;
	else
	{
		if (b < c)
			return b;
		else
			return c;
	}
}

//Task2
template<typename M5>
M5 average_value(M5 mas[], int size)
{
	M5 sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += mas[i];
	}
	return sum / size;
}

//Task3
template<typename M6>
M6 Max_masiv(M6 mas[], int size)
{
	M6 Max6 = mas[0];
	for (int i = 1; i < size; i++)
		if (mas[i]>Max6)
			Max6 = mas[i];
	return Max6;
}

//Task3 part 2
template<typename M7>
M7 Maxmasiv2(M7 mas[3][3])
{
	M7 Max7 = mas[0][0];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (mas[i][j] > Max7)
				Max7 = mas[i][j];
		}
	}
	return Max7;
}

	//Additional task
	template<typename A>
	void enter_masiv10(A masiv[3][3])
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "Enter number " << i + 1 << " - " << j + 1 << " :";
				cin >> masiv[i][j];
			}
		}
	}

	template <typename B>
	void print_masiv11(B masiv[3][3])
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
				cout <<masiv[i][j] <<"\t";
			cout << endl;
		}
	}

	template <typename C>
	C max_masiv12(C masiv[3][3])
	{
		C max = masiv[0][0];
		for (int i = 1; i <3; i++)
		{
			for (int i = 1; i <3; i++)
			{
				if (masiv[i][i]>max)
					max = masiv[i][i];
			}
		}
		return max;
	}


	template <typename D>
	D min_masiv13(D masiv[3][3])
	{
		D min = masiv[0][0];
		for (int i = 1; i < 3; i++)
		{
			for (int i = 1; i < 3; i++)
			{
				if (masiv[i][i] < min)
					min = masiv[i][i];
			}
		}
		return min;
	}


int main()
{
	int a1, a2, a3;
	float b1, b2, b3;
	char c1, c2, c3;

	cout << "Task1 Part1\n";
	cout << "Enter int number1: "; cin >>a1;
	cout << "Enter int number2: "; cin >>a2;
	cout << "Max between "<<a1<<" and "<<a2<<" is " << Max1(a1, a2) << endl;
	

	cout << "Enter float number1: "; cin >> b1;
	cout << "Enter float number2: "; cin >> b2;
	cout << "Max between " << b1 << " and " << b2 << " is " << Max1(b1, b2) << endl;


	cout << "Enter char symdol: "; cin >> c1;
	cout << "Enter char symbol2: "; cin >> c2;
	cout << "Max between " << c1 << " and " << c2 << " is " << Max1(c1, c2) << endl;


	cout << "\nPart2\n";
	cout << "Enter int number1: "; cin >> a1;
	cout << "Enter int number2: "; cin >> a2;
	cout << "Enter int number3: "; cin >> a3;
	cout << "Max between " << a1 << " and " << a2 <<" and "<<a3<< " is " << Max2(a1, a2, a3) << endl;

	cout << "Enter float number1: "; cin >> b1;
	cout << "Enter float number2: "; cin >> b2;
	cout << "Enter int number3: "; cin >> b3;
	cout << "Max between " << b1 << " and " << b2 << " and " << b3 << " is " << Max2(b1, b2, b3) << endl;


	cout << "Enter char symbol1: "; cin >> c1;
	cout << "Enter char symbol2: "; cin >> c2;
	cout << "Enter char symbol3: "; cin >> c3;
	cout << "Max between " << c1 << " and " << c2 << " and " << c3 << " is " << Max2(c1, c2, c3) << endl;

	cout << "\nPart3\n";

	cout << "Enter int number1: "; cin >> a1;
	cout << "Enter int number2: "; cin >> a2;
	cout << "Min between " << a1 << " and " << a2 << " is " << Min1(a1, a2) << endl;


	cout << "Enter float number1: "; cin >> b1;
	cout << "Enter float number2: "; cin >> b2;
	cout << "Min between " << b1 << " and " << b2 << " is " << Min1(b1, b2) << endl;


	cout << "Enter char symdol: "; cin >> c1;
	cout << "Enter char symbol2: "; cin >> c2;
	cout << "Min between " << c1 << " and " << c2 << " is " << Min1(c1, c2) << endl;

	cout << "\nPart4\n";

	cout << "Enter int number1: "; cin >> a1;
	cout << "Enter int number2: "; cin >> a2;
	cout << "Enter int number3: "; cin >> a3;
	cout << "Min between " << a1 << " and " << a2 << " and " << a3 << " is " << Min2(a1, a2, a3) << endl;

	cout << "Enter float number1: "; cin >> b1;
	cout << "Enter float number2: "; cin >> b2;
	cout << "Enter int number3: "; cin >> b3;
	cout << "Min between " << b1 << " and " << b2 << " and " << b3 << " is " << Min2(b1, b2, b3) << endl;

	cout << "Enter char symbol1: "; cin >> c1;
	cout << "Enter char symbol2: "; cin >> c2;
	cout << "Enter char symbol3: "; cin >> c3;
	cout << "Min between " << c1 << " and " << c2 << " and " << c3 << " is " << Min2(c1, c2, c3) << endl;



	cout << "\nTask2\nPart1\n";

	const int k = 5;
	int masiv1[k];
	for (int i = 0; i < k; i++)
	{
		cout << "Enter int number " << i + 1 << " :";
			cin >> masiv1[i];
	}
	cout<< "Average value is "<<average_value(masiv1, k);

	cout<<"\nPart2\n";

	float masiv2[k];
	for (int i = 0; i < k; i++)
	{
		cout << "Enter float number " << i + 1 << " :";
		cin >> masiv2[i];
	}
	cout << "Average value is " << average_value(masiv2, k);


	cout << "\nPart3\n";

	char masiv3[k];
	for (int i = 0; i < k; i++)
	{
		cout << "Enter char symbol " << i + 1 << " :";
		cin >> masiv3[i];
	}
	cout << "Average value is " << average_value(masiv3, k);

cout << "\nTask3\nPart1\n";

const int size3 = 5;
int masiv4[size3];

for (int i = 0; i < size3; i++)
{
	cout << "Enter int number " << i + 1 << " :";
	cin >> masiv4[i];
}

cout<<"Max element is: "<< Max_masiv(masiv4, size3);


cout << "\nPart2\n";

float masiv5[size3];

for (int i = 0; i < size3; i++)
{
	cout << "Enter float number " << i + 1 << " :";
	cin >> masiv5[i];
}

cout << "Max element is: " << Max_masiv(masiv5, size3);

cout << "\nPart3\n";


char masiv6[size3];

for (int i = 0; i < size3; i++)
{
	cout << "Enter char symbol " << i + 1 << " :";
	cin >> masiv6[i];
}

cout << "Max element is: " << Max_masiv(masiv6, size3);


cout << "\nPart4\n";


int masiv7[3][3];

for (int i = 0; i < 3; i++)
	for (int j = 0; j < 3; j++)
	{
		cout << "Enter int number " << i + 1 <<" - "<<j+1<< " :";
	cin >> masiv7[i][j];
}

cout << "Max element is: "<<Maxmasiv2(masiv7);


cout << "\nPart5\n";


float masiv8[3][3];

for (int i = 0; i < 3; i++)
	for (int j = 0; j < 3; j++)
	{
		cout << "Enter float number " << i + 1 << " - " << j + 1 << " :";
		cin >> masiv8[i][j];
	}

cout << "Max element is: " << Maxmasiv2(masiv8);


cout << "\nPart6\n";


char masiv9[3][3];

for (int i = 0; i < 3; i++)
	for (int j = 0; j < 3; j++)
	{
		cout << "Enter chsr symbol " << i + 1 << " - " << j + 1 << " :";
		cin >> masiv9[i][j];
	}

cout << "Max element is: " << Maxmasiv2(masiv9);


cout << "\nAdditional task\n";

cout << "\nPart1\nEnter int numbers\n";

int masiv14[3][3]{};
enter_masiv10(masiv14);
print_masiv11(masiv14);
cout <<"Max number on main diagonal is "<< max_masiv12(masiv14)<<endl;
cout <<"Min number on main diagonal is " << min_masiv13(masiv14) << endl;

cout << "\nPart2\nEnter float numbers\n";

float masiv15[3][3];
enter_masiv10(masiv15);
print_masiv11(masiv15);
cout <<"Max number on main diagonal is "<< max_masiv12(masiv15) << endl;
cout <<"Min number on main diagonal is " << min_masiv13(masiv15) << endl;

cout << "\nPart3\nEnter Char symbols\n";

char masiv16[3][3];
enter_masiv10(masiv16);
print_masiv11(masiv16);
cout <<"Max number on main diagonal is "<<max_masiv12(masiv16) << endl;
cout <<"Min number on main diagonal is " <<min_masiv13(masiv16) << endl;


}

