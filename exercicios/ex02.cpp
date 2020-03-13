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
	int distancia, litros, tempo, velocidade;
    
    distancia = 0;
    litros = 0;
    tempo = 0;
    velocidade = 0;	
    cout <<"Por favor entre com a velocidade: ";
    cin >> velocidade;
    cout <<"Por favor entre com o tempo: ";
    cin >> tempo;
    distancia = tempo * velocidade;
    litros = distancia / 12;
    cout << "\nA distância percorrida foi de: " << distancia;
    cout << "\nO consume foi de: " << litros << " litros\n\n";
    //system("pause");
    return (0);
}