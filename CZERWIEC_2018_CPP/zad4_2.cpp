#include <iostream>
#include <fstream>

using namespace std;

int liczba1, liczba2, licznik, p1, p2, np1, np2;

int main()
{
    ifstream dane1("dane1.txt");
    ifstream dane2("dane2.txt");

    for (int k = 0; k < 1000; k++)
    {
        p1 = 0;
        p2 = 0;
        np1 = 0;
        np2 = 0;

        for (int i = 0; i < 10; i++)
        {
            dane1 >> liczba1;
            dane2 >> liczba2;

            if(liczba1 % 2 == 0) 
                p1++;
            else 
                np1++;

            if(liczba2 % 2 == 0) 
                p2++;
            else 
                np2++;


            
            
        }
        if(p1 == 5 && p2 == 5 && np1 == 5 && np2 == 5)
            licznik++;
    }

    cout << licznik;
    
}
