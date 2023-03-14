#include <iostream>
#include <fstream>

using namespace std;

int liczba1, liczba2, licznik;

int main()
{
    ifstream dane1("dane1.txt");
    ifstream dane2("dane2.txt");

    for (int k = 0; k < 1000; k++)
    {
        for (int i = 0; i < 10; i++)
        {
            dane1 >> liczba1;
            dane2 >> liczba2;

            if(i == 9 && liczba1 == liczba2)
                licznik++;
            
        }
        
    }

    cout << licznik;
    
}
