#include <iostream>
#include <fstream>

using namespace std;

int liczba, licznik, maks;

int A[4] = {8,2,3,4};

string slowo = "cba", literka;

int main()
{
    sort(A, A+4);
    
    for(int i = 0; i < 4; i++)
        cout << A[i] << " ";
}