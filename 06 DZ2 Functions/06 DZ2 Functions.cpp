

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

//int max(int mas[], int lon;)
//{
//	int max=mas[0];
//	for (int i = 1; i < lon; i++)
//	{
//		if (mas[i]>max)
//		{
//			max = mas[i];
//		}
//	}
//	return max;
//}

int cube(int a)
{
	return a * a * a;
}

bool zero(int a)
{
	bool g;
	if (a > 0)
		return true;
	else
		return false;
}

int main()
{
	/*cout<<"Task1\n"
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


	cout << "\nTask5\n";
	int t;
	cout << "Enter number:";
	cin >> t;
	cout << "Cube of " << t << "=" << cube(t) << endl;*/


	cout << "\nTask6\n";
	int d;
	cout << "Enter number:";
	cin >>d;
	cout <<d<<" is positive?\n" <<zero(d)<< endl;
	



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
