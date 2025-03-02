#ifndef KIAACC_H
#define KIAACC_H

#include "Acc.hpp"
#include <iostream>

class KIAAcc : public Acc {
public:
    void install() override {
        std::cout << "Installing KIA accessories..." << std::endl;
    }
};

#endif // KIAACC_H
