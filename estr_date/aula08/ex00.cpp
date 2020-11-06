#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

#define tamanho 2

typedef struct registro pilha;

struct registro 
{
    int topo;
    int dado[ tamanho ];    
};

bool vazia  ( pilha  p1 ) ;
bool cheia  ( pilha  p1 );
pilha push  ( int valor, pilha p1 );
pilha pop   ( pilha  p1  ); 
void exibir ( pilha p1 );
void executar_pilha();

int main() 
{    
    setlocale(LC_ALL, "Portuguese");

    executar_pilha();
    
    return 0;
}

bool vazia ( pilha  p1 ) 
{
    if ( p1.topo == -1 )
        return true;
    else
        return false;
}

bool cheia ( pilha  p1 ) 
{
    if ( p1.topo == 1 )
        return true;
    else
        return false;
}
 
pilha push ( int valor, pilha p1 ) 
{
    if ( cheia( p1 ) == true )
    {
        cout << "Pilha cheia!" << endl;
        system("sleep 2");
        return p1; 
    }
   
    p1.topo ++;
    p1.dado [ p1.topo ] = valor;
 
    return p1; 
} 

pilha pop ( pilha  p1  ) 
{
    if ( vazia ( p1 )  == true )
    {
        cout << "A pilha já está vazia!" << endl;
        system("sleep 3");
        return p1; 
    }

    cout << "\nO valor desempilhado será " << p1.dado[ p1.topo ] << endl;
    system("sleep 2");
    
    p1.dado [ p1.topo ] == '\0';
    p1.topo --;
    
    return p1; // retorna a pilha p1 com um elemento a menos 
}

void exibir ( pilha p1 ) 
{
    if ( vazia ( p1 ) == true  ) 
        { 
        cout << "Pilha vazia!" << endl;
          system("sleep 3");
          return;  // sair do void 
        }
    
    system ("clear");
    for (int i=p1.topo; i >= 0 ; i-- )
         cout << p1.dado[i] << endl;
        
    system("sleep 5");
}

void executar_pilha ( ) 
{
   pilha p1;
   p1.topo = -1;
   
   int opcao, valor;
   
   MENU:
   system("clear");
   cout << "***MENU DE CONTROLE DA LIFO ***";
   cout << "\n\n\t1 Push";
   cout << "\n\t2 Exibir";
   cout << "\n\t3 Pop ";
   cout << "\n\t4 Sair ";
   cout << "\n\tItem:";
   cin >> opcao;
   
   switch ( opcao ) 
   {
       case 1:  cout << "\nDigite o valor a ser empilhado:";
                cin >> valor;
                p1 = push ( valor,  p1 );
                break;
       
       case 2:  exibir ( p1 );
                break;
       
       case 3:  p1 = pop ( p1 ) ;
                break;
       
       
       case 4: exit(0); break;
   } goto MENU;
     
}