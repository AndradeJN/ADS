/**
 * Exercício: Vetores
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Estrutura de dados
 *
 **/

#include "iomanip"
#include "iostream"
#include "math.h"

using namespace std;


int     main()
{
    double valorprincipal[] = {100, 100, 100, 320, 121}, dias[] = {30, 60, 90, 80, 42}, valorpagar[5];

    int i, j, tecla = 0;

    menu:
    system("clear");
    cout << "\n====================================\n";
    cout << "Escolha uma opção: \n1 - Extrato parcelas\n2 - Sair";
    cout << "\n\n====================================\n";
    cout << "\nOpção: ";
    cin >> tecla;
    
    switch(tecla)//Entra ao receber qualquer valor em tecla
    {
        case 1: //Se a tecla digitada foi 1
        system("clear");
        cout << "| Valor da parcela | Dias em atraso  |  Valor a pagar  | \n";
        cout << "--------------------------------------------------------\n";

        j = sizeof( valorprincipal ) / sizeof ( int ); //Guarda o temanho do vetor em inteiros

        i= -1; //Uma variavel de indice percorrer o vetor, valor -1 para incrementar durante o loop iniciando em 0
        while(i < j - 1)
        {   
            i++; //Incremento no índice
            valorpagar [i] = (valorprincipal[i] + (dias[i] * 1.0/30) + valorprincipal [i] * 0.2); 
            cout << "| R$: " << setprecision(2) << setw(2) << fixed << valorprincipal[i] <<  "       |  " << setprecision(0) << fixed << dias [i] << "             |  R$ " << setprecision(2) << setw(2) << fixed << valorpagar [i] << "      | \n";
            cout << "--------------------------------------------------------\n";
            j--; //decrementa do tamnho do vetor para que cheque em -1 e encerre o wilhe. 
        } 
        cout << "\n\nAperte qualquer tecla para sair!!";
        getchar();
        getchar();
        break;

        case 2: 
        exit(0);
        break;
    }

    goto menu;//Retorna ao menu até que a tecla 1 ou 2 seja digitada
    return 0;
}