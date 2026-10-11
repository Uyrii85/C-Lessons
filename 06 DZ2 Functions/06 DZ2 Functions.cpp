

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

//Task7
//визначення кількості днів у вісокосному році
int leap_year(int a)
{
	if (a % 4 == 0)
	{
		return 366;
	}
	else
	{
		return 365;
	}

}


//підрахунок кількості днів
int days(int mas[6])
{
	int days = 0; //лічильник днів
	int startyear = mas[0];
	int startmonth = mas[1];
	int startday = mas[2];
	int finishyear = mas[3];
	int finishmonth = mas[4];
	int finishday = mas[5];

	if (startyear < finishyear)//якщо дати в різні роки
	{
		int year = startyear + 1;//додавання днів за роки, між граничними роками
		while (year < finishyear)
		{
			days += leap_year(year);
			year++;
		}

		int month_s = startmonth + 1;//додавання днів за місяці в початковому році

		while (month_s<=12)
		{
			if (month_s == 3 or month_s == 5 or month_s == 7 or month_s == 8 or month_s == 10 or month_s == 12)
				days += 31;
			else if (month_s == 4 or month_s == 6 or month_s == 9 or month_s == 11)
				days += 30;
			else if (month_s ==2 and startyear%4==0)
				days += 29;
			else
				days += 28;
			month_s++;
		}


		int month_f = 1;//додавання днів за місяці в кінцевому році

		while (month_f < finishmonth)
		{
			if (month_f == 1 or month_f == 3 or month_s == 5 or month_s == 7 or month_s == 8 or month_s == 10)
				days += 31;
			else if (month_f == 4 or month_f == 6 or month_f == 9 or month_f == 11)
				days += 30;
			else if (month_f == 2 and finishyear % 4 == 0)
				days += 29;
			else
				days += 28;
			month_f++;
		}
		//додавання днів за початковий місяць в початковому році
		if (startmonth == 1 or startmonth == 3 or startmonth == 5 or startmonth == 7 or startmonth == 8 or startmonth == 10 or startmonth == 12)
			days += 31 - startday;
		else if (startmonth == 4 or startmonth == 6 or startmonth == 9 or startmonth == 11)
			days += 30 - startday;
		else if (startmonth == 2 and startyear%4==0)
			days= days+29-startday;
		else 
			days=days+28-startday;
		//додавання днів за початковий місяць в початковому році
			days += finishday;
	}

	else if (startyear == finishyear)//якщо роки початку та кінця співпадають
	{
		if (startmonth < finishmonth)//якщо місяці не співпадають
		{
			int month = startmonth + 1;//додавання днів за місяці, між граничними місяцями
			while (month < finishmonth)
			{
				if (month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12)
					days = days + 31 - startday;
				else if (month == 4 or month == 6 or month == 9 or month == 11)
					days = days + 30 - startday;
				else if (month == 2 and startyear % 4 == 0)
					days = days + 29 - startday;
				else
					days = days + 28 - startday;
				month++;
			}
			//додавання днів за стартовий місяць
			if (startmonth == 1 or startmonth == 3 or startmonth == 5 or startmonth == 7 or startmonth == 8 or startmonth == 10 or startmonth == 12)
				days = days + 31 - startday;
			else if (startmonth == 4 or startmonth == 6 or startmonth == 9 or startmonth == 11)
				days = days + 30 - startday;
			else if (startmonth == 2 and startyear % 4 == 0)
				days = days + 29 - startday;
			else
				days = days + 28 - startday;

			//додавання днів за останній місяць
			days += finishday;
		}
		else if (startmonth == finishmonth)//якщо співпадають рік та місяць
		{
			days = finishday - startday;
		}
	}
	return days;
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


	cout << "\nTask7\n";

	int data[6];
	cout << "Enter start year: ";
		cin >> data[0];
	cout << "Enter start month: ";
		cin >> data[1];
	cout << "Enter start day: ";
		cin >> data[2];
	cout << "Enter finish year: ";
		cin >> data[3];
	cout << "Enter finish month: ";
		cin >> data[4];
	cout << "Enter finish day: ";
		cin >> data[5];

		int day = days(data);

		cout << "Between "<<data[2]<<"."<< data[1]<<"."<< data[0] <<" year and " << data[5] << "." << data[4] << "." << data[3] <<" year "<<day<<" days\n";


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
	cout << "NULL elements " << zero << endl;

}