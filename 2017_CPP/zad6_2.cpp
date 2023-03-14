#include <iostream>
#include <fstream>

using namespace std;

int jasnosc[320][200];

int licznik;
bool niezgodnosc;

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
        niezgodnosc = false;
        for(int j = 0; j < 160; j++)
        {
            if(jasnosc[j][i] != jasnosc[319-j][i])
            {
                niezgodnosc = true;
            }    
        }

        if(niezgodnosc == true)
            licznik++;
    }
        

    cout << licznik;
}