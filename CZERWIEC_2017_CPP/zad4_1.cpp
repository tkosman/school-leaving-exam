#include <iostream>
#include <fstream>

using namespace std;

int x, y, licznik;

bool czy_pierwsza(int liczba)
{
     for (int i = 2; i * i <= liczba; i++)
     {
         if(liczba % i == 0)
            return false;
     }

     return true;
     
}

int main()
{
    ifstream we("punkty.txt");
    for (int i = 0; i < 1000; i++)
    {
        we >> x;
        we >> y;

        if (czy_pierwsza(x) == true && czy_pierwsza(y) == true)
            licznik++;
        
    }

    cout << licznik;

    
}