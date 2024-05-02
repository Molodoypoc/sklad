#include <iostream>
#include <string>
#include "Phone.h"
#include "HomeDevices.h"
#include "SmartDevices.h"
using namespace std;
int main() {
    ElectronicDevice* options[3];

    options[0] = new Phone(string("Телефон"), 10999.99, string("Android"), 48);
    options[1] = new HomeDevices(string("Утюг"), 2999.99, 2, 4);
    options[2] = new SmartAppliance(string("Часы"), 6999.99, 20, 1, string("Счетчик сердцебиения"));

    bool open = true;
    while (open)
    {
        cout << "Выберите продукт : 1 - телефон, 2 - утюг, 3 - часы,  0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            options[0]->getInfo();
            break;

        case 2:
            options[1]->getInfo();
            break;

        case 3:
            options[2]->getInfo();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "Выберите продукт от 1 до 3 или 0, чтобы выйти" << endl;
            break;
        }
    }
    delete options[0];
    delete options[1];
    delete options[2];

    return 0;
}