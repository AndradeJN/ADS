/**
 * 
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/

#include "iostream"
#include "math.h"
#include "string"

using namespace std;

int     main()
{
    string const password = "1234";
    string testPass;


    LEITURA:
    cout << "Digite a senha: ";
    cin >> testPass;

    if (testPass == password)
    {
        cout << "Acesso permitido" << endl;
    }else {
        cout << "Acesso negado" << endl;
        goto LEITURA;
    }

    return(0);
}
