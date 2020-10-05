#include"iostream"
using namespace std;

int x [] = { -1, 2, 3, 4, 5, 6, 10, 17, 24}, n =10;
int main ( )
{
     setlocale(LC_ALL,"Portuguese");
     int valor, meio, esquerda = 0, direita = n;

     cout << "Valor:";  
     cin >> valor;
     
     for ( int i = esquerda; i <= direita; i++) 
     {  
         meio = esquerda + direita / 2;
        if ( valor == x [meio])    
        { 
            cout<<"\nO número está na posição "<< meio << endl;
            exit(0); 
        }
        if ( valor  > x[ meio ] )
            esquerda = meio ;
        else 
            direita = meio ;

    }  // fim do comando forcout 
    
    cout << "\nValor inexistente nalista:\n";

    return(0); 
}

    