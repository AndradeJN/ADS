
/**
 * 
 * Exercício: Volume da caixa
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Estrutura de dados
 * 
 * Faça um pequeno programa contendo funcoes para ler o comprimento, 
 * altura e largura de uma caixa, outra funcao para calcular a o 
 * volume da caixa e finalmente outra para exibir tudo. 
 * 
 * */

#include "iostream"
#include "cstdlib"
#include "string.h"
#include "math.h"
#include "iomanip"

using namespace std;

void    execultar();
double  lerComprimento();
double  lerAltura();
double  lerLargura();
double  volume(double comprimento, double altura, double largura);
void    exibir(double vol);


int main()
{
    setlocale(LC_ALL, "Portuguese");

    execultar();

    return(0);
}

void    execultar()
{
    int tecla;
    double altura, largura, comprimento, vol; 
    
    MENU:
    system("clear");
    cout << "===========VOLUME BOX==============\nMENU\n\n1-Ler Altura, Largura e Comprimento\n2-Calcular\n3-Exibir\n4-Sair\nOpção: ";
    cin >> tecla;

    cin.ignore();
    switch (tecla)
    {
    case 1:
        comprimento = lerComprimento();
        altura = lerAltura();
        largura = lerLargura();
        break;

    case 2:
        vol = volume(comprimento, altura, largura);
        break;
    case 3:
        exibir(vol);
        break;
    case 4:
        exit(0);
        break;
    }
    goto MENU;

}

double  lerComprimento()
{   
    double comprimento;

    cout << "Entre com o comprimento: ";
    cin >> comprimento;

    return(comprimento);
}

double  lerAltura()
{
    double altura;

    cout << "Entre com a altira: ";
    cin >> altura;

    return(altura);    
}

double  lerLargura()
{
    double largura;

    cout << "Entre com a largura";
    cin >> largura;

    return(largura);

}


double  volume(double comprimento, double altura, double largura)
{
    double vol;

    vol = comprimento * altura * largura;
    
    return(vol);
}

void    exibir(double vol)
{
    system("clear");
    cout << "O volume é: " << vol << endl;
    system("sleep 5");
}

