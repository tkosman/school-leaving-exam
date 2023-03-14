#include <iostream>
#include <fstream>

using namespace std;

string id;

bool czy_palindrom(string id)
{
    if(id[0] == id[2])
        return true;
    
    for (int i = 3; i < 6; i++)
    {
        if(id[i] != id[11 - i])
            return false;
    }
    return true;
    
    
}

int main()
{
    fstream we("identyfikator.txt");

    for (int k = 0; k < 200; k++)
    {
        we >> id;

        if(czy_palindrom(id) == true)
            cout << id << endl;
    }

    //cout << czy_palindrom("MOS302203");
    
}