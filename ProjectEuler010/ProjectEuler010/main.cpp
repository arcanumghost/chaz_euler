#include <iostream>
#include "prime.h"

using namespace std;

const int limit = 2000000;

void main()
{
    PrimeFinder pm(limit);
    long long sum = 2; // first prime
    for(int i=3; i<limit; i+=2)
        if(pm.isPrime(i))
            sum += i;

    cout << sum << endl;
}