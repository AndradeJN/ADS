#include "iostream"
#include "cstdlib"
#include "string"
#include "math.h"
#include "iomanip"

using namespace std;
 
#define n 2
int linha = -1;
 
typedef struct x tab;
 
struct x 
{
    double delta [ n ];
    double x1 [ n ];
    double x2 [ n ];
};
 
tab t1; // criando minha tabela dentro do codigo
tab *pt1; // criar um ponteiro para apontar para t1
 
double lerA() {
    double a;
    cout << "\nDigite A diferente de Zero:";
    cin >> a;
    return a;
}

double lerB() {
    double b;
    cout << "\nDigite B:";
    cin >> b;
    return b;
}
 
double lerC()
{
    double c;
    cout << "\nDigite C:";
    cin >> c;
    return c;
}
 
double getDelta (double a, double b, double c )
{ 
    return (pow(b,2) - 4 * a * c) ; 
}
 
double getX1 (double a, double b, double delta) 
{ 
     double x1 = (-b + sqrt(delta))/ (2*a);
    return x1; 
}
 
double getX2 (double a, double b, double delta ) 
{
    double x2 = (-b - sqrt(delta))/ (2*a);
    return x2; 
}
 
void mostrar ( double delta, double x1, double x2 ) 
{
    cout<< fixed << setprecision (2) << "\nValor de Delta:" << delta ;
    cout<< fixed << setprecision (2) << "\nValor de X1...:" << x1 ;
    cout<< fixed << setprecision (2) << "\nValor de X2...:" << x2 << endl;
    system("sleep 4");
}
 
void inserirLinha (double delta_, double x1_, double x2_ ) 
{
    linha ++; // cria uma nova linha
    pt1->delta [linha] = delta_;
    pt1->x1 [linha] = x1_;
    pt1->x2 [linha] = x2_;
}
 
void mostrarStruct ( ) 
{ 
    system("clear");
    for (int i=0; i<=linha; i++ ) 
    {
        cout << endl << pt1->delta [ i ] << " " ;
        cout << pt1->x1 [ i ] << " " ;
        cout << pt1->x2 [ i ];
    }
 
    cout << endl;
    system("sleep 5");
}
 
int main () 
{
    pt1 = &t1; // coloca o endereco de t1 dentro do ponteiro
 
    string menu;
    int tecla;
 
    double a, b, c, delta, x1, x2;
 
    MENU:
    system("clear");
    menu = "\n*** Ponteiros para Struct ";
    menu += "\n1 Leitura de A, B e C";
    menu += "\n2 Mostrar resultados";
    menu += "\n3 Sair do Programa";
    menu += "\nItem: ";
    cout << menu;
 
    cin >> tecla;
 
    switch ( tecla ) 
    {
        case 1: a = lerA();
        if (a == 0)
        { 
            cout << "O valor de A deve ser diferente de Zero!" << endl;
            goto MENU;
        }
    
        b = lerB();
        c = lerC();
    
        delta = getDelta (a, b, c );
    
        if ( delta < 0 )
        { 
            cout << "ERRO!O valor de Delta deve ser Positivo! Raizes nao calculadas!" << endl;
            goto MENU;
        }
    
    
        x1 = getX1(a, b, delta );
        x2 = getX2(a, b, delta );
    
        inserirLinha (delta, x1, x2 ); // armazena no struct
    
        break;
    
        case 2: mostrarStruct (); break;
    
        case 3: exit(0); break;
    
        goto MENU;
    
        return 0;
    } 
}