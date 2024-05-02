#include "Phone.h"
#include <string>
#include <iostream>
using namespace std;
Phone::Phone(string _name, double _price, string _OS, int _battery) : PortableAppliance(_name, _price, _battery), OS(_OS) {}

void Phone::getInfo() const {
    cout << "Телефон: " << name << ", Цена: " << price << ", Кол-во часов заряда: " << battery << "ч., Операционная система: " << OS << endl;
}