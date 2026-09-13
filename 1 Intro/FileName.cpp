#include<iostream>
using namespace std;
void main()
{
	/*cout << "Task 1\n";
	cout << "I\n";
	cout << "\tlove\n";
	cout << "\t\tC++!\n";
	
	cout << "Task 2\n";
	cout << "\t.....:::::RESUME:::::.....\n";
	cout << "Name:\t\tYurii\n";
	cout << "Surname:\tStarikov\n";
	cout << "Last name:\tSergiyovich\n";
	cout << "\nDate of birth:\t10.11.1985\n";
	cout << "City:\t\tKyiv\n";
	cout << "Age:\t\t40\n";
	cout << "\nHobby:\t\tSport\n";
	cout << "::........... . . . . . . . . . ..........::\n";

	cout << "Task 3\n";
	const float sm_in_dyim = 2.54;
	
	int D;
	cout << "Enter diagonal: ";
		cin>>D;
	float D_sm = D * sm_in_dyim;
	cout << D << " dyims = " << D_sm << " sm\n";


	cout << "Task 4\n";
	
	const int days = 30;
	float K;
	cout << "Enter eat on day, gramm: ";
	cin >> K;
	float Korm = K * days/1000;
	cout << Korm << " kg eat on month\n";*/

	cout << "Task1\n";
	int a1;
	int a2;
	int a3;

	cout << "Enter a1: "; cin >> a1;
	cout << "Enter a2: "; cin >> a2;
	cout << "Enter a3: "; cin >> a3;

	int sum = a1 + a2 + a3;

	cout << "a1=" << a1 << endl;
	cout << "a2=" << a2 << endl;
	cout << "a3=" << a3 << endl;
	cout << "Summa=" << sum << endl;


	cout << "Task2\n";
	float b1;
	float b2;
	
	cout << "Enter b1: "; cin >> b1;
	cout << "Enter b2: "; cin >> b2;
	
	float ser_arif = (b1 + b2)/2;

	cout << "Ser arifm=" << ser_arif << endl;


	cout << "Task3\n";
	float c1;
	int c2;

	cout << "Enter Kilometers: "; cin >> c1;
	
	c2=c1*1000;

	cout << c1<<" kilometers = " <<c2<<" metres" << endl;


	cout << "Task4\n";
	const float d1=15.43;
	const float d2=36.17;
	const float d3=47.13;
	const float d4=36.04;

	int e1;
	int e2;
	int e3;
	int e4;

	cout << "Enter quality 1: "; cin >> e1;
	cout << "Enter quality 2: "; cin >> e2;
	cout << "Enter quality 3: "; cin >> e3;
	cout << "Enter quality 4: "; cin >> e4;
	
	float pay=e1*d1+e2*d2+e3*d3+e4*d4;
	cout << "Summa pay=" << pay << endl;


	cout << "Task5\n";
	int f1;
	int f2;

	cout << "Enter number: "; cin >> f1;

	f2 = f1 *f1;

	cout << f1 << " kvadrat = " << f2 <<endl;


	cout << "Task 6\n";
	const int minutes_in_hour = 60;
	const int hours_in_day = 24;
	int days;
	cout << "Enter days: ";
	cin >> days;
	int minutes = days * hours_in_day * minutes_in_hour;
	cout << days << " days = " << minutes << " minutes\n";
}