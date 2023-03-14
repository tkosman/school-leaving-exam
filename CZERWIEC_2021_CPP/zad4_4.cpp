#include <iostream>
#include <fstream>

using namespace std;

string napis, haslo;

long wynik = 0, licznik_x = 0;


int main()
{
    ifstream we("napisy.txt");

    for (int k = 0; k < 1000; k++)
    {
        we >> napis;
        wynik = 0;
        string liczba;

        for (int i = 0; i < 50; i++)
        {
            if(int(napis[i]) > 47 && int(napis[i])<58)
            {
                liczba += napis[i];
            }
                
        }

        if(liczba.size()%2 != 0)
            liczba.erase(liczba.size()-1,1);

        if(liczba.size() > 0)
        {
            for(int i = 0; i < liczba.size()-1; i += 2)
            {
                wynik = (int(liczba[i]) - 48) * 10;
                wynik += int(liczba[i+1] - 48);

                if(wynik == 88)
                    licznik_x++;
                
                if(wynik>=65 && wynik <=90 && licznik_x < 4)
                    haslo += char(wynik);  

                if (licznik_x == 3)
                {
                    cout << haslo;
                    return 0;
                }
                 
            }
        } 
    }  
    
}