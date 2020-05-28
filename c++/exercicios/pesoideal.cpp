/**
 * Exercício: Peso ideal por sexo
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/

#include "iostream"

using namespace std;

int     main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int sexo;
    float altura;
    float pesoideal;

    cout << "Digite sua altura: ";
    cin >> altura; 

    ESCOLHA:
    cout << "Digite 1 para sexo FEMININO ou 2 para sexo MASCULINO: ";
    cin >> sexo;

    if (sexo == 1 or sexo == 2)
    {
        if(sexo == 2){
            pesoideal = (72.7 * altura) - 58;
            cout << "Sexo MASCULINO!" << endl << "Seu peso ideal é: " << pesoideal << "Kg" <<endl;
        }else
        {
             pesoideal = (62.1 * altura) - 44.7;
             cout << "Sexo FEMININO!" << endl << "Seu peso ideal é: " << pesoideal << "Kg" <<endl;
        } 
    }else
    {
       goto ESCOLHA;
    }
    return(0);
}