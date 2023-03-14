#include <iostream>
#include <fstream>

using namespace std;

string liczba;

int potega, wynik, numer, przez_2, przez_8;

int na_10(string liczba)
{
    potega = 1;
    wynik = 0;

    for (int i = liczba.size()-1; i >= 0; i--)
    {
        if(liczba[i] == '1')
            wynik += potega;
        
        potega *= 2;
    }
    return wynik;
    
}

int main()
{
    fstream we("liczby.txt");

    for(int k = 0; k < 1000; k++)
    {
        we >> liczba;
        
        numer = na_10(liczba);

        if(numer % 2 == 0)
            przez_2++;
        if(numer % 8 == 0)
            przez_8++;
    } 

    cout << przez_2 << " " << przez_8;
    

}