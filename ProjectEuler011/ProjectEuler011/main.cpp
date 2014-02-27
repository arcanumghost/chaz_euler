#include <iostream>
#include <fstream>

using namespace std;

unsigned max(unsigned a, unsigned b)
{
    return a > b ? a : b;
}

void main()
{
    ifstream file("input.txt");
    unsigned grid[20][20];

    for(unsigned x=0; x<20; ++x)
        for(unsigned y=0; y<20; ++y)
            file >> grid[x][y];

    for(unsigned x=0; x<20; ++x)
    {
        for(unsigned y=0; y<20; ++y)
            cout << grid[x][y] << ' ';
        cout << endl;
    }

    file.close();

    unsigned product = 0;

    // Horizontal
    for(unsigned x=0; x<16; ++x)
        for(unsigned y=0; y<20; ++y)
            product = max(product, grid[x][y]*grid[x+1][y]*grid[x+2][y]*grid[x+3][y]);

    // Vertical
    for(unsigned x=0; x<20; ++x)
        for(unsigned y=0; y<16; ++y)
            product = max(product, grid[x][y]*grid[x][y+1]*grid[x][y+2]*grid[x][y+3]);

    // Diagonal
    for(unsigned x=0; x<16; ++x)
        for(unsigned y=0; y<16; ++y)
        {
            product = max(product, grid[x][y]*grid[x+1][y+1]*grid[x+2][y+2]*grid[x+3][y+3]);
            product = max(product, grid[x+3][y]*grid[x+2][y+1]*grid[x+1][y+2]*grid[x][y+3]);
        }

    cout << product << endl;
}