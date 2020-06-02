
/**
 * Exercício: Quadrado da diff
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 * 
 * 
 *      |*| Ler dois inteiros (variáveis A e B) e imprimir 
 *      |*| o resultado do quadrado da diferença do primeiro 
 *      |*| valor pelo segundo.
 *
 **/

#include "iostream"
#include "stdlib.h" 

using namespace std;

int a, b;
double result;

int     lera(int a)
{
    cout << "Entre com um valor inteiro para A: ";
    cin >> a;
    return(a);
}

int     lerb(int b)
{
    cout << "Entre com um valor inteiro para B: ";
    cin >> b;
    return(b);
}

double     calc(){
    int va, vb;
    va = lera(a);
    vb = lerb(a);
    result = va - vb;
    cout << "O resultado do quadrado da diferença do primeiro valor pelo segundo é: " << result*result;
    cout << "\n\nDigite qualquer tecla para sair!";
    
    getchar();
    getchar();

    return(0);
}

int     main (void)
{
    setlocale(LC_ALL, "Portuguese");

    calc();
}
