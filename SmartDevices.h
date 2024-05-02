#pragma once
#include <string>
#include "PortableAppliance.h"
#include "HomeAppliance.h"
using namespace std;
class SmartAppliance: public PortableAppliance, HomeAppliance {
protected:
    string function;
public:
    SmartAppliance(string _name, double _price, int battery, int _weight, string _function);
    void getInfo() const override;
};
