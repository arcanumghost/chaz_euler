#include <iostream>
#include "prime.h"

using namespace std;

int main(int argc, char **argv)
{
    unsigned long long bignumber = 600851475143;
    unsigned i;
	PrimeFinder pm(unsigned(sqrt(bignumber)));

    for(i=2; i<bignumber; ++i)
    {
        if(pm.isPrime(i) && bignumber%i == 0)
        {
            cout << bignumber << ' ' << i << endl;
            bignumber /= i;
        }
    }
        
    cout << i << endl;

    return 0;
}