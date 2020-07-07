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


string texto, palavra;
int count = 0;


void exibir(string texto);
string lerstr();

string lerstr()
{
    cin.ignore();
    string str;
    cin >> str;

    return str;

}

void exibir(string texto, string palavra)
{
    int t = texto.size(); // tamanho
    int p = palavra.size(); // tamanho
 
    for ( int i = 1; i < t ; i ++ ) 
    {
        int aux = i; 
        for ( int i = 1; i < p; i++ ) 
        {   
            count = 0;
            if(texto[i] == palavra[1])
            {
                count++;
            }

        }
    }
    cout << "\nAs seguinte palavra" << palavra << " Repetiu " << count << "Vezes!\n";
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