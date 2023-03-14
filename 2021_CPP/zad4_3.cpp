#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string komenda, litera;

char kod;

int WYNIKI[26];

int licznik = 1, maks = 0, indeks;

int main()
{
    ifstream we("instrukcje.txt");

    for(int i = 0; i < 2000; i++)
    {
        we >> komenda;
        we >> litera;
        if(komenda == "DOPISZ")
        {
            kod = litera[0];
            WYNIKI[kod-65]++;
            
        }
        
    } 

    maks = WYNIKI[0];

    for(int i = 1 ; i < 26; i++)
    {
        if(WYNIKI[i] > WYNIKI[i-1])
        {
            maks = WYNIKI[i];
            indeks = i;
        }
    }
    cout << maks << " " << char(indeks+65);



}