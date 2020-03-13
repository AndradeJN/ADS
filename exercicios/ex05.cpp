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
	int  base, altura, area;
    
    base = 0;
	altura = 0;
	area = 0;
    cout <<"Por favor entre com o valor da altura: ";
    cin >> altura;
    cout <<"Por favor entre com o valor da base: ";
    cin >> base;
    area = base * altura;
    cout << "\nA área é igual a: " << area << "\n";
    //system("pause");
    return (0);
}