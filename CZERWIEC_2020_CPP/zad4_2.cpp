#include <iostream>
#include <fstream>

using namespace std;

int number;

bool czy_pierwsza(int liczba)
{
    for (int i = 2; i * i <= liczba; i++)
    {
        if(liczba % i == 0)
            return false;
    }
    return true;
    
}

int odwrotnosc(int liczba)
{
    int wynik = 0;
    int potega = 1;
    int temp = liczba;

    while(temp != 0)
    {
        potega *=10;
        temp /=10;
    }
    potega /= 10;   

    while(liczba > 0)
    {
        wynik += (liczba % 10) * potega;

        liczba /= 10;
        potega /= 10;
    }

    return wynik;
}

int main()
{
    fstream we("pierwsze.txt");

    for (int i = 0; i < 200; i++)
    {
        we >> number;

        if(czy_pierwsza(odwrotnosc(number)) == true)
            cout << number << endl;
    }
    
}