#include <iostream>
#include <fstream>

using namespace std;

string wyraz1, wyraz2;
bool flaga;

int poprzednie_k;

int jakie_k(char slowo, char szyfrogram)
{
    if(slowo > szyfrogram)
        return szyfrogram + 26 - slowo;
    else
        return szyfrogram - slowo;
}

int main()
{
    ifstream we("dane_6_3.txt");

    for (int x = 0; x < 3000; x++)
    {
        we >> wyraz1;
        we >> wyraz2;

        poprzednie_k = jakie_k(wyraz1[0], wyraz2[0]);
        flaga = true;

        for (int i = 1; i < wyraz1.size(); i++)
        {
            if(jakie_k(wyraz1[i], wyraz2[i]) == poprzednie_k)
            {
                poprzednie_k = jakie_k(wyraz1[i], wyraz2[i]);
            }
            else if(flaga == true)
            {
                cout << wyraz1 << " " << wyraz2 << endl;
                flaga = false;
            }
            
        }
        
    }

    
    
}