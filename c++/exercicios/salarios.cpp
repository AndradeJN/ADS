
/**
 * Exercício: Salário maior e menor
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

int main() 
{ 
    setlocale(LC_ALL, "Portuguese");
    int tecla = 0;
    while (tecla != 2)
    {  
        cout << "\n**menu**\n1 Executar\n2 Sair\nitem:";
        cin >> tecla;
        switch (tecla)
        { 
            case 1: salarios(); 
            break;
            case 2: 
            cout << "\nPrograma finalizado!";
            exit(0); 
            break;
        } 
    }
}