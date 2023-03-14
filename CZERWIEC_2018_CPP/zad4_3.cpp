#include <iostream>
#include <fstream>

using namespace std;

int liczba1, liczba2, licznik, zapisana;
string ciagi;

bool zuzyte1[100];
bool zuzyte2[100];

void zerowanie_tablic()
{
    for (int i = 0; i < 100; i++)
    {
        zuzyte1[i] = 0;
        zuzyte2[i] = 0;
    }
}

bool czy_taka_sama()
{
    for (int i = 0; i < 100; i++)
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
    ifstream dane1("dane1.txt");
    ifstream dane2("dane2.txt");

    for (int k = 0; k < 1000; k++)
    {
        zerowanie_tablic();

        for (int i = 0; i < 10; i++)
        {
            dane1 >> liczba1;
            dane2 >> liczba2;

            zuzyte1[liczba1-1] = true;
            zuzyte2[liczba2-1] = true;

        }

        if(czy_taka_sama() == true)
        {
            licznik++;
            cout << k+1 << " ";
            
        }
    }
    cout << endl;
    cout << licznik;
}
