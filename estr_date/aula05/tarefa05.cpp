/**
 * Exercício: Struct
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Estrutura de dados
 * 
 * 
 * TAREFA DE FIXAÇÃO / AVALIAÇÃO
 * 
 * Faça o código fonte estruturado de algoritmo que contenha uma estrutura
 * (STRUCT) chamada PESSOA criada para armazenar até 5 elementos, com os
 * atributos int IDADE e string NOME. O programa será comandado por um menu
 * com select case com as seguintes opções: no Case 1 Ler Nome e Idade, case
 * 2 Exibir tabela, case 3 classificar por Idade, case 4 classificar por nome, case 5
 * busca sequencial por idade, case 6 busca binária por nome e case 7 sair;
 * 
 **/

#include "string.h"
#include "cstdlib"
#include "iostream"
#include "stdio.h"

using namespace std;

const int n = 5;

int linha = -1;

struct pessoa
{
    int idade[n];
    string nome[n];
};

struct pessoa tb;


string lerNome()
{
    string x;
    cin.ignore();
    cout << "Digite o nome:";
    getline ( cin, x);
    return x;
}

int lerIdade()
{
    int idade;
    cout << "Digite a idade: ";
    cin >> idade;
    return idade;
}


void novaLinha ( )
{
    linha ++;
    
    string x;
    int idade;
    x = lerNome();
    tb.nome [ linha ] = x;
    idade = lerIdade();
    tb.idade [linha] = idade;
}



void classificarNome()
{   
    string aux;
   
    int i = 0;
    int j = linha;
    while (i <= j)
    {   
        while(tb.nome[i] > tb.nome[j])
        {
            aux = tb.nome[i];
            tb.nome[i]= tb.nome[j];
            tb.nome[j] = aux;
        }
        i++;
    }
}

void classificarIdade()
{   
    int aux;
   
    int i = 0;
    int j = linha;
    while (i <= j)
    {   
        while(tb.idade[i] > tb.idade[j])
        {
            aux = tb.idade[i];
            tb.idade[i]= tb.idade[j];
            tb.idade[j] = aux;
        }
        i++;
    }
}

void exibir () 
{
    for (int i=0; i <= linha; i++)
        cout << "\nNome: " << tb.nome [ i ] << " | Idade: "<< tb.idade[i] << endl;
    
    system("sleep 5");
}



int buscaNome ( string nome_ )
{
    int e = 0, d = linha, m;
    
    for (int i = 0; i <= linha; i ++ )
    {
        m = (e + d) /2; // pega a parte inteira
        
        
        if ( nome_ == tb.nome [ m ] ) 
            return m;
        else 
        {
            if (  nome_ > tb.nome [ m ] )
                   e = m;
               else
                   d = m;
       }        
    }
    
    return -1; // posicao nao encontrada
}

int buscaIdade ( int idade_ )
{
    for (int pos = 0; pos <= linha ; pos ++ ) 
    {
       if ( idade_ == tb.idade [pos]) 
       {
           return pos;
       }
    }

    return -1; // não encontrou a posição
}


int main () 


{
    int tecla;
    
    string nome_;
    
    MENU:
    system("clear");
    cout << "<n*** MENU DE CONTROLE *** ";
    cout << "\n\t1 Ler ";
    cout << "\n\t2 Exibir ";
    cout << "\n\t3 Classificar por Idade ";
    cout << "\n\t4 Classificar por Nome ";
    cout << "\n\t5 Buscar por Idade ";
    cout << "\n\t6 Buscar por Nome ";
    cout << "\n\t7 Sair ";
    cout << "\n\tItem:  ";
    cin >> tecla;
    


    switch ( tecla) 
    {
        case 1: novaLinha(); break;

        case 2: exibir(); break;
        
        case 3: classificarIdade (); break;

        case 4: classificarNome (); break;

        case 5: int idade_, pos;
                idade_= lerIdade();
                pos = buscaIdade(idade_);

                if (pos == -1)
                {
                    cout << "Idade nao encontrada!" << endl;
                    system("sleep 3");
                }
                else 
                {
                    cout << "A idade " << idade_ << " foi encontrada ";
                    cout << "na posicao " << pos << endl;
                    system("sleep 3");
                }
        break;

        case 6: nome_ = lerNome();
                pos = buscaNome( nome_ );

                if (pos == -1)
                {
                    cout << "Nome nao encontrado!" << endl;
                    system("sleep 3");
                }
                else 
                {
                    cout << "O nome " << nome_ << " foi encontrado ";
                    cout << "na posicao " << pos << endl;
                    system("sleep 3");
                }
                
                break;
        
        case 7: exit(0); break;
    }
    
    goto MENU;
    
    return 0;
}
