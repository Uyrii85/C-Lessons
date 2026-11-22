

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
    int id;
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
//
//struct Worker
//{
//    char name[50];
//    char surname[50];
//    int salary;
//    char position[50];
//    
//    Date birthdate;
//    Date hiredate;
//};
//
//void Init(Worker worker)
//{
//    cout << "Enter firm="; cin >> machine.name;
//    cout << "Enter color="; cin >> worker.surname;
//    cout << "Salary="; cin >> worker.salary;
//    cin >> worker.position;
//    cin >> worker.birthdate.day;
//    cin >> worker.birthdate.month;
//    cin >> worker.birthdate.year;
//    cin >> worker.hiredate.day;
//    cin >> worker.hiredate.month;
//    cin >> worker.hiredate.year;
//    
//}
//
//void Machine(Washing_machine machine)
//{
//    cout << "Enter firm:"; cin >> machine.firm;
//    cout << "Enter color:"; cin >> machine.color;
//    cout << "Enter power:"; cin >> machine.power;
//    cout << "Surname="; cin >> worker.surname;
//    cout << "Salary="; cin >> worker.salary;
//    cin >> worker.position;
//    cin >> worker.birthdate.day;
//    cin >> worker.birthdate.month;
//    cin >> worker.birthdate.year;
//    cin >> worker.hiredate.day;
//    cin >> worker.hiredate.month;
//    cin >> worker.hiredate.year;
//}
//
//void Show(Worker worker)
//{
//    cout << worker.name << endl;
//    cout << worker.surname << endl;
//    cout << worker.salary << endl;
//    cout << worker.position << endl;
//    cout << worker.birthdate.day << endl;
//}

void show_m(Movie &m)
{
    cout << m.id << endl;
    cout << m.name << endl;
    cout << m.director << endl;
    cout << m.genre << endl;
    cout << m.rating << endl;
    cout << m.price << endl;
}

void search_name(Movie mov[], int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(mov[i].name, name)==0)
        {
            show_m(mov[i]);
        }
    }
}

int main()
{
    int a =5;
    Date birthday = { 12,12,2000, "December"};

    const int size = 5;
    Movie movies[size] =
    {
        {0, "gvk", "kfkdtx","fantyasy", 8.2, 100},
        {1, "kugkuf", "glggl","action", 8.4, 200},
        {2, "jglv", "jvxj","fantyasy", 7.1, 300},
        {3, "lurfd", "vfxdcf","crime", 9.3, 200},
        {4, "khck", ";lk","fantyasy", 8.0, 150}
    };

    for (int i = 0; i < size; i++)
    {
        show_m(movies[i]);
        cout << endl;
    }
    int num;
    char name[50];

    do
    {
        cout << "Menu\n 1-name\n 2-director\n 3-genre\n 4-popular in genre\n 5-show all\n0-exit\n";
        cin >> num;
        cin.ignore()
        switch (num)
        {
        case 1:
            cout << "Ener film:";
            cin.getline(name, 50);
            search_name(movies, size, name);
            break;

        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            for (int i = 0; i < size; i++)
            {
                show_m(movies[i]);
                cout<< endl;
            }
            break;
        case 0:
            break;
        defaul:
            break;
        }

    }
    while (num!=0);


    
}

