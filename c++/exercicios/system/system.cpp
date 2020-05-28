
/**
 * Exercício: System
 * Aluno: Jose Neto Guimarães Andrade
 * Orientador: Elizeu Lemes
 * Linguagem de Programação
 *
 **/
#include "iostream"
#include "math.h"
#include "PesoIdeal.h"
#include "Poligonos.h"
#include "TipoTriangulo.h"
#include "MaiorNumero.h"

int    main()
{
    int option;

    MENU:
    system("clear");
    cout << "=========================================================\n";
    cout << "***                Welcome to ToolBox!                ***\n";
    cout << "=========================================================\n\n";
    cout << "Selecione uma opção: \n";
    cout << "\n[1] Calcular o peso ideal";
    cout << "\n[2] Identificar e calcular área de polígonos";
    cout << "\n[3] Comparar três valores inteiros";
    cout << "\n[4] Tipo de triângulo";
    cout << "\n[5] Sair\n\nOpção: ";
    cin >> option;


    if (option == 1){
       PesoIdeal();
       option = 0;
    }
    if (option == 2)
    {
        Poligonos();
        option = 0;
    }
    if (option == 3)
    {
        MaiorValor();
        option = 0;
    }
    if (option == 4)
    {
        TipoTriangulo();
        option = 0;
    }
    if (option == 5)
    {   system("clear");
        system("exit");
    }
    if (option == 0)
    {
        goto MENU;
    }
    return(0);
}