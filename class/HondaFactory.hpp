#ifndef HONDAFACTORY_H
#define HONDAFACTORY_H

#include "CarFactory.hpp"
#include "HondaCar.hpp"
#include "HondaAcc.hpp"

class HondaFactory : public CarFactory {
public:
    Car* createCar() override {
        return new HondaCar();
    }

    Acc* createAcc() override {
        return new HondaAcc();
    }

    void buildCar() override {
        car = createCar();
        acc = createAcc();
        std::cout << "Honda car assembly in progress..." << std::endl;
        car->assemble();
        acc->install();
    }

    void special() override {
        std::cout << "Honda Special Feature" << std::endl;
    }
};

#endif // HONDAFACTORY_H
