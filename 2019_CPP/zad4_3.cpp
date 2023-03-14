#include <iostream>
#include <fstream>

using namespace std;

int dzielnik, licznik=1, maks, maks_dzielnik, indeks, naj_nwd;
int liczby[500];

bool poprzednia = false;

int nwd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return nwd(b, a%b);


}

bool czy_wspolny_wiekszy_1(int a, int b)
{
    if(nwd(a,b) > 1)
        return true;
    else 
        return false;
}

int main()
{
    fstream we("liczby.txt");

    for (int i = 0; i < 500; i++)
    {
        we >> liczby[i];
    }

    
    
    for (int i = 2; i < 500; i++)
    {
        if(czy_wspolny_wiekszy_1(liczby[i-2], liczby[i-1]) == true)
            poprzednia = true;
        else 
            poprzednia = false;

        if(czy_wspolny_wiekszy_1(liczby[i-1], liczby[i]) == true && poprzednia == true)
        {
            licznik++;
        }
        else
        {
            if(licznik > maks)
            {
                maks = licznik;
                indeks = i;
            }
                

            licznik = 1;
        }
        
    }
    cout << liczby[indeks- maks] << " " << maks << " " << nwd(liczby[indeks- maks], liczby[indeks- maks+1]);
    



    


    

    
}