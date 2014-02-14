#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int sumofsquares = 0;
    int squareofsum = 0;

    for(int i=1; i<=100; ++i)
    {
        sumofsquares += i*i;
        squareofsum += i;
    }
    squareofsum *= squareofsum;

    cout << squareofsum - sumofsquares << endl;

    return 0;
}