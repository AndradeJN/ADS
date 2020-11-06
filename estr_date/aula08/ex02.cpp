
/**
 * 
 * Exercício: Trigonométria
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Estrutura de dados
 * 
 **/
 


#include "iostream"
#include "cstdlib"
#include "string.h"
#include "math.h"
#include "iomanip"
#include <cmath>

using namespace std;

void    hipo ( );
void    catetos ( );
void    tudo ( );

int somaC;
double Rhipo;

int     ler_catA ( )
{   
    int catA;
    cout << "Digite o cateto A: ";
    cin >> catA;
    return catA;
}

int     ler_catB ( )
{   
    int catB;
    cout << "Digite o cateto B: ";
    cin >> catB;
    return catB;
}

int     ler_RCat ( )
{   
    int RCat;
    return RCat;
}

void    catetos ( int CATa , int CATb , int RCat )
{
    int x , y ;

    x=(CATa * CATa );
    y=(CATb * CATb );
 
   RCat= x + y ;
   somaC = RCat;
   system("sleep 3");
}

void    hipo ( int somaC, double Hipo  )
{
    Hipo = somaC;
   
    sqrt(Hipo);
    
    Rhipo = Hipo ; 
    system("sleep 5");
}

void   tudo ( )
{
 
   cout << "A soma dos catetos é: "<< somaC<< endl;
   
   cout << sqrt(Rhipo) << endl;
   
  
    system("sleep 5");
}


int main(int argc, char** argv) 
{
    string menu, nome;
    int tecla;

    MENU:
    system("clear");
    menu =  "\n*** Triangulo ";
    menu += "\n1 Defina os catetos";
    menu += "\n2 calcule a Hipotenusa";
    menu += "\n3 Exibir ";
    menu += "\n4 Sair do Programa";
    menu += "\nItem: ";
    cout << menu;
 
    cin >> tecla;

        int CATa;
        int CATb;
        int RCat;
        double Hipo;

    switch(tecla)
    {
        case 1:

        CATa = ler_catA();
        CATb = ler_catB();
        RCat = ler_RCat();
 

        catetos (CATa, CATb, RCat );

            break;
    
        case 2:
            
            hipo(somaC , Hipo );
            
            break;

        case 3:
            
            tudo ( );
            
            break;
        case 4:
            
            exit(0); 
            
            break;

        default:
            break;
    }
    goto MENU;
}