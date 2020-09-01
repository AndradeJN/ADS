/**
 * Exercício: Struct
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Estrutura de dados
 * 
 * Ler o valor correspondente ao salário mensal (variável SM) de um trabalhador e também o valor do
 * percentual de reajuste (variável PR) a ser atribuído. Apresentar o valor do novo salário (variável NS).
 *
**/

#include "iostream"
#include "cstdlib"
#include "string.h"
using namespace std;

double ns;
const int n = 1;

struct salario
{
    double sm[n];
    double pr[n];
};

struct salario almento;

void ler()
{
    cout << "Entre com o valor do salário: ";
    cin >> almento.sm[0];
    cout << "\nEntre com o valor do aumento: ";
    cin >> almento.pr[0];
}

double calcular()
{
    ns = almento.sm[0] + (almento.sm[0] * (almento.pr[0] / 100)) ;
    return(ns);
}

void exibir()
{
    cout << "O novo salário é: " << ns << endl;
    cout << "Use qualquer tecla para continuar"; 
    getchar();
    getchar();
}

int     main()
{
    int tecla;
    while ( tecla != 4 )
    { 
        system("clear");
        cout << "\n1 Ler salário\n2 Calcular\n3 Exibir\n4 Sair\nitem:";
        cin >> tecla; 
        system("clear");

        switch ( tecla )
        {
            case 1: ler();
            break;

            case 2: calcular(); 
            break;

            case 3: exibir(); 
            break;

            case 4: exit(0); 
            break;
        }
    }
    return(0);
}