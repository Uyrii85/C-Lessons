

#include <iostream>
using namespace std;

//Task 1
struct Washing_machine
{
    char firm[100];
    char color[100];
    int height;
    int vidth;
    int power;
    int heating_temperatyre;
    int spin_speed;
};

void enter_wash(Washing_machine &N)
{
    cout << "Enter firm: "; cin >> N.firm;
    cout << "Enter color: "; cin >> N.color;
    cout << "Enter height: "; cin >> N.height;
    cout << "Enter vidth: "; cin >> N.vidth;
    cout << "Enter power: "; cin >> N.power;
    cout << "Enter temperature: "; cin >> N.heating_temperatyre;
    cout << "Enter spin speed: "; cin >> N.spin_speed;
}

void print_wash(Washing_machine M)
{
    //cout << "Washing machine"<< Washing_machine M <<endl;
    cout << "Firm: " << M.firm << endl;
    cout << "Color: " << M.color << endl;
    cout << "Height: " << M.height << " mm\n";
    cout << "Vidth: " << M.vidth << " mm\n";
    cout << "Power: " << M.power << " W\n";
    cout << "Heating temperatyre: " << M.heating_temperatyre << " C\n";
    cout << "Spin speed: " << M.spin_speed << " in minute\n";
}

//Task 4
struct Machine
{
    int id;
    char model[100];
    char color[50];
    char number[100];
};

void Enter_car(Machine &car)
{
    cin.ignore();
    cout << "Enter model: ";
    cin.getline(car.model, 100);
    cout << "Enter color: ";
    cin.getline(car.color, 100);
    cout << "Enter number: ";
    cin.getline(car.number, 100);
}

void Print_car(Machine &cars)
{
    cout << "Id: " << cars.id << endl;
    cout << "Model: "<<cars.model<<endl;
    cout << "Color: "<<cars.color<<endl;
    cout << "Number: "<<cars.number<<endl;
    cout << endl;
}

void search(Machine cars[], int size, char number[100])

{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(cars[i].number, number) == 0)
        {
            Print_car(cars[i]);
        }
    }
}


int main()
{
    cout << "Task 1\nFirst washing machine:\n";
    Washing_machine C100 = { "Samsung", "White", 600, 800, 2200, 90, 1000 };
    print_wash(C100);
    cout << "\nEnter new washing machine:\n";
    Washing_machine N200 = {};
    enter_wash(N200);
    cout << "\nNew washing machine:\n";
    print_wash(N200);

    cout << "\nTask 4\nEnter car BMW:\n";
   
    Machine BMW = {};
    BMW.id = 0;
    Enter_car(BMW);
    Print_car(BMW);

    const int size = 10;
    Machine cars[size] =
    {
        {0, "BMW X5", "White", "AH 2571 KO"},
        {1, "Mercedes S500", "Red", "AA 2471 MH"},
        {2, "AUDI A7 ", "Green", "AK 2697 AO"},
        {3, "Volkswagen Passat", "Grey", "KA 2405 PK"},
        {4, "Toyota Corolla", "Pink", "BOND"},
        {5, "Hyunday Sonata", "Green","AH 2571 KO"},
        {6, "Scoda Octavia", "Yellow", "AE 2357 PB"},
        {7, "Honda Civic", "Black", "KOTIK"},
        {8, "Mazda CR5", "White", "AP 2217 KH"},
        {9, "Suzuki Grand", "Brown", "BB 2907 KE"}
    };
    int num;
    int id;
    char number[100];
    do
    {
        cout << "\n1 - Print all cars\n2 - Edit cars\n3 - Find car\n0 - Exit\nEnter number:";
            cin >> num;
            cin.ignore();
            switch (num)
            {
            case 1:
                for (int i = 0; i < size; i++)
                {
                    Print_car(cars[i]);
                }
                break;
            case 2:
                cout << "Enter id to edit:";
                cin >> id;
                Enter_car(cars[id]);
                Print_car(cars[id]);
                break;
            case 3:
                cout << "Enter number to find:";
                cin.getline(number, 100);
                search(cars, size, number);
                break;
            case 0:
                break;
            default:
                cout << "Incorrect\n";
            }
    } 
    while (num!=0);
}

