/**
 * Exercício: Ordem crescente entre três numeros diferentes
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
    int n3;

    LEITURA:
    cout << "Digite 3 umeros diferentes!: " << endl;
    cout << "Valor 1: " ;
    cin >> n1;
    cout << endl << "Valor 2: "; 
    cin >> n2;
    cout << endl << "Valor 3: ";
    cin >> n3;

    if (n1 == n2 || n1 == n3 || n2 == n3)
    {
        goto LEITURA;
    }else{

        if (n1 < n2  && n2 < n3 && n1 < n3)//123
        {
            cout << "Menor numero: " << n1 << endl; 
            cout << "Numero do meio: " << n2 << endl; 
            cout << "Maior numero: " << n3 << endl;
            
        }
        else if (n1 < n2  && n2 > n3 && n3 > n1)//132
        {
            cout << "Menor numero: " << n1 << endl; 
            cout << "Meio numero: " << n3 << endl; 
            cout << "Maior numero: " << n2 << endl;
        }
        else if (n1 > n2  && n2 < n3 && n3 > n1)//213
        {
            cout << "Menor numero: " << n2 << endl; 
            cout << "Meio numero: " << n1 << endl; 
            cout << "Maior numero: " << n3 << endl; 
        }
        else if (n1 < n2  && n1 > n3 && n3 < n2)//231
        {
            cout << "Menor numero: " << n3 << endl; 
            cout << "Meio numero: " << n1 << endl;  
            cout << "Maior numero: " << n2 << endl; 
        }
        else if (n1 > n2 && n1 > n3 && n2 < n3)//312
        {
            cout << "Menor numero: " << n2 << endl; 
            cout << "Meio numero: " << n3 << endl;  
            cout << "Maior numero: " << n1 << endl; 
        }
        else//321
        {
           cout << "Menor numero: " << n3 << endl; 
           cout << "Meio numero: " << n2 << endl;
           cout << "Maior numero: " << n1 << endl;
        }
        
    }
    return(0);
}
