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
	int prest, valor, tempo, taxa;
    
    prest = 0; 
    valor = 0;
	tempo = 0; 
    taxa = 0;
    cout <<"Por favor entre com o valor do emprestimo: ";
    cin >> valor;
    cout <<"Por favor entre com o tempo: ";
    cin >> tempo;
    cout <<"Por favor entre com a taxa: ";
    cin >> taxa;
    prest = (valor + (valor * taxa / 100)) * tempo;
    cout << "\nAs prestações serão de: " << prest << "\n";
    //system("pause");
    return (0);
}