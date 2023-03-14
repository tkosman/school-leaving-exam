#include <iostream>
#include <fstream>

using namespace std;

string napis, caly_napis, maks_wyraz;
int licznik = 0, maks;

bool sumaLiter[26];

int main()
{
    fstream we("sygnaly.txt");

    for(int i = 0; i < 1000; i++)
    {
        we >> napis;
        for(int k = 0; k < napis.size(); k++)
        {
            sumaLiter[int(napis[k]- 65)] = true;
        }

        for (int k = 0; k < 26; k++)
        {
            if(sumaLiter[k] == true)
                licznik++;
        }

        if(licznik > maks)
        {
            maks = licznik;
            maks_wyraz = napis;
        }
        licznik = 0;

        for (int k = 0; k < 26; k++)
        {
            sumaLiter[k] = false;
        }
        
    }
    cout << maks_wyraz << " " << maks;
}