#pragma once
#include <string>
class ElectronicDevice {
protected:
    std::string name;
    double price;
public:
    ElectronicDevice(std::string _name, double _price);
    ElectronicDevice() {};
    virtual void getInfo() const = 0;
    virtual ~ElectronicDevice() {}
};