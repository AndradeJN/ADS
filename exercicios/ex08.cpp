#include <iostream>
#include <stdio.h>
using namespace std;

/**
 * Jose Andrade
 * Analise e Desenvolvimento de Sistemas
 * FATEC Zona SUL
 * Professor Elizeu - Linguagem de Programação (c++)
**/

int     main(void)
{
    setlocale(LC_ALL,"");
    system("cls");
	double diametro, perimetro, raio, area;
    const double pi = 3.1415;
    
    
    diametro = 0;
    perimetro = 0;
    raio = 0;
    area = 0;
    cout <<"Por favor entre com o valor diametro: ";
    cin >> perimetro;
    diametro = perimetro / 2;
    raio = diametro / 2;
    area = raio * raio * pi;
    int TQ = area;
    cout << "\nO valor em TQ é de: " << TQ << "\n";
    //system("pause");
    return (0);
}