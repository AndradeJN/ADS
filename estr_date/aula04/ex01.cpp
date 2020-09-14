
#include "iostream"
#include "cstdlib"
#include "string.h"
using namespace std;
 
const int n = 5;
 
int linha = -1; // armazera a ultima posição do struct 
 
struct registro 
{ 
    int chave; 
    string nome;
};
 
struct registro tb1 [ n ];
 
    int lerChave (); 
    string lerNome (); 
    void novoRegistro (); 
    void mostrarTabela ();
    int buscarChaveSeq ( int chave );
    void ClassificarPorChave ();
    void executar ();
 
int main( ) 
{ 
    setlocale (LC_ALL, "Portuguese");
    executar();
    
    return 0;
}
 
int lerChave() 
{
    int x;
    cout << "Digite uma Chave:";
    cin >> x;
    
    return x;
}
 
string lerNome() 
{
    string x;
    cout << "Digite o nome:";
    getline ( cin, x );
    
    return x;
}
 
void novoRegistro ( ) 
{
    linha ++; // linha = linha + 1
    tb1 [ linha ].chave = lerChave();
    cin.ignore(); // ignora o enter no buffer anterior
    string nome_ = lerNome();
    tb1 [ linha ].nome = nome_;
}
 
void mostrarTabela ( )
{
    system("clear");
    cout << "\n*** Relatório de Saída ***";
 
    for (int i = 0; i <= linha; i++ )
    {
        cout<< "\n\t"<< tb1 [ i ].chave << " | " << tb1[ i ].nome;
    }
    
    cout << "\n*** Fim do relatório de saída ***" << endl;
    
    system("sleep 3");
}
 
void mostrarPosicao(int pos) 
{
    system("clear");
    cout << "\n*** Registro Encontrado ***";
    cout<< "\n\t"<< tb1 [ pos ].chave<< " | "<< tb1[ pos ].nome;
    cout << "\n*** Fim da exibição ***" << endl;
 
    system("sleep 3");
 }
 
// BUSCA SEQUENCIAL 
int buscarChaveSeq( int chave )
{
    for (int pos = 0; pos <= linha ; pos ++ ) 
    {
       if ( chave == pos) 
       {
           return chave;
       }
    }

    return -1; // não encontrou a posição
}
 
void ClassificarPorChave()
{ 
    int i, j, aux;
    for ( int i=0; i < linha; i++) 
    {
        for ( int j = i; j <= linha; j ++ ) 
        {
            cout << "linha=" << linha << " i=" << i << " | j=" << j << endl;
            system("sleep 1");
    
            if ( tb1[i].chave > tb1[j].chave ) 
            {
                aux = tb1[i].chave;
                tb1[i].chave= tb1[j].chave;
                tb1[j].chave = aux;
            }
    
        }

    }
}
 
void executar ()
{
    int tecla, chave, pos;
    
    MENU:
    
    system("clear");
    cout << "\n*** Menu de Controle ***";
    cout << "\n\n\t1 Ler";
    cout << "\n\t2 Exibir";
    cout << "\n\t3 Buscar Chave";
    cout << "\n\t4 Classificar por chave";
    cout << "\n\t5 Finalizar programa";
    cout << "\n\titem:";
    cin >> tecla;
    
    switch ( tecla )
    {
        case 1: novoRegistro(); break;
        case 2: mostrarTabela(); break;
        case 3: chave = lerChave(); 
        pos = buscarChaveSeq( chave );
        
        if (pos == -1) 
        {
            cout << "Chave não encontrada!" << endl; 
            system("sleep 3 ");
        }
        else 
            mostrarPosicao(pos);
        break;
    
        case 4: ClassificarPorChave(); break;
    
        case 5: exit(0); break;
    }
    
    goto MENU;
}