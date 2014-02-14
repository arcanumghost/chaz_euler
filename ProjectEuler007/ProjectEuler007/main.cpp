#include <iostream>
#include "prime.h"

using namespace std;

void main()
{
    int currentprime = 1; 
    for(int primeindex = 0; primeindex < 10001;)
        if(isPrime(++currentprime))
            ++primeindex;

    cout << currentprime << endl;
}