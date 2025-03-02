#include <iostream>
#include "class/HondaFactory.hpp"
#include "class/KIAFactory.hpp"

int main() {
    // Honda
    CarFactory* hondaFactory = new HondaFactory();
    hondaFactory->buildCar();
    hondaFactory->special();

    std::cout << std::endl;

    // KIA
    CarFactory* kiaFactory = new KIAFactory();
    kiaFactory->buildCar();
    kiaFactory->special();

    delete hondaFactory;
    delete kiaFactory;

    return 0;
}
