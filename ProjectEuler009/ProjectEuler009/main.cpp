#include <iostream>

using namespace std;

bool isPythagoreanTriplet(int a, int b, int c)
{
    return (a*a + b*b) == c*c;
}

void main()
{
    int a, b, c;
    for(a = 1;; ++a)
        for(b = a+1, c = 1000-(b+a); b < c; ++b, --c)
            if(isPythagoreanTriplet(a, b, c))
            {
                cout << a << ' ' << b << ' ' << c << ' ' << a*b*c << endl;
                return;
            }
}