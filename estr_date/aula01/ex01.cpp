
#include "iostream"
#include "math.h"
using namespace std;

int main ()
{
    int x [] = {1, 0, -1};

    int n = sizeof(x)/sizeof(int);

    int aux = 0;

    for (int i =0; i < n; i++)
    {
        aux = pow(x[i], 2) + x[i];
        cout << aux << endl;
    }
}

double cor();