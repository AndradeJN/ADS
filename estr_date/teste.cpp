
#include"iostream"
#include"math.h"

using namespace std;


/*
Valormulta = Valorprincipal*0.02;
Valorjuros = Dias*Valorprincipal*(0.01/30)
Valorpagar = Valormulta+Valorjuros+Valorprincipal;
*/

int p = 0; //Variável para percorrer as posições do vetor, estano em 0 ela pega o primeiro valor de cada um.


int valorprinc []={800, 1200, 1000, 1100, 950};

/**
 * valorprinc[0] = 800;
 * valorprinc[1] = 1200;
 * valorprinc[2] = 1000;
 * valorprinc[3] = 1100;
 * valorprinc[4] = 950;
 * 
 */

int dias []={5,6,2,1,1};

/**
 * dias[0] = 5;
 * dias[1] = 6;
 * dias[2] = 2;
 * dias[3] = 1;
 * dias[4] = 1;
 */

int valorpagar[5];

/**
 * valorpagar[0] = null;
 * valorpagar[1] = null;
 * valorpagar[1] = null;
 * valorpagar[1] = null;
 * valorpagar[1] = null;
 * 
 */  


float valormulta() //Esta função precisa retornar o valor de uma posição do vetor * 0,2. Ex: valorprinc[3] = 1100, para isso vamos usar o "p" como posição;
{
	float multa = 0;//Só precisamos colocar o valor principal nessa variável e retornar ela.
	
    multa = valorprinc[p] * 0.2; //Aqui não é preciso se preocupar com o for, vamos fazer isso chamando a função e passando o "p".

    return multa; //Cada vez que chamarmos a função valormulta() teremos o calculo do valor principal.
}

float valorjuros() // Essa função retorna os juros
{
	float juros = 0; //Essa variável precisa paenas fazer o cauculo levando em a posição do vetor * (0,1 / 30).

    juros = dias[p] * valorprinc[p] * (0.01/30);// Considerando que o "p" seja 5 teremos 950 * (0.1 /30),

    return juros; //Aqui retorna o valor do juros com base nos dias.
}


int main ()
{

	for (int p =0; p < 5; p++) //Esse for precisa ir de 0 a 4, pois são essas as posições totais dos vetores.
	{
        float valortotal = valormulta() + valorjuros() + valorprinc[p]; //Como a variável p é global podemos usar dessa forma.
        
		valorpagar[p] = valortotal; //Seria desnecessário, podemos imprimir a variável valortotal sem precisar passar ela.
		
        cout << "O valor total é:" << valortotal << endl;
	}	

    system("sleep 3");
    return 0;
}