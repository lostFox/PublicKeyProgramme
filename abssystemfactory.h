#ifndef ABSSYSTEMFACTORY_H
#define ABSSYSTEMFACTORY_H
#include "mypublichead.h"

Interface AbsSystemFactory
{
public:
    AbsSystemFactory();

    virtual RSA* createRSA() = 0;
    virtual SM2* createSM2() = 0;
};

#endif // ABSSYSTEMFACTORY_H
