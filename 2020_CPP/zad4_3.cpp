#include <iostream>
#include <fstream>

using namespace std;

int liczba, liczba_poprzednia, licznik;

char znak1, znak2;

string slowo, slowo_poprzednie;

int liczby[100];
string slowa[100];

//czy pierwsze jest mniejsze niz drugie

bool czy_mniejsza(int liczba1, string slowo1, int liczba2, string slowo2)
{
    if(liczba1 < liczba2)
        return true;
    if(liczba1 > liczba2)
        return false;
    
    if(liczba1 == liczba2)
    {
        for(int i = 0; i < slowo1.size(); i++)
        {
            znak1 = slowo1[i];
            znak2 = slowo2[i];

            if(znak1 != znak2)
            {
                if(znak1 < znak2)
                    {
                        return true;
                    }
                    
                else
                    return false;

            }
        }
        
    }

    return "BLAD";
}

int main()
{
    ifstream we("pary.txt");

    bool flaga = true;
    int wskaz = 0 ;
    for(int k = 0; k < 100; k++)
    {
            we >> liczba;
            we >> slowo;

            if(liczba == slowo.size())
            {
                liczby[wskaz] = liczba;
                slowa[wskaz] = slowo;
                wskaz++;
            }
            
        
    }
    
    

    for (int i = 0; i < wskaz; i++)
    {
        licznik = 0;
        for (int j = 0; j < wskaz; j++)
        {
            if(i != j)
            {
                
                if(czy_mniejsza(liczby[i], slowa[i], liczby[j], slowa[j]) == true)
                {
                    licznik++;
                    //cout << liczby[i] << " " << slowa[i]<< " " << liczby[j]<< " " << slowa[j] << endl;
                }
            }
        }
        if(licznik == wskaz-1)
            cout << liczby[i] << " " << slowa[i] << endl;
    }
       
        
    

  


}