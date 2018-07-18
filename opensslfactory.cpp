#include "opensslfactory.h"
#include "rsaopenssl.h"
#include "sm2openssl.h"

OpenSslFactory::OpenSslFactory()
{

}

RSA* OpenSslFactory::createRSA()
{
    return new RsaOpenssl;
}

SM2* OpenSslFactory::createSM2()
{
    return new Sm2Openssl;
}
