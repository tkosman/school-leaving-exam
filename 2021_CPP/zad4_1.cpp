#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string napis="A", komenda, nowa, pusty = "";

char znak;

int licznik = 0;

int main()
{
    ifstream we("instrukcje.txt");

    for(int i = 0; i < 2000; i++)
    {
        we >> komenda;
        we >> nowa;
        if(komenda == "DOPISZ")
        {
            licznik++;
        }
        if(komenda == "ZMIEN")
        {
            
           
        }
        if(komenda == "USUN")
        {
            licznik--;
        }
        if(komenda == "PRZESUN")
        {
          
        }
    } 

    cout << licznik;

}