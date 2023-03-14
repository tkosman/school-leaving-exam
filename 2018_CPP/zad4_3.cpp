#include <iostream>
#include <fstream>

using namespace std;

bool test_napisu;
string napis;

bool czy_odleglosc(char znak1, char znak2)
{
    if(znak1 > znak2)
    {
        int temp = znak1;
        znak1 = znak2;
        znak2 = temp;
    }
    if(znak2 - znak1 <=10)
        return true;
    else
        return false;
}


int main()
{
    fstream we("sygnaly.txt");

    for(int k = 0; k < 1000; k++)
    {
        we >> napis;

        test_napisu = true;

        for(int i = 0; i < napis.size(); i++)
        {
            for (int j = 0; j < napis.size(); j++)
            {
                if(i != j)
                {
                    if(czy_odleglosc(napis[i], napis[j]) == false)  
                        test_napisu = false;
                }
            }
            
        }
        if(test_napisu == true)
            cout << napis << endl;
    }   

}