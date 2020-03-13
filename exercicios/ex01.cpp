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
	int vol, raio, altura;
    int const pi = 3.14159;

	vol = 0;
    raio = 0;
    altura = 0;
	
    cout <<"Por favor entre com o valor do raio: ";
    cin >> raio;
    cout <<"Por favor entre com a altura: ";
    cin >> altura;
    vol = (pi * (raio * raio)) * altura;
    cout << "\nO volume é igual a: " << vol;
    cout << "\n";
    //system("pause");
    return (0);
}