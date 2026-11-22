

#include <iostream>
using namespace std;

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

int main()
{
    Washing_machine C100 = { "Samsung", "White", 600, 800, 2200, 90, 1000 };
    print_wash(C100);
    Washing_machine N200 = {};
    enter_wash(N200);
    print_wash(N200);

}

