/**
 * Exercício: Preço da maçã 
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/

#include "iostream"
#include <iomanip>

using namespace std;

int     main()
{
    double preco, quant;

    preco = 0;
    quant = 0;

    ESCOLHA:
    cout << "Escolha algumas maçãs e saiba quanto deve pagar por elas!" <<endl;
    cout << "Quantas maçãs foram qaompradas? ";
    cin >> quant;

    if (quant > 0)
    {
        if (quant < 12)
        {
            preco = quant * 0.30;
            cout << "Você adquiriu apenas " << quant << " maçãs, nesse caso não obteve o desconto de R$ 0,05 para compras a partir de 12 unidades, o valor a ser pago é de R$: "; 
            cout << fixed << setprecision(2) << preco << endl;
        }else
        {
            preco = quant * 0.25;
            cout << "Você adquiriu " << quant << " maçãs, nesse caso obteve o desconto de R$ 0,05 para compras a partir de 12 unidades, o valor a ser pago é de R$: ";
            cout << fixed << setprecision(2) << preco << endl;
        }
    }else
    {
        cout << "Você precisa comprar ao menos uma maçã para calcular o valor";
        goto ESCOLHA;
    }
    
}