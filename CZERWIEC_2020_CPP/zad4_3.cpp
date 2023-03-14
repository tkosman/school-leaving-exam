#include <iostream>
#include <fstream>

using namespace std;

int numer, licznik;

int sumacyfr(int liczba)
{
    int suma = 0;
    while (liczba > 0)
    {
        suma += liczba % 10;

        liczba /= 10;
    }

    return suma;
}

int waga_liczby(int liczba)
{
    liczba = sumacyfr(liczba);
    if(liczba / 10 == 0)
        return liczba;
    else
        return waga_liczby(liczba);
}

int main()
{
    fstream we("pierwsze.txt");

    for (int i = 0; i < 200; i++)
    {
        we >> numer;

        if (waga_liczby(numer) == 1)
            licznik++;
        
    }

    cout << licznik;
    
}