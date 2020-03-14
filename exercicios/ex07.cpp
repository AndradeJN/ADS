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
	int  TQ, ALTURA;
    const double G = 9.8;
    
    
    TQ = 0;
	ALTURA = 0;
    cout <<"Por favor entre com o valor tempo: ";
    cin >> ALTURA;
    TQ = (2 * ALTURA) / G;
    cout << "\nO valor em TQ é de: " << TQ << "\n";
    //system("pause");
    return (0);
}