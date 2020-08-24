#include "iostream"
#include "math.h"
#include "string"
using namespace std;
 
int linha = -1; // armazena o número de cada linha inserida
 
// Declaramos vetores não explicitos, ou seja, vazios
string nome [2]; 
int idade [2]; 
double salario [2];
 
string lerNome() 
{ 
 string nome;
 cout << "\nNome:"; 
 cin.ignore();
 getline(cin, nome);
 return nome; 
}
 
int lerIdade() 
{ 
 int idade; 
 cout << "\nIdade:"; 
 cin >> idade; 
 return idade; 
}
 
double lerSalario() 
{ 
 double sal; 
 cout << "\nSalário:"; 
 cin >> sal; 
 return sal; 
}
 
void novaLinha ( string nom, int ida, double sal )
{
 linha ++; // linha = linha + 1 
 
 
 string nom_;
 nom_ = nom;
 nome [ linha ] = nom_;
 
 idade [ linha ] = ida;
 salario [ linha ] = sal;
 
 cout << "Inserindo linha..." << endl; 
 system("sleep 2");
}
 
void mostrar ( )
{
 for ( int i = 0; i <= linha; i++)
 { 
 cout << nome [i] << " - " << idade [i] << " - " << salario [i] << endl; 
 }
 
 system("sleep 3");
}
 
int main() 
{ 
 
 string nome_; int idade_; double salario_;
 
 int tecla;
 
 MENU:
 system("clear");
 cout << "* Menu *\n1 ler\n2 exibir\n3 sair\nitem:";
 cin >> tecla;
 
 switch ( tecla ) 
 {
 case 1: nome_ = lerNome();
 idade_ = lerIdade();
 salario_= lerSalario();
 novaLinha ( nome_, idade_, salario_);
 break;
 
 case 2: mostrar ();
 break;
 
 case 3: exit(0); break;
 }
 
 goto MENU;
 
return 0; }