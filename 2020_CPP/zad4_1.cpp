#include <iostream>
#include <fstream>

using namespace std;

int liczba, druga;

string slowo;

bool czy_pierwsza(int x)
{
    if(x == 2)
        return false;

    for(int i = 3; i * i <= x; i++)
    {
        if(x % i == 0)
            return false;
    }

    return true;
}

int main()
{
    ifstream we("pary.txt");

    for(int k = 0; k < 100; k++)
    {
        we >> liczba;
        we >> slowo;
        if(liczba % 2 == 0)
        {
            for (int i = 3; i < liczba; i+=2)
            {
                druga = liczba - i;
                if(czy_pierwsza(i) == true && czy_pierwsza(druga) == true)
                {
                    if(i > druga)
                    {
                        cout << liczba << " " << druga << " " << i << endl;
                    }
                    else{
                        cout << liczba << " " << i << " " << druga << endl;
                    }
                    break;
                }

            }
        }
        
        
    }
}