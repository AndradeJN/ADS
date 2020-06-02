
/**
 * Exercício: Câmbio BRL USD
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 * 
 * 
 *      Elaborar um programa que efetue a apresentação do valor da conversão em dólar de um valor lido em
 *      real. O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais disponível
 *      com o usuário, para que seja apresentado o valor em moeda americana
 *
 **/


#include "iostream"
#include "stdlib.h" 

using namespace std;

double usd, brl, cambio; //Escopo global

double    lerbrl(double brl)
{
    cout << "Entre com o valor \"Quantidade\" de BRL: ";
    cin >> brl;
    return(brl);
}


double lercambio(double cambio)
{
    cout << "Entre com o valor de cotação do Dolar: ";
    cin >> cambio;
    return(cambio);
}

double     calc()
{
    double qbrl;
    qbrl = lerbrl(brl);
    cambio = lercambio(cambio);
    system("clear");
    cout << "Valor do Dólar: R$ " << cambio << " \nInvestimento: R$ " << qbrl << " \nTotal: $ " << qbrl / cambio;
    cout << "\n\nDigite qualquer tecla para sair!";
    
    getchar();
    getchar();

    return(0);
}

int     main(void)
{
    setlocale(LC_ALL, "Portuguese");
    
    calc();
}