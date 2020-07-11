
/**
 * 
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/
#include "iostream"
#include "math.h"
#include "string"
using namespace std;



string nome [] = {"Sara Lemes","Ricardo Jafé"};
double salario [] = {12000, 10243.20};
int i, idade[]={30, 45};
 

void exibir(string nome, double salario, int idade)
{   
    cout << "Nome: "<< nome <<"\nSlário: "<<salario << "\nIdade: "<< idade << "\n" << endl;
}


int main () 
{ 
    setlocale(LC_ALL, "Portuguese-brasilian");
    system("clear");
    double x;
    
    for (i =0; i <=1; i++)
    {   
        salario [i] = salario [i] * 1.1; 
        exibir(nome[i], salario[i], idade[i]);
    } 
        
    return 0; 
 
}