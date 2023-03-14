#include <iostream>
#include <fstream>

using namespace std;

string kody[10] = {"10101110111010", "11101010101110", "10111010101110", "11101110101010", 
"10101110101110", "11101011101010", "10111011101010", "10101011101110", "11101010111010", "10111010111010"};

string start = "11011010";
string stop = "11010110";

int liczba, rozklad;

int main()
{
    ifstream we("kody.txt");
    ofstream zad1("wyniki1.txt");
    ofstream zad2("wyniki2.txt");
    ofstream zad3("wyniki3.txt");

    for (int i = 0; i < 500; i++)
    {
        string wynik = start;

        int suma_parzyste = 0, suma_nieparzyste = 0, k = 0, suma = 0;

        we >> liczba;

        rozklad = liczba;

        while(rozklad > 0)
        {
            int czynnik = rozklad % 10;

            if(k % 2 == 0)
                suma_parzyste += czynnik;
            else
                suma_nieparzyste += czynnik;

            wynik += kody[czynnik];

            rozklad /= 10;

            k++;
        }
        
        suma = suma_parzyste * 3 + suma_nieparzyste;

        suma %= 10;
        suma = 10 - suma;
        suma %= 10;

        wynik += kody[suma];

        wynik += stop;

        zad1 << suma_parzyste << " " << suma_nieparzyste << endl;
        zad2 << suma << " " << kody[suma] << endl;
        zad3 << wynik << endl;
    }

    
    

}