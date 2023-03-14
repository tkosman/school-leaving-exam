#include <iostream>
#include <fstream>

using namespace std;

int liczba, licznik, maks;

string slowo, literka;

int main()
{
    ifstream we("pary.txt");

    for(int k = 0; k < 100; k++)
    {
        we >> liczba;
        we >> slowo;
        licznik = 1;
        maks = 0;
        for(int i = 1; i <= slowo.size(); i++)
        {
            if(slowo[i-1] == slowo[i])
            {
                licznik++;
            }
            else
            {
                if(licznik > maks)
                {
                    maks = licznik;
                    literka = slowo[i-1];
                }
                licznik = 1;
            }
        }
        
        for(int j = 0; j < maks; j++)
            cout << literka;
        cout << " " << maks << endl;
    }
}