
/**
 * Exercício: Salário medio sexo
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/

#include "stdio.h"
#include "iostream"
#include "math.h"

using namespace std;

void salarios( );


void salarios( )
{
    double cont = 0, salario, salariomaior, salariomenor;
    while ( cont < 7  )
    {  
        cout << "\nSalário " << cont+1 << ":";
        cin >> salario;  
        cont ++;
        if (cont==1) 
        { 
            salariomenor = salario;  
            salariomaior = salario; 
        }

        if (salario < salariomenor ) salariomenor = salario;
        if (salario > salariomaior )  salariomaior = salario;
    }
    cout << "\nSalário Menor:" << salariomenor;
    cout << "\nSalário Maior:" << salariomaior; 
}

