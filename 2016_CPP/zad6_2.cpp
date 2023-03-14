#include <iostream>
#include <fstream>

using namespace std;

int k;

string wyraz;
char znak;

int wynik, ile;

int main()
{
    ifstream we("dane_6_2.txt");

    for (int x = 0; x < 3000; x++)
    {
        we >> wyraz;
        we >> k;

        k %= 26;

        for (int i = 0; i < wyraz.size(); i++)
        {
            znak = wyraz[i];
            znak -= k;

            if(znak < 65)
                znak += 26;

            wyraz[i] = znak;
            
        }
        
        cout << wyraz << endl;
    }

    
    
}