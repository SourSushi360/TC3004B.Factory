#ifndef KIAFACTORY_H
#define KIAFACTORY_H

#include "CarFactory.hpp"
#include "KIACar.hpp"
#include "KIAAcc.hpp"

class KIAFactory : public CarFactory {
public:
    Car* createCar() override {
        return new KIACar();
    }

    Acc* createAcc() override {
        return new KIAAcc();
    }

    void buildCar() override {
        car = createCar();
        acc = createAcc();
        std::cout << "KIA car assembly in progress..." << std::endl;
        car->assemble();
        acc->install();
    }

    void special() override {
        std::cout << "KIA Special Feature" << std::endl;
    }
};

#endif // KIAFACTORY_H
