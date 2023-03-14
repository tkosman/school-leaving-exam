#include <iostream>
#include <fstream>

using namespace std;

string liczba, maks_liczba;

int potega, wynik, najmnijsza_indeks, najw_indeks, maks_dlugosc;

int liczby[1000];

/*int na_10(string liczba)
{
    potega = 1;
    wynik = 0;

    for (int i = liczba.size()-1; i >= 0; i--)
    {
        if(liczba[i] == '1')
            wynik += potega;
        
        potega *= 2;
        cout << potega << endl;
    }
    return wynik;
    
}*/

int main()
{
    fstream we("liczby.txt");

    we >> maks_liczba; 
    maks_dlugosc = liczba.size(); 

    for(int k = 1; k < 1000; k++)
    {
        we >> liczba; 
        if(liczba.size() >= maks_dlugosc)
        {
            for (size_t i = 0; i < count; i++)
            {
                /* code */
            }
            
        }   
    } 
}