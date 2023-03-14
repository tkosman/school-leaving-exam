#include <iostream>
#include <fstream>

using namespace std;

long liczba, zapis;

long jaki_system , najwieksza, najmniejsza = 3000000, zapis_najwieksza, zapis_najmniejsza;

long na_10(long liczba , int podstawa)
{
    int potega = 1;
    long wynik = 0;

    while (liczba > 0)
    {
        wynik += (liczba % 10) * potega;

        potega *= podstawa;
        liczba /= 10;
    }

    return wynik;
    
}

int main()
{
    ifstream we("liczby.txt");
    ofstream wy("wyniki_6_4.txt");

    for (int i = 0; i < 999; i++)
    {
        we >> liczba;

        jaki_system = liczba % 10;
        zapis = liczba;
        liczba /= 10;

        liczba = na_10(liczba, jaki_system);

        if(liczba > najwieksza)
        {
            zapis_najwieksza = zapis;
            najwieksza = liczba;
        }
        if(liczba < najmniejsza)
        {
            zapis_najmniejsza = zapis;
            najmniejsza = liczba;
        }

        
    }

    wy << najmniejsza << " " << zapis_najmniejsza << endl << najwieksza << " " << zapis_najwieksza;

}