/**
 * Exercício: Compara e ordenar 5 valores inteiros
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/
#include "math.h"
#include "iostream"

using namespace std;

int     main()
{
    int aux;
    int num[5];


    cout << "Incira um valor inteiro para cada opção: ";
    cout << "\nValor 1: ";
    cin >> num[0];
    cout << "\nValor 2: ";
    cin >> num[1];
    cout << "\nValor 3: ";
    cin >> num[2];
    cout << "\nValor 4: ";
    cin >> num[3];
    cout << "\nValor 5: ";
    cin >> num[4];

    if(num[1] < num[2])
    {
       cout << "Yes";
    }else
    {
       cout << "NO";
    }
    
    

    return(0);
}