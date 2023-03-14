#include <iostream>
#include <fstream>

using namespace std;

string liczba;

int licznik;

int main()
{
    ifstream we("liczby.txt");

    for (int i = 0; i < 999; i++)
    {
        we >> liczba;
        
        if (liczba[liczba.size() - 1] ==  '8')
        {
            licznik++;
        }
        
    }

    cout << licznik;
    
}