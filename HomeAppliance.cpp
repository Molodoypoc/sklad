#include "HomeAppliance.h"
HomeAppliance::HomeAppliance(std::string _name, double _price, int _weight) : ElectronicDevice(_name, _price), weight(_weight) {}