#include <iostream>
#include <string>

using namespace std;

bool isPalindromic(int x)
{
    char numstring[100];
    _itoa_s(x, numstring, 10);

    int length = 0;
    for(int i=0; i<=100; ++i)
        if(numstring[i-1] == '\0')
            length = i - 1;

    for(int i=0; i<length/2; ++i)
        if(numstring[i] != numstring[length - (1+i)])
            return false;

    cout << numstring << endl;

    return true;
}

int main(int argc, char **argv)
{
    int biggestnumber = 100*100;
    for(int i=100; i < 1000; ++i)
        for(int j=100; j < 1000; ++j)
            if(isPalindromic(i*j) && i*j > biggestnumber)
                biggestnumber = i*j;

    cout << biggestnumber << endl;

    return 0; 
}