
/**
 * Exercício: Struct
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Estrutura de dados
 * 
 * 
 * TAREFA DE FIXAÇÃO / AVALIAÇÃO
 * 
 * I - Responda as questões a seguir
 * 
 * Defina o que seria um ponteiro. Explique e dê exemplos.
 * O que seria o endereço de uma variável. Explique como é criado e como posso exibi-lo. 
 * Como posso acessar o conteúdo de uma variável usando um ponteiro Explique e dê exemplo.
 * Como posso acessar o endereço de uma variável usando ponteiro. Explique e dê exemplo. 
 * Qual seria do tipo de ponteiro para a STRUCT PESSOA?
 * Declare duas variáveis e dois ponteiros. Exiba o resultado da soma dessas variáveis somando os seus ponteiros (com Asterisco).
 * 
 * II - Escolha dois dos três exercícios para utilizar funções que tenham argumentos como ponteiros. 
 * Faça os programas com estrutura case, menu , funções de entrada,
 * de cálculos e de saída. 
 * 
 * a) Equação do Segundo Grau 
 * b) Triângulo Heron 
 * c) Cálculo da área de um círculo.
 * 
 **/

/**
 * 
 * Um ponteiro é uma variável especial, que consegue armazenar um endereço de memória(RAM) esse edereço pode receber valores de uma variável 
 * que pode ser acessado por outras variáveis.
 * 
 * Alguns exemplos de poneiros podem ser vistos nos exercícios a seguir.
 * 
 **/
 

#include "stdio.h"
#include "iostream"
#include "math.h"

using namespace std;


void    equacao(double *pta, double *ptb, double *ptc, double *ptd)
{

    if (*ptd > 0)
    {
        double x1, x2;
        x1 = (*ptb * (-1)) + sqrt(*ptd)/2**pta;
        x2 = (*ptb * (-1)) - sqrt(*ptd)/2**pta;
        system("clear");
        cout << "=========================================================\n";
        cout << "\nSolução: ";
        cout << "\n\nA = " << *pta << "\nB = " << *ptb << "\nC = " << *ptc << "\n\nDelta = " << *ptd;
        cout << "\n=========================================================\n";
        cout << "\nX1 = " << x1;
        cout << "\nX2 = " << x2 << "\n";
        cout << "=========================================================\n";
        cout << "\nAperte qualquer tecla para voltar ao MENU ";
        getchar();
        getchar();
    }
    else
    {
        cout << "\nSem solução no conjunto dos números Reais!\n";
        cout << "\nAperte qualquer tecla para voltar ao MENU ";
        getchar();
        getchar();
    }
}

double areaCirculo(double *pi, double *raio)
{
    return (*pi * *raio * *raio);
}

void    execultar()
{
    double a, b, c, delta, pi, raio;
    a = 4;
    b = 8;
    c = 2;

    delta = b * b - 4 * a * c;

    pi = 3.142;
    raio = 10;
    
    int tecla;

    MENU:
    system("clear");
    cout << "=========================================================\n";
    cout << "=======***  Bem vindo à calculadora mágica  ***==========\n";
    cout << "=========================================================\n\n";
    cout << "Selecione uma opção: \n";
    cout << "\n[1] Equação do 2 Grau";
    cout << "\n[2] Calcular a área de uma círculo";
    cout << "\n[3] Sair\n\nOpção: ";
    cin >> tecla;
    
    switch (tecla)
    {
        case 1:
        equacao(&a, &b, &c, &delta);
        break;

        case 2:
        cout << "Considerando um raio igual a 10 temos uma área de: " << areaCirculo(&pi, &raio) << endl;
        system("sleep 3");
        break;

        case 3:
            exit(0);
        break;
    }

    goto MENU;
}

int     main()
{
    execultar();

    return(0);
}