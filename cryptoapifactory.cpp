#include "cryptoapifactory.h"
#include "rsacryptoapi.h"
#include "sm2cryptoapi.h"

CryptoAPIFactory::CryptoAPIFactory()
{

}

RSA* CryptoAPIFactory::createRSA()
{
    return new RsaCryptoAPI;
}

SM2* CryptoAPIFactory::createSM2()
{
    return new Sm2CryptoApi;
}
