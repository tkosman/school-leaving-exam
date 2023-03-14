#include <iostream>
#include <fstream>

using namespace std;

string napis;

int licznik;

int main()
{
    ifstream we("napisy.txt");

    for (int k = 0; k < 1000; k++)
    {
        we >> napis;

        for(int i = 0; i < 50; i++)
        {
            if (napis[i] == '0' || napis[i] == '1' || napis[i] == '2' || napis[i] == '3' 
            ||napis[i] == '4' ||napis[i] == '5' ||napis[i] == '6' ||napis[i] == '7' ||napis[i] == '8' ||napis[i] == '9')
            {
                licznik++;
            }
            
        }
    }

    cout << licznik;
    
}