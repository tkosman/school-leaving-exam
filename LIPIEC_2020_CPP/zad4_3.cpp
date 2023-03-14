#include <iostream>
#include <fstream>

using namespace std;

string id;

int kontrolna, wartosc;

int wagi[9] = {7, 3, 1, 0, 7, 3, 1, 7, 3};

bool czy_id_poprawny(string id)
{
    wartosc = 0;
    kontrolna = int(id[3]) - 48;

    for (int i = 0; i < 3; i++)
    {
        wartosc += int(id[i] - 55) * wagi[i];      
    }
    for (int i = 4; i < 9; i++)
    {
        wartosc += (int(id[i]) - 48) * wagi[i];
    }
    
    wartosc %= 10;

    if(wartosc == kontrolna)
        return true;
    else
        return false;

    
    
    
}

int main()
{
    fstream we("identyfikator.txt");

    for (int k = 0; k < 200; k++)
    {
        we >> id;

        if(czy_id_poprawny(id) == false)
            cout << id << endl;;

    }
}