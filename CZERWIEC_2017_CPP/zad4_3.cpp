#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int punkty[2][1000];
int dystans, maks, wspol1, wspol2;

int odleglosc(int x1, int y1, int x2, int y2)
{
    int iksy = abs(x1 - x2) * abs(x1-x2);
    int igreki = abs(y1 - y2) * abs(y1-y2);

    return sqrt(iksy + igreki);
}

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

    for (int k = 0; k < 1000; k++)
    {
        for (int i = 0; i < 1000; i++)
        {
            if (i != k)
            {
                dystans = odleglosc(punkty[0][i], punkty[1][i], punkty[0][k], punkty[1][k]);

                if (dystans > maks)
                {
                    maks = dystans;
                    wspol1 = i;
                    wspol2 = k;
                }
                
                
            }
            
        }
        
    }

    cout << maks << endl << punkty[0][wspol1] << " " << punkty[1][wspol1] << endl << punkty[0][wspol2] << " " << punkty[1][wspol2];
    

    
}