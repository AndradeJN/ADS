/**
 * Exercício: Struct
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Estrutura de dados
 * 
 * 
 * TAREFA DE FIXAÇÃO / AVALIAÇÃO
 * 
 * Faça um algoritmo com struct e menu completo para ler uma lista de NOMES, PESOS, ALTURAS e armazenar o cálculo do indice de massa corporea, IMC. 
 * 
 * Faça um menu com a opções: 1 Ler, 2 processar, 3 exibir tabela, 4 pesquisar por nome, 5 Classificar por nome, 6 sair. 
 * 
 * Na opção pesquisar por nome, faça uma pesquisa sequencial para encontrar e exibir o nome da pessoa, seu peso, sua altura e seu IMC assim como 
 * seu status de classificação de peso. 
 * 
 * Use as mensagens de classificação obtidas no site: http://www.calcularpesoideal.com.br/
 * 
 **/

#include "string"
#include "cstdlib"
#include "iostream"


using namespace std;

const int n = 5;
int linha = -1, id = 0, i = 0, j = 0;

struct imc
{
    int      id;
    string   nome;
    double   peso;
    double   altura;
    double   imc;
};

struct imc _imc[n];

string lerNome();
double lerAltura();
double lerPeso();
void processar();
void mostrarTabela();


void novoRegistro() 
{
    linha ++; // linha = linha + 1
    _imc [ linha ].id = id++;
    cin.ignore(); // ignora o enter no buffer anterior
    string nome_ = lerNome();
    _imc [ linha ].nome = nome_;
    _imc [ linha ].peso = lerPeso();
    _imc [ linha ].altura = lerAltura();
}

string lerNome()
{   
    string nome;
    cout << "Escreva um nome: ";
    getline(cin, nome);
    return (nome);
}

double lerAltura()
{
    double altura;
    cout << "Escreva uma altura: ";
    cin >> altura;

    return(altura);
}

double lerPeso()
{
    double peso;
    cout << "Escreva o peso: ";
    cin >> peso;
    
    return(peso);
}

void processar()
{
    int aux = linha;
    while (aux >= 0)
    {
        _imc [ linha ].imc = _imc [ linha ].peso / (_imc [ linha ].altura * _imc [ linha ].altura);

        aux--;
    }
}


void mostrarTabela ( )
{
    system("clear");
    cout << "\n*** Relatório de Saída ***";
 
    for (int i = 0; i <= linha; i++ )
    {
        cout << "\n\t" << _imc [ i ].id << " | " << _imc [ i ].nome << " | " << _imc [ i ].imc;
    }
    
    cout << "\n*** Fim do relatório de saída ***" << endl;
    
    system("sleep 3");
}

int execultar()
{
    int tecla;

    MENU:
    system("clear");
    cout << "1 Ler\n2 Processar\n3 Exibir tabela\n4 Pesquisar por nome\n5 Classificar por nome\n6 Sair\nOpção:  ";
    cin >> tecla;

    switch(tecla)
    {
        case 1: novoRegistro();    
            break;

        case 2: processar();
            break;

        case 3: mostrarTabela();    
            break;
        
        case 5: exit(0);
            break;
    }
    
    goto MENU;
        
    return (0);   
}

int     main()
{
    execultar();
}


