

#include <iostream>
using namespace std;
//Task 1
void rectangle(int K, int N, char znak)
{
	for (int i = 0; i < K; i++)
	{
		for (int j = 0; j < N; j++)
			cout << znak;
		cout << endl;
	}
}

//Task 2
int factorial(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
}

//Task 3
void prime(int k)
{
	int l = 0;
	for (int i =2; i < k/2; i++)
	{
		if (k % i == 0)
		{
			l++;
			break;
		}
	}
	if (l==0)
	{
		cout << "Number " << k << " is prime\n";
	}
	else
		cout << "Number " << k << " is NOT prime\n";

}

//Task4

void random(int mas[], int size)
{
	for (int i = 0; i < size; i++)
		mas[i]= rand() % 100-50;
}

void print(int mas[], int size)
{
	for (int i = 0; i < size; i++)
		cout<<mas[i]<<"\t";
	cout << endl;
}


int maximum(int mas[], int size)
{
	int max = mas[0];
	for (int i = 1; i < size; i++)
	{
		if (mas[i] > max)
			max = mas[i];
	}
	return max;
}

int minimum(int mas[], int size)
{
	int min = mas[0];
	for (int i = 1; i < size; i++)
	{
		if (mas[i] < min)
			min = mas[i];
	}
	return min;
}

//Task5
int cube(int a)
{
	return a * a * a;
}

//Task6
bool zero(int a)
{
	bool g;
	if (a > 0)
		return true;
	else
		return false;
}

//Task8
float arithmetic_mean(int mas[], int size)
{
	int sum =0;
	for (int i = 0; i < size; i++)
		sum += mas[i];
	return sum/size;
}


//Task9
int positive(int mas[], int size)
{
	int pos = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] > 0)
			pos++;
	}
	return pos;
}

int negative(int mas[], int size)
{
	int neg = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] < 0)
			neg++;
	}
	return neg;
}



int main()
{
	cout << "Task1\n";
	int K;
	int N;
	char znak;
	cout << "Enter height of rectangle:";
	cin >> N;
	cout << "Enter width of rectangle:";
	cin >> K;
	cout << "Enter symbol of rectangle:";
	cin >> znak;
	if (N <= 0 or K <= 0)
		cout << "Incorrect. Height and Width must be positive\n";
	else
	rectangle(K, N, znak);


	cout << "\nTask2\n";
		int f;
		cout << "Enter number:";
		cin >> f;
		if (f<0)
		cout << "Incorrect. Number must be positive\n";
	
	else if (f == 0 or f == 1)
		cout << "Factorial " << f << "=1\n";
	else
		cout << "Factorial " << f <<"="<< factorial(f)<<endl;


	cout << "\nTask3\n";
	int p;
	cout << "Enter number:";
	cin >> p;
	if (p < 0)
		cout << "Incorrect. Number must be positive\n";

	else if (p == 1 or p == 1)
		cout << "Number " << p << "is not prime\n";
	else
		prime(p);


	cout << "\nTask4\n";
	const int size5=20;
	int mas5[size5]{};
	random(mas5, size5);
	print(mas5, size5);
	int max5 = maximum(mas5, size5);
	int min5 = minimum(mas5, size5);

	cout << "Max number is " << max5 << endl;
	cout << "Min number is " << min5 << endl;


	cout << "\nTask5\n";
	int t;
	cout << "Enter number:";
	cin >> t;
	cout << "Cube of " << t << "=" << cube(t) << endl;


	cout << "\nTask6\n";
	int d;
	cout << "Enter number:";
	cin >>d;
	cout <<d<<" is positive?\n" <<zero(d)<< endl;


	cout << "\nTask8\n";
	const int size8 = 10;
	int mas8[size8]{};
	random(mas8, size8);
	print(mas8, size8);
	cout << "\nArithmetic mean = " << arithmetic_mean(mas8, size8) << endl;
	


	cout << "\nTask9\n";
	const int size9 = 30;
	int mas9[size9]{};
	random(mas9, size9);
	print(mas9, size9);
	int pos = positive(mas9, size9);
	int neg = negative(mas9, size9);
	int zero =size9-pos-neg;
	cout << "Positive elements " <<pos<< endl;
	cout << "Negative elements " <<neg<< endl;
	cout << "NULL elements " <<zero<< endl;




}