#include <iostream>
#include <fstream>

using namespace std;

string liczba;

int licznik;

bool czy_wystepuje_0(string liczba)
{
    for (int i = 0; i < liczba.size(); i++)
    {
        if(liczba[i] == '0')
            return true;
    }

    return false;
    
}

int main()
{
    ifstream we("liczby.txt");

    for (int i = 0; i < 999; i++)
    {
        we >> liczba;
        
        if(liczba[liczba.size() - 1] == '4')
        {
            liczba.erase(liczba.size()-1, 1);

            if(czy_wystepuje_0(liczba) == false)
                licznik++;
        }
    }

    cout << licznik;
    
}