#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    unsigned long long sum = 2;
    unsigned pastfib = 1;
    unsigned pastfib2 = 2;
    for(unsigned i=3; i<4000000;)
    {
        i = pastfib + pastfib2;
        pastfib = pastfib2;
        pastfib2 = i;
        if(i%2 == 0)
            sum += i;
    }

    cout << sum << endl;

    return 0;
}