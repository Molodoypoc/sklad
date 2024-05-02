#pragma once
#include "ElectronicDevice.h"
class PortableAppliance : virtual public ElectronicDevice {
protected:
    int battery;
public:
    PortableAppliance(std::string _name, double _price, int _battery);
    virtual void getInfo() const override = 0;
    virtual ~PortableAppliance() {}
};