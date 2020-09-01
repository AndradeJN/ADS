
/**
 * Exercício: Struct
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Estrutura de dados
 * 
 * Elaborar um programa de computador que efetue a leitura de quatro valores inteiros (variáveis A, B, C e D).
 * Ao final o programa deve apresentar o resultado do produto (variável P) do primeiro com o terceiro
 * valor, e o resultado do produto (variável P) do primeiro com o terceiro valor, e o resultado da soma
 * (variável S) do segundo com o quarto valor.
 *
**/

#include "iostream"
#include"iomanip"
#include"string.h"

using namespace std;

const int n = 1;
const int i = 0;
int a, b, c, d, p, q, s;


struct values 
{
    int a[n];
    int b[n];
    int c[n];
    int d[n];
};

struct values _values;

int ler_a()
{
    system("clear");
    cout << "Digite o valor para A: ";
    cin >> a;
    return a; 
}

int ler_b()
{
    system("clear");
    cout << "Digite o valor para B: ";
    cin >> b;
    return b; 
}

int ler_c()
{
    system("clear");
    cout << "Digite o valor para C: ";
    cin >> c;
    return c; 
}

int ler_d()
{
    system("clear");
    cout << "Digite o valor para D: ";
    cin >> d;
    return d;
}

void inserir()
{
    _values.a[i] = ler_a();
    _values.b[i] = ler_b();
    _values.c[i] = ler_c();
    _values.d[i] = ler_d();
}

void calcular()
{
    p = _values.a[i] * _values.c[i];
    s = _values.b[i] + _values.d[i];
}

void exibir()
{
    system("clear");
    cout << "Produto de " << _values.a[i] << " x " << _values.c[i] << " é: " << p << endl;
    cout << "A soma de " << _values.b[i] << " + " << _values.d[i] << " é: " << s << endl;
    cout << "Use qualquer tecla para continuar"; 
    getchar();
    getchar();
}

int     main()
{
    int tecla;
    while ( tecla != 4 )
    { 
        system("clear");
        cout << "\n1 Inserir dados\n2 Calcular\n3 Exibir\n4 Sair\nitem:";
        cin >> tecla; 

        switch ( tecla )
        {
            case 1: inserir();
            break;

            case 2: calcular(); 
            break;

            case 3: exibir(); 
            break;

            case 4: exit(0); break;
        }
    }
    return(0);
}