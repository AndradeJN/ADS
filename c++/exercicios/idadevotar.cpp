/**
 * Exercício: Idade para votar 
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/

#include "string"
#include "time.h"
#include "iostream"

using namespace std;

int  main ()
{
    setlocale(LC_ALL, "Portuguese");

    int yearb, yaera, age;

    cout << "Digite o ano do seu nascimento: ";
    cin >> yearb;
    cout << "Digite o ano atual: ";
    cin >> yaera;

    age =  yaera - yearb;

    cout << "Sua idade é: " << age << " anos" << endl;

    if (age >= 16)
    {
        if(age >= 18 ){
            if(age >= 60){
                cout << "No Brasil você deve votar, mas não obrigatóriamente após os 60 de idade!" << endl;
                return(0);
            }else{
                cout << "No Brasil você deve votar ou justificar a ausência, não votar imacarretará multa!" << endl;
                return(0);
            }
        }
        else{
            cout << "No Brasil você deve votar, mas não obrigatóriamente entre os 16 e 18 anos de idade!" << endl;
            return(0);
        }
    }else{
        cout << "No Brasil você só pode votar a partir dos 16 anos" << endl;
    }
    return(0);
}