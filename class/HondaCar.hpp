#ifndef HONDACAR_H
#define HONDACAR_H

#include "Car.hpp"
#include <iostream>

class HondaCar : public Car {
public:
    void assemble() override {
        std::cout << "Assembling Honda Car..." << std::endl;
    }
};

#endif // HONDACAR_H
