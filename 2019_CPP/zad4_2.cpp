#include <iostream>
#include <fstream>

using namespace std;

int liczba, licznik, suma, sprawdzenie;

int silnia(int liczba)
{
    if(liczba == 0)
        return 1;
    
    int wynik = 1;

    for (int i = 1; i <= liczba; i++)
    {
        wynik = wynik*i;
    }
    
    return wynik;
}

int main()
{
    fstream we("liczby.txt");

    for(int i = 0; i < 500; i++)
    {
        we >> liczba;
        suma = 0;
        sprawdzenie = liczba;
        
        while(liczba > 0)
        {
            suma += silnia(liczba % 10);
            liczba /= 10;
        }

        if(sprawdzenie == suma)
            cout << sprawdzenie << endl;
    }
}