#include <iostream>
#include <stdio.h>
using namespace std;

/**
 * Jose Andrade
 * Analise e Desenvolvimento de Sistemas
 * FATEC Zona SUL
 * Professor Elizeu - Linguagem de Programação (c++)
**/

int     main()
{
    setlocale(LC_ALL,"");
    system("cls");
    int c; //Recebe o valor em Celcius
    int f; //Recebe o valor em Fahrenheit

    c = 0;
    f = 0;
    cout << "Coversor de Celcius para Fahrenheit\n";
    cout <<"Por favor entre com um numero em ºC: ";
    cin >> c;
    f = c * 9 / 5 + 32;
    cout << "\n " << c <<" ºC equivalem a " << f << " ºF. \n";
    //system("pause");
    return (0);
}