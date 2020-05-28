
/**
 * Exercício: Equação do 2°
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/

#include "stdio.h"
#include "iostream"
#include "math.h"

using namespace std;

int     main()
{
    double a, b, c, delta, x1, x2;
    int option;

    MENU:
    system("clear");
    cout << "=========================================================\n";
    cout << "***  Bem vindo à calculadora de equação do 2° grau!!  ***\n";
    cout << "=========================================================\n\n";
    cout << "Selecione uma opção: \n";
    cout << "\n[1] Execultar";
    cout << "\n[2] Sair\n\nOpção: ";
    cin >> option;

    if(option == 1){
        VERIFICAR:
        cout << "\nEntre com o valor diferente de 0 para  A: ";
        cin >> a;
        if (a == 0)
        {
            cout << "\nO valor zero não é permitido, selecione outro valor";
            goto VERIFICAR;
        }
        else
        {
            cout << "\nEntre com o valor de B: ";
            cin >> b;
            cout << "\nEntre com o valor de C: ";
            cin >> c;
            delta = b * b - 4 * a * c;
            if (delta > 0)
            {
                x1 = (b * (-1)) + sqrt(delta)/2*a;
                x2 = (b * (-1)) - sqrt(delta)/2*a;
                system("clear");
                cout << "=========================================================\n";
                cout << "\nSolução: ";
                cout << "\n\nA = " << a << "\nB = " << b << "\nC = " << c << "\n\nDelta = " << delta;
                cout << "\n=========================================================\n";
                cout << "\nX1 = " << x1;
                cout << "\nX2 = " << x2 << "\n";
                cout << "=========================================================\n";
                cout << "\nAperte qualquer tecla para voltar ao MENU ";
                getchar();
                getchar();
                goto MENU;
            }
            else
            {
                cout << "\nSem solução no conjunto dos números Reais!\n";
            }
        }
    }
    else if(option == 2){
        system("exit");
    }
    else
    {
        goto MENU;
    }
}