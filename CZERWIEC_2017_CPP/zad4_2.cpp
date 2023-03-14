#include <iostream>
#include <fstream>

using namespace std;

int x, y, licznik;

bool zuzyte1[10];
bool zuzyte2[10];

bool czy_cyfropodobne(int liczba1, int liczba2)
{
    for (int i = 0; i < 10; i++)
    {
        zuzyte1[i] = false;
        zuzyte2[i] = false;
    }

    int cyfra;
    while (liczba1 > 0)
    {
        cyfra = liczba1 % 10;
        zuzyte1[cyfra] = true;

        liczba1 /= 10;
    }

    while (liczba2 > 0)
    {
        cyfra = liczba2 % 10;
        zuzyte2[cyfra] = true;

        liczba2 /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (zuzyte1[i] != zuzyte2[i])
        {
            return false;
        }
        
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
        
        if (czy_cyfropodobne(x, y) == true)
        {
            licznik++;
        }
        
    }

    cout << licznik;

    
}