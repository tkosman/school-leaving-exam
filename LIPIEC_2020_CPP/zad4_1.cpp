#include <iostream>
#include <fstream>

using namespace std;

string id, maks_id;

int suma, maks_suma;

int maks_sumy[200];
string maks_idiki[200];

int main()
{
    fstream we("identyfikator.txt");

    for (int k = 0; k < 200; k++)
    {
        we >> id;
        suma = 0;

        for (int i = 3; i < 9; i++)
        {
            suma += int(id[i]) - 48;
            
        }
        
        maks_sumy[k] = suma;
        maks_idiki[k] = id;

        if(suma > maks_suma)
        {
            maks_suma = suma;
            maks_id = id;
        }
    }
    for (int i = 0; i < 200; i++)
    {
        if(maks_sumy[i] == maks_suma)
        {
            cout << maks_idiki[i] << endl;
        }
    }
    
}