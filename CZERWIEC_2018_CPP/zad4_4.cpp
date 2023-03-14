#include <iostream>
#include <fstream>

using namespace std;

int liczby1[10][1000], liczby2[10][1000], scalone[20][1000];

int main()
{
    ifstream dane1("dane1.txt");
    ifstream dane2("dane2.txt");

    ofstream wy("wyniki4.txt");

    for (int k = 0; k < 1000; k++)
    {

        for (int i = 0; i < 10; i++)
        {
            dane1 >> liczby1[i][k];
            dane2 >> liczby2[i][k];
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        //cout << liczby2[i][0] << " ";
    }
    

    for (int y = 0; y < 1000; y++)
    {
        int pc = 0, dc = 0, pozycja = 0;

        while(pozycja != 20)
        {
            if(pc == 10)
            {
                scalone[pozycja][y] = liczby2[dc][y];
                
                pozycja++;
                dc++;
                
            }
            else if(dc == 10)
            {
                scalone[pozycja][y] = liczby1[pc][y];
                
                pozycja++;
                pc++;
                
            }
            else if(liczby1[pc][y] >= liczby2[dc][y])
            {
                scalone[pozycja][y] = liczby2[dc][y];
               
                dc++;
                pozycja++;
                
            }
            else
            {
                scalone[pozycja][y] = liczby1[pc][y];
                
                pc++;
                pozycja++;

            }
        }
        
    }
    
    for (int y = 0; y < 1000; y++)
    {
        for (int x = 0; x < 20; x++)
        {
            wy << scalone[x][y] << " ";
        }
        wy << endl;
    }
    

}
