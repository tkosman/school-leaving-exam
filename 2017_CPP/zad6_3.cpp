#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int jasnosc[320][200];
int licznik;

bool poprawnosc [320][200];

bool czy_kontrastujace(int a, int b)
{
    if(abs(a-b) > 128)
        return true;
    return false;
}

int main()
{
    fstream we("dane.txt");

    for(int i = 0; i < 200; i++)
        for(int j = 0; j < 320; j++)
        {
            we >> jasnosc[j][i];
        }

    for(int i = 0; i < 200; i++)
    {
        int ile = 0;
        for(int j = 1; j < 320; j++)
        {
            if(czy_kontrastujace(jasnosc[j][i], jasnosc[j-1][i]) == true)
            {
                poprawnosc[j][i] = true;
                poprawnosc[j-1][i] = true;
            }   
        }
    }
    for(int i = 0; i < 320; i++)
    {
        for(int j = 1; j < 200; j++)
        {
            if(czy_kontrastujace(jasnosc[i][j], jasnosc[i][j-1]) == true)
            {
                poprawnosc[i][j] = true;
                poprawnosc[i][j-1] = true;
            }
                
        }
    }
    
    for(int i = 0; i < 320; i++)
    {
        for(int j = 1; j < 200; j++)
        {
            if(poprawnosc[i][j] == true)
             licznik++;
                
        }
    }

    cout << licznik;
        
}