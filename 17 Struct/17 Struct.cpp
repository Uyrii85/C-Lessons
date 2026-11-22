

#include <iostream>
using namespace std;

struct Washing_machine
{
    char firm[100];
    char color[100];
    int power[100];
    int hight[100];
    int veight[100];
    int heating_temperatyre[100];
    int spin_speed[100];
};

struct Movie
{
    char name[50];
    char director[50];
    char genre[50];
    float rating;
    float price;
};

struct User
{
    char nick[100];
    char password[100];
    char email[100];
    int age;
    int score;
};

struct Date
{
    int day;
    int month;
    int year;
    char month_name[10];
};

struct Worker
{
    char name[50];
    char surname[50];
    int salary;
    char position[50];
    
    Date birthdate;
    Date hiredate;
};

void Init(Worker worker)
{
    cout << "Enter firm="; cin >> machine.name;
    cout << "Enter color="; cin >> worker.surname;
    cout << "Salary="; cin >> worker.salary;
    cin >> worker.position;
    cin >> worker.birthdate.day;
    cin >> worker.birthdate.month;
    cin >> worker.birthdate.year;
    cin >> worker.hiredate.day;
    cin >> worker.hiredate.month;
    cin >> worker.hiredate.year;
    
}

void Machine(Washing_machine machine)
{
    cout << "Enter firm:"; cin >> machine.firm;
    cout << "Enter color:"; cin >> machine.color;
    cout << "Enter power:"; cin >> machine.power;
    cout << "Surname="; cin >> worker.surname;
    cout << "Salary="; cin >> worker.salary;
    cin >> worker.position;
    cin >> worker.birthdate.day;
    cin >> worker.birthdate.month;
    cin >> worker.birthdate.year;
    cin >> worker.hiredate.day;
    cin >> worker.hiredate.month;
    cin >> worker.hiredate.year;
}

void Show(Worker worker)
{
    cout << worker.name << endl;
    cout << worker.surname << endl;
    cout << worker.salary << endl;
    cout << worker.position << endl;
    cout << worker.birthdate.day << endl;
}

int main()
{
    int a =5;
    Date birthday = { 12,12,2000, "December"};
    
}

