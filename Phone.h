#pragma once
#include "PortableAppliance.h"
#include <string>
using namespace std;
class Phone : public PortableAppliance {
protected:
    string OS;
public:
    Phone(string _name, double _price, string _OS, int _battery);
    void getInfo() const override;
};