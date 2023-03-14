#include <iostream>
#include <fstream>

using namespace std;

string napis, caly_napis;

int main()
{
    fstream we("sygnaly.txt");

    for(int i = 0; i < 1000; i++)
    {
        we >> napis;

        if((i+1)%40 == 0 && i > 10)
            caly_napis += napis[9];
    }
    cout << caly_napis;
}