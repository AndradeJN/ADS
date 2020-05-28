/**
 * Exercício: Maior valor entre 2 números 
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/

#include "iostream"
#include "math.h"

using namespace std;

int     main()
{
    int n1;
    int n2;

    LEITURA:
    cout << "Digite 2 umeros diferentes!: ";
    cin >> n1 >> n2;

    if (n1 == n2)
    {
        goto LEITURA;
    }

    if (n1 > n2)
    {
        cout << "Maior numero: " << n1 << endl;
        cout << "Menor numero: " << n2 << endl; 
    }

    if (n1 < n2)
    {
        cout << "Maior numero: " << n1 << endl;
        cout << "Menor numero: " << n2 << endl;
    }

}
