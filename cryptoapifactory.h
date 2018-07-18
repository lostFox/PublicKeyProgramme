#ifndef CRYPTOAPIFACTORY_H
#define CRYPTOAPIFACTORY_H
#include "abssystemfactory.h"

class CryptoAPIFactory : public AbsSystemFactory
{
public:
    CryptoAPIFactory();

    virtual RSA* createRSA();
    virtual SM2* createSM2();
};

#endif // CRYPTOAPIFACTORY_H
