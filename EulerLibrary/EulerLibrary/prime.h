#pragma once
#include <vector>

// Current function requires that it be previously fed each number
class PrimeFinder
{
public: 
    bool isPrime(unsigned x);    
    PrimeFinder(unsigned startMax);

private:
    void calcPrimes(unsigned max = UINT_MAX);
    std::vector<bool> sieve;
    unsigned max;
};