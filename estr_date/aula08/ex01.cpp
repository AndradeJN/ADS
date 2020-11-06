/**
 * Exercício: LINFO
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Estrutura de dados
 * 
 * Faça um programa estruturado para controlar uma pilha com arranjo
 * simples contendo os atributos: IDADE, NOME e SALÁRIO. O código da LIFO
 * deverá conter as seguintes funções obrigatórias:
 * 
 * push() para empilhar o registro
 * pop() para remover registros
 * int mostrar() para mostrar os registros da LIFO
 * bool cheia() verificar se a LIFO está cheia
 * bool vazia() verificar se a LIFO está vazia
 * int tela () exibe a tela e armazena o valor da opção de menu
 * selecionada
 * void Controle() controla o menu de controle da LIFO
 * 
 *
 * */


#include "iostream"
#include "cstdlib"
#include "string.h"
#include "math.h"
#include "iomanip"

using namespace std;

#define tamanho 2

typedef struct p1 pilha;
struct p1
{
    int topo;
    int dado[ tamanho ];    
};

char nome;
int salario;
 

bool vazia  ( pilha  p1 ) ;
bool cheia  ( pilha  p1 );
pilha push  ( int idade,int salario,char nome, pilha p1);
pilha pop   ( pilha  p1  ); 
void exibir ( pilha p1 );
void executar_pilha();

int main()
{
    setlocale(LC_ALL, "Portuguese");
    executar_pilha();
    return 0;
}

bool vazia (pilha p1) 
{
    if( p1.topo == -1 )
        return true;
    else
        return false;
}

bool cheia ( pilha  p1 ) 
{​​​​​​​
    if ( p1.topo == 1 )
    {
        return true;
    }
    else
    {
        return false;
    }
}​​​​​​​


pilha push ( int idade, int salario, char nome, pilha p1 ) 
{​​​​​​​
    if ( cheia( p1 ) == true )
    {​​​​​​​
        cout << "Pilha cheia!" << endl;
        system("pause");
        return p1; 
    }​​​​​​​
   
    p1.topo ++;
    p1.dado [ p1.topo ] = idade;
    p1.dado [ p1.topo ] = salario;
    p1.dado [ p1.topo ] = nome;
 
    return p1; 
}​​​​​​​


pilha pop ( pilha  p1  ) 
{​​​​​​​
    if ( vazia ( p1 )  == true )
    {​​​​​​​
        cout << "A pilha já está vazia!" << endl;
        system("pause");
        return p1; 
    }​​​​​​​

    cout << "\nO valor desempilhado será " << p1.dado[ p1.topo ] << endl;
    system("pause");
    
    p1.dado [ p1.topo ] == '\0';
    p1.topo --;
    
    return p1; // retorna a pilha p1 com um elemento a menos 
}​​​​​​​





void exibir ( pilha p1 ) 
{​​​​​​​
    if ( vazia ( p1 ) == true  ) 
        {​​​​​​​ 
        cout << "Pilha vazia!" << endl;
          system("pause");
          return;  // sair do void 
        }​​​​​​​
    
    system ("cls");
    for (int i=p1.topo; i >= 0 ; i-- )
         cout << p1.dado[i] << endl;
        
    system("pause");
}​​​​​​​


void executar_pilha ( ) 
{​​​​​​​
   pilha p1;
   p1.topo = -1;
   
   int opcao, idade;
   
   MENU:
   system("cls");
   cout << "***MENU DE CONTROLE DA LIFO ***";
   cout << "\n\n\t1 Push";
   cout << "\n\t2 Exibir";
   cout << "\n\t3 Pop ";
   cout << "\n\t4 Sair ";
   cout << "\n\tItem:";
   cin >> opcao;
   
   switch ( opcao ) 
   {​​​​​​​
       case 1:  cout << "\nDigite a idade:";
                cin >> idade;
                cout << "\nDigite o salario:";
                cin >> salario;
                cin.ignore();
                cout << "\nDigite um nome:";
                cin >> nome;
                system("pause");
                
                p1 = push ( idade, salario, nome,  p1 );
                break;
       
       case 2:  exibir ( p1 );
                break;
       
       case 3:  p1 = pop ( p1 ) ;
                break;
       
       
       case 4: exit(0); break;
   }​​​​​​​ 
   
   goto MENU;
   
}