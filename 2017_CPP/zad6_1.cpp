#include <iostream>
#include <fstream>

using namespace std;

int naj = 0, minimum = 255, jasnosc;

int main()
{
    fstream we("dane.txt");

    for(int i = 0; i < 200; i++)
        for(int j = 0; j < 320; j++)
        {
            we >> jasnosc;

            if(jasnosc > naj)
                naj = jasnosc;
            if(jasnosc < minimum)
                minimum = jasnosc;
        }
    
    cout << naj << " " << minimum;
}