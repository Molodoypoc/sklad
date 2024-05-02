#include "HomeDevices.h"
#include <string>
#include <iostream>
using namespace std;
HomeDevices::HomeDevices(string _name, double _price, int _weight, int _capacity) : HomeAppliance(_name, _price, _weight), capacity(_capacity) {}

void HomeDevices::getInfo() const {
    cout << "Утюг: " << name << ", Цена: " << price << ", Вес: " << weight << "кг., Объем: " << capacity << "л." << endl;
}