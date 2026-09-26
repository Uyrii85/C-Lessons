// 02 Logik DZ1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Task 1\nPart 1\n";
    cout << "Enter country:\n1 - Ukraine\n2 - Poland\n3 - Canada\n4 - USA\n5 - Australia\n";
    int country;
    cin >> country;
    if (country == 1)
        cout << "Capital of Ukraine - Kyiv\n";
    else if (country == 2)
        cout << "Capital of Poland - Warsaw\n";
    else if (country == 3)
        cout << "Capital of Canada - Ottawa\n";
    else if (country == 4)
        cout << "Capital of USA - Washington\n";
    else if (country == 5)
        cout << "Capital of Australia - Canberra\n";
    else
        cout << "Error enter\n";


    cout << "\nPart 2\n";
    cout << "Enter country:\n1 - Ukraine\n2 - Poland\n3 - Canada\n4 - USA\n5 - Australia\n";
    int country2;
    cin >> country2;
    switch (country2)
    {
    case 1:
        cout << "Capital of Ukraine - Kyiv\n";
        break;
    case 2:
        cout << "Capital of Poland - Warsaw\n";
        break;
    case 3:
        cout << "Capital of Canada - Ottawa\n";
        break;
    case 4:
        cout << "Capital of USA - Washington\n";
        break;
    case 5:
        cout << "Capital of Australia - Canberra\n";
        break;
    default:
        cout << "Error enter\n";
        break;
    }


    cout << "\nTask 2\nPart 1\n";
    cout << "Enter day number:";
    int day;
    cin >> day;
    if (day >= 1 and day <= 5)
        cout << "Working day\n";
    else if (day == 6 or day == 7)
        cout << "Week end\n";
    else
        cout << "Error\n";



    cout << "\nPart 2\n";
    cout << "Enter day number:";
    int day2;
    cin >> day2;
    switch (day2)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Working day\n";
        break;
    case 6:
    case 7:
        cout << "Week end\n";
        break;
    default:
        cout << "Error enter\n";
        break;
    }


    cout << "\nTask 3\nPart 1\n";
    cout << "Enter course:\n1 - North\n2 - East\n3 - South\n4 - West\n";
    int course;
    cin >> course;
    if (course == 1)
        cout << "New course - South\n";
    else if (course == 2)
        cout << "New course - West\n";
    else if (course == 3)
        cout << "New course - North\n";
    else if (course == 4)
        cout << "New course - East\n";
    else
        cout << "Error enter\n";


    cout << "\nPart 2\n";
    cout << "Enter course:\n1 - North\n2 - East\n3 - South\n4 - West\n";
    int course2;
    cin >> course2;
    switch (course2)
    {
    case 1:
        cout << "New course - South\n";
        break;
    case 2:
        cout << "New course - West\n";
        break;
    case 3:
        cout << "New course - North\n";
        break;
    case 4:
        cout << "New course - East\n";
        break;
    default:
        cout << "Error enter\n";
        break;
    }

    cout << "\nTask 4\nPart 1\n";
    cout << "Enter animal:\n1 - cow\n2 - fox\n3 - wolf\n4 - chicken\n5 - tiger\n6-elephant\n7-hawk\n";
    int animal;
    cin >> animal;
    if (animal == 1 or animal == 4 or animal == 6)
        cout << "Herbivore\n";
    else if (animal == 2 or animal == 3 or animal == 5 or animal == 7)
        cout << "Praedator\n";
    else
        cout << "Error enter\n";


    cout << "\nPart 2\n";
    cout << "Enter animal:\n1 - cow\n2 - fox\n3 - wolf\n4 - chicken\n5 - tiger\n6-elephant\n7-hawk\n";
    int animal2;
    cin >> animal2;

    switch (animal2)
    {
    case 1:
    case 4:
    case 6:
        cout << "herbivore\n";
        break;
    case 2:
    case 3:
    case 5:
    case 7:
        cout << "predator\n";
        break;
    default:
        cout << "Error enter\n";
        break;
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
