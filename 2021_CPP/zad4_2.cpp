#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string komenda_maks, komenda, nowa, poprzedni;

char znak;

int licznik = 1, maks = 0;;

int main()
{
    ifstream we("instrukcje.txt");

    we >> poprzedni;
    we >> nowa;

    komenda_maks = poprzedni;

    for(int i = 1; i < 2000; i++)
    {
        we >> komenda;
        we >> nowa;
        if(poprzedni == komenda)
        {
            licznik++;
            poprzedni = komenda;
        }
        else
        {

            if(licznik > maks)
                {
                    maks = licznik;
                    komenda_maks = poprzedni;

                }
                
            licznik = 1;
            poprzedni = komenda;
        }
    } 

    cout << maks << " " <<komenda_maks;

}