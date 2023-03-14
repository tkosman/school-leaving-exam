#include <iostream>
#include <fstream>

using namespace std;

string napisy[1000];

string haslo;
int w;

int main()
{
    ifstream we("napisy.txt");

    for (int k = 0; k < 1000; k++)
    {
        we >> napisy[k];
    }

    for (int i = 19; i < 1000; i+=20)
    {
        haslo += napisy[i][w];
        w++;
    }
    
    cout << haslo;
    
}