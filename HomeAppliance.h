#pragma once
#include "ElectronicDevice.h"
class HomeAppliance : virtual public ElectronicDevice {
protected:
    int weight;
public:
    HomeAppliance(std::string _name, double _price, int _weight);
    virtual void getInfo() const override = 0;
    virtual ~HomeAppliance() {}
};