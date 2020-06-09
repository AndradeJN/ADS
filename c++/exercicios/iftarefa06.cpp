
/**
 * 
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/
#include "iomanip"
#include <iostream>
#include "math.h"
using namespace std;
 
/* Quadro Resumo de SubRotinas / Declarações de funções */
 double ler_A ( );
 double ler_B ( );
 double ler_C ( );
 double cal_Delta ( double a, double b, double c);
 double cal_x1 ( double a, double b, double delta);
 double cal_x2 ( double a, double b, double delta);
 void exibir ( double a, double b, double c, double delta );
 
int main () 
{ 
 setlocale(LC_ALL, "Portuguese");
 
 double a, b, c, delta; int tecla;
 
MENU: /* marca um ponto no código para retornar aqui depois */
system("clear");
cout << "\n***menu***\n1 Executar\n2 Finalizar\nitem:";
cin >> tecla;
 
    /*Verifica o número digitado e execulta a opão 1*/
    if(tecla == 1){
        a = ler_A ( ); 
        b = ler_B ( ); 
        c = ler_C ( );
        if ( a == 0 ) 
            { 
                cout << "\nErro!'A' deve ser diferente de zero!";
                system("sleep 3"); exit(0); 
            }
            
        else 
        { 
            delta = cal_Delta ( a, b, c );
            exibir ( a, b, c, delta ); 
        } 
   
    }
    /*Verifica o número digitado e execulta a opão 2*/
    else if(tecla == 2)
    { 
        cout << "\nO programa será finalizado!"; 
        system ("sleep 3"); 
        exit ( 0 ); 
    }
    else /*Verifica o número digitado e retorna ao menu para valores diferentes de 1 ou 2*/
    {
        cout << "\nOpção inválida, aperte qualquer tecla para tentar novamente!";
        getchar();
        getchar();
        goto MENU;
    }

goto MENU; /* executa novamente a partir do ponto marcado */
return 0; } 


 
double ler_A ( ) 
{ 
    double va; 

    cout << "Valor de A:";
    cin >> va; 
    return va; 
}
 
double ler_B ( ) 
{ 
    double vb; 

    cout << "Valor de B:";
    cin >> vb; 
    return vb; 
}
 
double ler_C ( ) 
{ 
    double vc; 

    cout << "Valor de C:";
    cin >> vc; 
    return vc; 
}
 
double cal_Delta ( double a, double b, double c) 
{
    double d = pow ( b , 2 ) - 4 * a * c;
    return d; 
}
 
double cal_x1 ( double a, double b, double delta ) 
{
    double x = ( -b + sqrt(delta) ) / (2*a) ;
    return x; 
}
 
double cal_x2 ( double a, double b, double delta ) 
{
    double x = ( -b - sqrt(delta) ) / ( 2 * a );
    return x; 
}
 
void exibir ( double a, double b, double c, double delta )
{
    cout << "\nValor de ....A:" << setprecision(5) << fixed << setfill('.') << setw(20) << a ;
    cout << "\nValor de ....B:" << setprecision(5) << fixed << setfill('.') << setw(20) << b;
    cout << "\nValor de ....C:" << setprecision(5) << fixed << setfill('.') << setw(20) << c;
    cout << "\nValor de Delta:" << setprecision(5) << fixed << setfill('.') << setw(20) << delta;
    system("sleep 2");
 
if (delta >= 0)
{ 
    double x1 = cal_x1 ( a , b , delta);
    double x2 = cal_x2 ( a , b , delta);
    
    cout << "\nValor de ....x1:" << setprecision(5) << fixed << setfill('.') << setw(20) << x1;
    cout << "\nValor de ....x2:" << setprecision(5) << fixed << setfill('.') << setw(20) << x2 << endl;
}
else 
{ 
    cout << "\nImpossível calcular x1 e x2\nDelta é negativo!";
}
    system("sleep 3"); 
}