/**
 * Exercício Strings
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/


#include "iostream"
#include "math.h"
#include "string"
using namespace std;


string texto, palavra;
int count = 0;


void exibir(string texto);
string lerstr();

string lerstr()
{
    cin.ignore();
    string str;
    getline(cin, str);

    return str; 

}

void exibir(string texto, string palavra)
{
    int count=0, repete=0, i=0;
    
    while(repete != -1)
    {
        repete = texto.find(palavra, i);
        i = repete+1;
        if (repete >= -1)
        {
            count++;
        }
    }

    if(count == 0)
    {
        cout << " A palavra: (" << palavra << ") não foi encontrada\n\nAperte qualquer tecla para voltar ao menu!!";
    } 
    else
    {
        cout << "\nA palavra: (" << palavra << ") repetiu " << count << " vezes!\n\nAperte qualquer tecla para voltar ao menu!!";
    }
    getchar();
}

int main()
{

    int tecla;

    tecla = 0;
    while (tecla != 3)
    {    
        system("clear");
        cout << "\n====================================\n";
        cout << "Escolha uma opção: \n1 - Ler Texto\n2 - Proccurar palavra\n3 - Sair";
        cout << "\n\n====================================\n";
        cout << "\nOpção: ";
        cin >> tecla;
        
        

        if (tecla == 1)
        {  
            system("clear");
            cin.ignore();
            cout << "Digite o texto: ";
            texto = lerstr();
        }
        else if (tecla == 2)
        {
            system("clear");
            cout << "Digite uma palavra para procurar no texto: ";
            palavra = lerstr();
            exibir(texto, palavra);
        }
        
    }
    system("clear");

    return(0);
}