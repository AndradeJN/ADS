
#include "iostream"
#include "math.h"
using namespace std;

int vet [] = { 1, 3, 4, -1, 0, 4, 19, 20, 21, -5 };

float valorMedia ( )
{
    float media = 0;
    int tot = sizeof( vet ) / sizeof ( int );
    for (int i = 0; i < tot; i++)
    {
        media += vet [ i ];
        cout << media << endl;
        system("sleep 1");
    }
    media /= tot; // media = media / tot;
    return ( media );
}

int main ()
{
    float media = valorMedia();
    cout << endl << media << endl;
    system("sleep 3");
    return 0;
}