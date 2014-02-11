#include "prime.h"
#include <vector>

bool isPrime(unsigned x)
{
    static std::vector<int> primevalues;
    
    unsigned i;
    for(i=0; i<primevalues.size(); ++i)
        if(x % primevalues[i] == 0)
            return false;

    for(i = (primevalues.size() > 1 ? primevalues[i-1] : 2); i < x; ++i)
        if(x%i == 0)
            return false;

    primevalues.push_back(x);
    printf("New prime: %d\n", x);
    return true;
}