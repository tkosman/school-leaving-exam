#include <iostream>
#include <fstream>

using namespace std;

int liczba, licznik, potega = 1;

bool czy_potega(int liczba)
{
    if(liczba == 1)
        return true;

    potega = 1;
    while(liczba != potega)
    {
        if(potega > liczba)
            return false;
        
        potega *=3;
    }
    return true;
}

int main()
{
    fstream we("liczby.txt");

    for(int i = 0; i < 500; i++)
    {
        we >> liczba;

        if(czy_potega(liczba) == true)
        {
            licznik++;
            cout << liczba<<endl;
        }
            
        
    }
    cout << licznik;
    //cout << czy_potega(54);
}