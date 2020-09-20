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

#include "string.h"
#include "cstdlib"
#include "iostream"
#include "stdio.h"

using namespace std;

const int n = 5;
int linha = -1, id = 0, pos;

struct imc
{
    int      id;
    string   nome;
    double   peso;
    double   altura;
    double   imc;
    string   status;
};

struct imc _imc[n];

//Biblioteca de fuções
string  lerNome();
double  lerAltura();
double  lerPeso();
void    processar();
void    buscarNome();
void    classificar();
void    novoRegistro();



void    novoRegistro()
{
    linha ++; // linha = linha + 1
    _imc [ linha ].id = id++; //auto incremento a cada registro novo.
    cin.ignore(); // ignora o enter no buffer anterior
    string nome_ = lerNome();
    _imc [ linha ].nome = nome_;
    _imc [ linha ].peso = lerPeso();
    _imc [ linha ].altura = lerAltura();
}

string  lerNome()
{   
    string nome;
    cout << "Escreva um nome: ";
    getline(cin, nome);

    return (nome);
}

double  lerAltura()
{
    double altura;
    cout << "Escreva uma altura: ";
    cin >> altura;

    return(altura);
}

double  lerPeso()
{
    double peso;
    cout << "Escreva o peso: ";
    cin >> peso;
    
    return(peso);
}

void    processar()
{
    int i = 0;
    while(i <= linha)
    {   
        double _status;//AVariável com duas fuções, armazenar o emc e alterar os status. 


        _status = _imc [ i ].peso / (_imc [ i ].altura * _imc [ i ].altura); //Calculo do IMC

        _imc [ i ].imc = _status; //Inserção do imc na struct

        //Escrita na struct de acordo com o valor IMC
        if(_status <= 18.5)
        {
            _imc [ i ].status = "Abaixo do peso"; 
        }
        
        if(_status >= 18.5 && _status < 25)
        {
            _imc [ i ].status = "Peso normal";
        }

        if(_status >= 25.0 && _status < 30)
        {
            _imc [ i ].status = "Sobrepeso";
        }

        if(_status >= 30.0 && _status < 35)
        {
            _imc [ i ].status = "Obesidade Grau I";
        }

        if(_status >= 35.0 && _status < 40)
        {
            _imc [ i ].status = "Obesidade Grau II";
        }

        if(_status >= 40.0)
        {
            _imc [ i ].status = "Obesidade Grau III";
        }
        i++;
    }
}

void    mostrarTabela ( )
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


int    pesquisar()
{
    cin.ignore();

    string nome = lerNome();

    int i = linha;
    while( i >= 0)//Percorrendo as posições 
    {   
        if(nome == _imc[ i ].nome) 
        {
            return(i);
        }
        i--;
    }  
    return(i);
}

void    buscarNome()
{   
    int i = pesquisar();

    if(i == -1) 
    {
      
        cout << "Não encontrado" << endl;
        system("sleep 2");
    }
    else
    {
        cout << "\n\tNome: " << _imc [ i ].nome << "\n\tPeso: " << _imc [ i ].peso << "\n\tAltura: " << _imc [ i ].altura << "\n\tIMC: " << _imc [ i ].imc << "\n\tDiagnóstico: " << _imc [ i ].status << endl;
        system("sleep 5");
    }
}

void    classificar()
{
    int i, j;
    string aux;

    for(i = 0; i < linha; i++)
	{
		for(j = i; j <= linha; j++)
		{
			if((_imc[i].nome[0]) > _imc[j].nome[0])
			{
				aux = _imc[i].nome;
                _imc[i].nome = _imc[j].nome;
                _imc[j].nome = aux;
			}
		}

	}
}

int     execultar()
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

        case 4: buscarNome();
           
            break;
        case 5: classificar();
            break;

        case 6: exit(0);
            break;
    }
    
    goto MENU;       
}

int     main()
{
    execultar();

    return(0);
}

