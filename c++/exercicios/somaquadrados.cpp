
/**
 * Exercício: Somar quadrados
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 * 
 * 
 *          Elaborar um programa que efetue a leitura de três valores (A, B e C) e apresente como resultado final à
 *          soma dos quadrados dos três valores lidos.
 *
 **/

#include "stdio.h"
#include "iostream"
#include "math.h"

using namespace std;

int a, b, c, res;

int quada(int a)
{
    cout << "Entre com o valor de A: ";
    cin >> a;
    return(a*a);
}
int quadb(int b)
{
    cout << "Entre com o valor de B: ";
    cin >> b;
    return(b*b);
}
int quadc(int c)
{
    cout << "Entre com o valor de C: ";
    cin >> c;
    return(c*c);
}
 int sum(int res)
 {
    int va, vb, vc;
    va = quada(a);
    vb = quadb(b);
    vc = quadc(c);
    res = va + vb + vc;
    cout << "\nA soma dos quadrados  de A B e C é: " << res;
     cout << "\n\nDigite qualquer tecla para sair!";
    
    getchar();
    getchar();
    return(0);
 }

 int    main(void)
 {  
     setlocale(LC_ALL, "Portuguese");
     
     system("clear");
     sum(res);
 }