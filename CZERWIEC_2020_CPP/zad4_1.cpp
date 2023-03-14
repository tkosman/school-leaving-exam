#include <iostream>
#include <fstream>

using namespace std;

int number;

bool czy_pierwsza(int liczba)
{
    if(liczba < 100 || liczba > 5000)
        return false;

    for (int i = 2; i * i <= liczba; i++)
    {
        if(liczba % i == 0)
            return false;
    }
    return true;
    
}

int main()
{
    fstream we("liczby.txt");

    for (int i = 0; i < 300; i++)
    {
        we >> number;

        if(czy_pierwsza(number) == true)
            cout << number << endl;
    }
    
}