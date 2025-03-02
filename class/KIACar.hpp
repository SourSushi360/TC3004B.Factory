#ifndef KIACAR_H
#define KIACAR_H

#include "Car.hpp"
#include <iostream>

class KIACar : public Car {
public:
    void assemble() override {
        std::cout << "Assembling KIA Car..." << std::endl;
    }
};

#endif // KIACAR_H
