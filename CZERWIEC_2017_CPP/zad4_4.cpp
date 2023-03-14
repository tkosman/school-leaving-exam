#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int punkty[2][1000];
int a, b, c;

int main()
{
    ifstream we("punkty.txt");
    for (int i = 0; i < 1000; i++)
    {
        for (int k = 0; k < 2; k++)
        {
            we >> punkty[k][i];
        }
    }

    for (int i = 0; i < 1000; i++)
    {
        //nalezy
        if(punkty[0][i] == 5000 || punkty[1][i] == 5000)
            b++;
        
        //na zewnatrz
        else if(punkty[0][i] > 5000 || punkty[1][i] > 5000)
            c++;
        else 
            a++;
    }
    
    
    cout << a << " " << b << " " << c;
    
}