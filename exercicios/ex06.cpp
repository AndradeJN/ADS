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
	int  distancia, tempo;
    const int vsom = 340;
    
    distancia = 0;
	tempo = 0;
    cout <<"Por favor entre com o valor tempo: ";
    cin >> tempo;
    distancia = tempo * vsom;
    cout << "\nNesse espaço de tempo o som percorre uma distancia de: " << distancia << "\n";
    //system("pause");
    return (0);
}