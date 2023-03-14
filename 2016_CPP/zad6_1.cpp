#include <iostream>
#include <fstream>

using namespace std;

int k = 3;

string wyraz;
char znak;

int wynik, ile;

int main()
{
    ifstream we("dane_6_1.txt");

    for (int x = 0; x < 100; x++)
    {
        we >> wyraz;

        for (int i = 0; i < wyraz.size(); i++)
        {
            znak = wyraz[i];
            wynik = znak + k;

            if(wynik <= 90)
            {  
                znak = znak + k;
            }
               
            else
            {
                ile = wynik % 26;
                znak = ile;
            }
            
            wyraz[i] = znak;
            
        }
        
        cout << wyraz << endl;
    }

    
    
}