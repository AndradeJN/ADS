
/**
 * Exercício: Vetores
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/
#include "iomanip"
#include "iostream"
#include "math.h"

using namespace std;


int     main()
{
    double valorprincipal[] = {100, 100, 100, 320, 121}, dias[] = {30, 60, 90, 80, 42}, valorpagar[5];

    int i, tecla = 0;

    while (tecla != 2)
    {    
        system("clear");
        cout << "\n====================================\n";
        cout << "Escolha uma opção: \n1 - Extrato parcelas\n2 - Sair";
        cout << "\n\n====================================\n";
        cout << "\nOpção: ";
        cin >> tecla;
        
        

        if (tecla == 1)
        {   
            system("clear");
            cout << "| Valor da parcela | Dias em atraso  |  Valor a pagar  | \n";
            cout << "--------------------------------------------------------\n";
            for (i =0; i <=4; i++)
            {   
                valorpagar [i] = (valorprincipal[i] + (dias[i] * 1.0/30) + valorprincipal [i] * 0.2); 
                cout << "| R$: " << setprecision(2) << setw(2) << fixed << valorprincipal[i] <<  "       |  " << setprecision(0) << fixed << dias [i] << "             |  R$ " << setprecision(2) << setw(2) << fixed << valorpagar [i] << "      | \n";
                cout << "--------------------------------------------------------\n";
            } 
            cout << "\n\nAperte qualquer tecla para sair!!";
            getchar();
            getchar();
        }
        
    }
    return 0;
}