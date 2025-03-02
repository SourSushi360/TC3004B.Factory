#ifndef HONDAACC_H
#define HONDAACC_H

#include "Acc.hpp"
#include <iostream>

class HondaAcc : public Acc {
public:
    void install() override {
        std::cout << "Installing Honda accessories..." << std::endl;
    }
};

#endif // HONDAACC_H
