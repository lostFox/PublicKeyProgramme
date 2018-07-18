#ifndef OPENSSLFACTORY_H
#define OPENSSLFACTORY_H
#include "abssystemfactory.h"

class OpenSslFactory : public AbsSystemFactory
{
public:
    OpenSslFactory();

    virtual RSA* createRSA();
    virtual SM2* createSM2();
};

#endif // OPENSSLFACTORY_H
