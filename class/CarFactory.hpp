#ifndef CARFACTORY_H
#define CARFACTORY_H

#include "Factory.hpp"
#include "Car.hpp"
#include "Acc.hpp"

class CarFactory : public Factory {
protected:
    Car* car;
    Acc* acc;

public:
    virtual void buildCar() = 0;
    virtual void special() = 0;
    
    Car* getCar() { return car; }
    Acc* getAcc() { return acc; }
    
    virtual ~CarFactory() {
        delete car;
        delete acc;
    }
};

#endif // CARFACTORY_H