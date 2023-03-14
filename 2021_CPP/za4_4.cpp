#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string napis, komenda, nowa, pusty = "";

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
            napis += nowa;
        }
        if(komenda == "ZMIEN")
        {
            napis[napis.size()-1] = nowa[0];
        }
        if(komenda == "USUN")
        {
            napis.erase(napis.size()-1,1);
        }
        if(komenda == "PRZESUN")
        {
            int i = 0;
            bool flaga = true;
            while(flaga)
            {
                if(napis[i] == nowa[0])
                    {
                        znak = napis[i];
                        if(znak == 'Z')
                            napis[i] = 'A';
                        else
                            napis[i] = znak+1;

                        flaga = false;
                    }
                i++;
            }
        }
    } 

    cout << napis;

}