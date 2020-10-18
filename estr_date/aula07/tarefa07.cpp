/**
 * 
 * Exercício: Struct e Ponteiro
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Estrutura de dados
 * 
 * 
 * TAREFA DE FIXAÇÃO / AVALIAÇÃO
 * 
 * Faça um programa com menu de três opções (1-ler linha, 2- mostrar e 3-sair), contendo um STRUCT 
 * para cadastrar o nome, a idade, o sexo e o salário de pelo menos duas pessoas. 
 * Crie um ponteiro para manipular o STRUCT. 
 *
 * O programa deverá conter as seguintes funções para o STRUCT: (use switch case )
 *
 * void armazenarlinhastruct ( )
 * void mostrardadosstruct ( )
 * ler_idade ( )
 * ler_sexo ( )
 * ler_nome ( )
 * ler_salario ( )
 * Aumento( double * salario ) // aumento de 10% sobre o salário digitado
 *  
 **/

#include "iostream"
#include "cstdlib"
#include "string.h"
#include "math.h"
#include "iomanip"

using namespace std;

const int n = 2;
int linha = -1;

void    armazenarlinhastruct ( );
void    mostrardadosstruct ( );
int     ler_idade ( );
char    ler_sexo ( );
string  ler_nome ( );
double  ler_salario ( );
double  aumento( double * salario );

typedef struct colaborador tab;

struct colaborador{
    string nome[n];
    char sexo[n];
    int idade[n];
    double salario[n];
    double aumento[n];
};

tab t1; // criando minha tabela dentro do codigo
tab *pt1;


void    armazenarlinhastruct ( string nome_, char sexo_, int idade_, double salario_)
{
    linha++;
    double aumento_;
    aumento_ = salario_ + salario_ * 0.1;

    pt1->nome [linha] = nome_;
    pt1->sexo [linha] = sexo_;
    pt1->idade [linha] = idade_;
    pt1->salario [linha] = salario_;
    pt1->aumento [linha] = aumento_;
   
}

void    mostrardadosstruct ( )
{
    system("clear");
    for (int i=0; i<=linha; i++ ) 
    {
        cout << endl << "Nome :" << pt1->nome [ i ] << endl;
        cout << "Sexo :" << pt1->sexo [ i ] << endl;
        cout << "Idade :" << pt1->idade [ i ] << endl;
        cout << "Salário :" << pt1->salario [ i ] << endl;
        cout << "Salário com aumento :" << pt1->aumento [ i ];
    }
 
    cout << endl;
    system("sleep 5");
}

int     ler_idade ( )
{   
    int idade;
    cin.ignore();
    cout << "Digite a idade: ";
    cin >> idade;
    return idade;
}


char    ler_sexo ( )
{
    char sexo;

    cin.ignore();
    cout << "Digite o sexo (M/F): ";
    cin >> sexo;
    return sexo;
}

string    ler_nome ( )
{
    string nome;

    cin.ignore();
    cout << "Digite um nome: ";
    cin >> nome;
    return nome;
}

double  ler_salario ( )
{
    double salario;

    cin.ignore();
    cout << "Digite o salário: ";
    cin >> salario;
    return salario;
}

int main()
{
    pt1 = &t1;

    string menu, nome;
    int tecla;

    MENU:
    system("clear");
    menu =  "\n*** Ponteiros para Struct ";
    menu += "\n1 Leitura de Nome, Sexo. Idade e Salário";
    menu += "\n2 Mostrar resultados";
    menu += "\n3 Sair do Programa";
    menu += "\nItem: ";
    cout << menu;
 
    cin >> tecla;

    switch(tecla)
    {
        case 1:

        char sexo;
        int idade;
        double salario;

        nome = ler_nome();
        sexo = ler_sexo();
        idade = ler_idade();
        salario = ler_salario();

        armazenarlinhastruct (nome, sexo, idade, salario);

            break;
    
        case 2:
            
            mostrardadosstruct();
            
            break;

        case 3:
            
            exit(0); 
            
            break;

        default:
            break;
    }
    goto MENU;
}