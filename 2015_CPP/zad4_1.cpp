#include <iostream>
#include <fstream>

using namespace std;

string liczba;

int jedynki, zera, licznik;

int main()
{
    fstream we("liczby.txt");
    ofstream wy("wyniki_4_1.txt");

    for(int k = 0; k < 1000; k++)
    {
        we >> liczba;

        jedynki = 0;
        zera = 0;

        for(int i = 0; i < liczba.size(); i++)
        {
            if(liczba[i] == '1')
                jedynki++;
            else
                zera++;

            
        }
        if(zera > jedynki)
                licznik++;
    }

    wy << licznik;
}