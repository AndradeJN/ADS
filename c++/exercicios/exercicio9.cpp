
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

int soma (int x, int y )  
{
    int R=0, resto1, resto2;

    for (int i =x; i<=y; i++) 
    { 
        resto1 = i % 3;
        resto2 =  i % 4;
        
        if ( resto1 == 0  &&  resto2 == 0 ) 
        {
            R += i;
            cout << "R="<<R<< endl;
        }     
    }
    return R;
}

void mostrar (int n1, int n2)
{
    int result = soma(n1,n2);
    cout<< "Somatório dos divisíveis por 3 e 4 de "<< n1<< " até "<< n2<< "=";
    cout << result << endl;
    system("pause");  
}



int main ()
{ 
    setlocale(LC_ALL, "Portuguese" );

    int n1, n2, tecla, totpar, totimpar, n;
    
    tecla = 0;
    n1= 1;
    n2 = 13;
    
    mostrar ( n1 , n2 );
}