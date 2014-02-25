#include "prime.h"

PrimeFinder::PrimeFinder(unsigned startMax)
    : max(0)
{
    calcPrimes(startMax);
}

bool PrimeFinder::isPrime(unsigned x)
{
    if(x < 2)
        return false;
    if(x == 2)
        return true;
    return !sieve[(x-3)>>1];
}

// Initially, this function resets the primes and starts over
void PrimeFinder::calcPrimes(unsigned newMax)
{
    unsigned sieveBound = (newMax-1)>>1;
    sieve.resize(sieveBound, false);
    unsigned crosslimit = (unsigned(floor(sqrt(newMax))-1))>>1;
    for(unsigned i=0; i<crosslimit; ++i)
        if(!sieve[i])
            for(unsigned j=(2*(i+1)*(i+2)); j<=sieveBound; j+=(2*i+3))
                sieve[j-1] = true;
}