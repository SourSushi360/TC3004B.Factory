#ifndef FACTORY_H
#define FACTORY_H

class Car;
class Acc;

class Factory {
public:
    virtual Car* createCar() = 0;
    virtual Acc* createAcc() = 0;
    virtual ~Factory() {}
};

#endif // FACTORY_H
