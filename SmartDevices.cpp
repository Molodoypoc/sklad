#include "SmartDevices.h"
#include <string>
#include <iostream>
using namespace std;
SmartAppliance::SmartAppliance(string _name, double _price, int _battery, int _weight, string _function)
    : ElectronicDevice(_name, _price), PortableAppliance(_name, _price, _battery), HomeAppliance(_name, _price, _weight), function(_function) {}

void SmartAppliance::getInfo() const {
    cout<< "Умные часы: " << name << ", Цена: " << price << ", Вес: " << weight << "кг., Кол-во часов заряда: " << battery << ", Функции: " << function << endl;
}