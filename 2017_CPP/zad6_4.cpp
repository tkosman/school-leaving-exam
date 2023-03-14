#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int jasnosc[320][200];
int licznik, maks;

int main()
{
    fstream we("dane.txt");

    for(int i = 0; i < 200; i++)
        for(int j = 0; j < 320; j++)
        {
            we >> jasnosc[j][i];
        }
    
    for(int i = 0; i < 320; i++)
    {
        licznik = 1;
        for(int j = 1; j < 200; j++)
        {
            if(jasnosc[i][j] == jasnosc[i][j-1])
                licznik++;
            else
            {
                if(licznik > maks)
                    maks = licznik;
                
                licznik = 1;
            }
        }
    }
    cout << maks;
        
    
        
}