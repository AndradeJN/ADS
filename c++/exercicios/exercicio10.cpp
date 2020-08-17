
/**
 * Exercício: Divisiveis (for)
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/

#include "stdio.h"
#include "iostream"
#include "math.h"

using namespace std;

double lern();
double calpar(int n);
double calcimpar();
void exibir(int n, int par, int impar);

double lern()
{
    int n;
    cout << "Entre com o valor de N: ";
    cin >> n;

    return n;
}

double calpar(int n)
{
    int par = 0;

    for (int cont = 0; cont <= n; cont++)
    {
       if (cont % 2 == 0)
       {
           par += cont;
       }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    }
    return par;
}

double calimpar(int n)
{
    int impar = 0;

    for (int cont = 0; cont <= n; cont++)
    {
       if (cont % 2 != 0)
       {
           impar += cont;
       }  

    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  

    return impar;
}

void exibir(int n, int totpar, int totimpar)
{
    system("clear");
    cout << "\n====================================\n";
    cout << "N = " << n << "\nSoma dos pares " << totpar << "\nSoma dos impares " << totimpar;
    cout << "\n====================================\n";
    cout << "\n\nAperte qualquer tecla para continuar!";
    getchar();
    getchar();
}

int main()
{
    int n, totpar, totimpar, tecla, par, impar;

   

    tecla = 0;
    while (tecla != 4)
    {    
        system("clear");
        cout << "\n====================================\n";
        cout << "Escolha uma opção:\n1 - Ler \n2 - Calcular\n3 - Exibir\n4 - Sair";
        cout << "\n\n====================================\n";
        cout << "\nOpção: ";
        cin >> tecla;
        
        

        if (tecla == 1)
        {
            n = lern();
        }
        else if (tecla == 2)
        {
           totpar = calpar(n);
           totimpar = calimpar(n);
        }
         else if (tecla == 3)

        {  
            exibir(n, totpar, totimpar);
        }
    }
    system("clear");
    return (0);
    
}

