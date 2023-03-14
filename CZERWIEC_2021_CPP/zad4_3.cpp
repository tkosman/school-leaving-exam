#include <iostream>
#include <fstream>

using namespace std;

string napis, haslo;

char czy_palindrom_L(string wyraz)
{
    bool czy_jest = true;

    for (int i = 0; i < wyraz.size()/2-1; i++)
    {
        if(wyraz[i] != wyraz[wyraz.size()-i-2])
        {
            czy_jest = false;

        }
    }

    if(czy_jest == true)
        return wyraz[wyraz.size()/2-1];
    else
        return '&';

}

char czy_palindrom_P(string wyraz)
{
    bool czy_jest = true;
    for (int i = 1; i < wyraz.size()/2-1; i++)
    {
        if(wyraz[i] != wyraz[wyraz.size()-i])
        {
            czy_jest = false;
            
        }
    }

    if(czy_jest == true)
        return wyraz[wyraz.size()/2];
    else
        return '&';

}

int main()
{
    ifstream we("napisy.txt");

    for (int k = 0; k < 1000; k++)
    {
        we >> napis;

        if(czy_palindrom_L(napis) != '&')
            haslo += czy_palindrom_L(napis);
        if(czy_palindrom_P(napis) != '&')
            haslo += czy_palindrom_P(napis);
    }
    cout << haslo;

    
    
}