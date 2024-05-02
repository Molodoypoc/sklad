#pragma once
#include "HomeAppliance.h"
using namespace std;
class HomeDevices : public HomeAppliance {
protected:
    int capacity;
public:
    HomeDevices(std::string _name, double _price, int _weight, int _capacity);
    void getInfo() const override;
};