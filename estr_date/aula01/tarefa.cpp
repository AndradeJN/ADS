
/**
 * Exercício: Vetores Explícitos e implícitos
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Estrutura de dados
 *
 **/

#include "iostream"
#include "math.h"
using namespace std;

int     main()
{
    setlocale(LC_ALL, "Portuguese");

    string nome [] = {"Sara Lemes", "Ricardo Jafé"};  
    double salario  []  =  {12000,  10243.20};  
    int n, tecla, idade[]={30,  45};
    
    n = sizeof( idade ) / sizeof(int); 

    menu:
    system("clear");
    cout << "==========================================\n";
    cout << "Escolha uma opção:\n1- Exibir\n2- Exibir com aumento\n3- Sair\n";
    cout << "==========================================\n";
    cin >> tecla;
    system("clear");

    switch(tecla)
    {
        case 1:
        for (int i = 0; i < n; i++)
        {
            cout << "Nome: " << nome[i] << "\nSalário: " << salario[i] << "\nIdade: " << idade[i] << "\n\n"; 
        }
        cout << "Aperte qualquer tecla para voltar ao menu!";
        getchar();
        getchar();
        goto menu;

        case 2:
        for (int i = 0; i < n; i++)
        {
           cout << "Nome: " << nome[i] << "\nSalário: " << salario[i] * 1.1 << "\nIdade: " << idade[i] << "\n\n";
        }
        cout << "Aperte qualquer tecla para voltar ao menu!";
        getchar();
        getchar();
        goto menu;

        case 3:
        break;
    }
    
    return (0);
}