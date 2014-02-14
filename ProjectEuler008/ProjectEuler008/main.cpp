#include <iostream>
#include <fstream>

using namespace std;

#define bignumproduct (bignum[i]-'0')*(bignum[i+1]-'0')*(bignum[i+2]-'0')*(bignum[i+3]-'0')*(bignum[i+4]-'0')

void main()
{
    int numlength = 1000;
    char *bignum = new char[numlength];
    fstream file("bignumber.txt");
    file.read(bignum, numlength);

    int largestproduct = 0;
    for(int i=0; i < (numlength-4); ++i)
        if(largestproduct < bignumproduct)
            largestproduct = bignumproduct;

    cout << largestproduct << endl;

    delete [] bignum;
}