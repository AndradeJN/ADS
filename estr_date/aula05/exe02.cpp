  
/*
 Faça um codigo estruturado para com menu para procurar um
 nome dentro de um struct não classificado, usando busca
 binária.
*/

#include "iostream"
#include "cstdlib"
#include "math.h"
#include "string.h"

using namespace std;


int const n = 6;
int linha = -1;


struct estrutura 
{
    string nome [ n ];
};


struct estrutura tb;



string lerNome()
{
    string x;
    cin.ignore();
    cout << "Digite o nome:";
    getline ( cin, x);
    return x;
}


void novaLinha ( )
{
    linha ++;
    
    string x;
    x = lerNome();
    tb.nome [ linha ] = x;  
}



void classificar()
{   
    string aux;
   
    int i = 0;
    int j = linha;
    while (i <= j)
    {   
        if(tb.nome[i] > tb.nome[j])
        {
            aux = tb.nome[i];
            tb.nome[i]= tb.nome[j];
            tb.nome[j] = aux;
        }
        i++;
    }
}



void exibir () 
{
    for (int i=0; i<=linha ; i++)
        cout << "\n" << tb.nome [ i ] << endl;
    
    system("sleep 10");
}



int buscaBinaria ( string nome_ )
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



int main () 


{
    int tecla, pos = -1;
    
    string nome_;
    
    MENU:
    system("clear");
    cout << "<n*** MENU DE CONTROLE *** ";
    cout << "\n\t1 Ler ";
    cout << "\n\t2 Exibir ";
    cout << "\n\t3 Classificar ";
    cout << "\n\t4 Buscar Valor ";
    cout << "\n\t5 Sair ";
    cout << "\n\tItem:  ";
    cin >> tecla;
    


    switch ( tecla) 
    {
        case 1: novaLinha(); break;
        case 2: exibir(); break;
        case 3: classificar (); break;
        
        case 4: nome_ = lerNome();
                pos = buscaBinaria( nome_ );
                
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
        
        case 5: exit(0); break;
    }
    
    goto MENU;
    
    return 0;
}