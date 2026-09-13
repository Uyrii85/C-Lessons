#include<iostream>
using namespace std;
void main()
{
	cout << "Task 1\n";
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
	cout << Korm << " kg eat on month\n";

}