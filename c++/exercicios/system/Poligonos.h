using namespace std;

#include "iostream"

class Poligonos{
    int qlados, tlados;

    public: Poligonos(){
        system("clear");
        LADOS:
        cout << "Entre com o número de lados do poligono entre [3 e 5]: \n";  
        cin >> qlados; 
        if (qlados < 3 )
        {
            cout << "Não é um poligono!";
            cout << "\nAperte qualquer tecla para continuar!\n";
            getchar();
            getchar();
            goto LADOS;
        }
        if (qlados > 5)
        {
            cout << "Polígono não identificado!";
            cout << "\nAperte qualquer tecla para continuar!\n";
            getchar();
            getchar();
            goto LADOS;
        }

        if (qlados == 3 || qlados == 4 || qlados == 5 )
        {
            if (qlados == 3)
            {   
                float l1, l2, l3;
                l1 = 0;
                l2 = 0;
                l3 = 0;

                l1:
                system("clear");
                cout << "Digite o valor numérico do primeiro lado em cm: ";
                cin >> l1;
                if (l1 > 0)
                {
                    l2:
                    system("clear");
                    cout << "Digite o valor numérico do segundo lado em cm: ";
                    cin >> l2;
                    if (l2 > 0)
                    {
                        l3:
                        system("clear");
                        cout << "Digite o valor numérico do terceiro lado em cm: ";
                        cin >> l3;
                        if (l3 > 0)
                        {
                            float area;
                            area = (l1 + l2 + l3)/4;
                            cout << "TRIANGULO!\nÁrea do triangulo: " << area * area << " cm\n";
                            cout << "\nAperte qualquer tecla para continuar!\n";
                            getchar();
                            getchar();
                        }
                        else
                        {
                            cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                            getchar();
                            getchar();
                            goto l2;
                        }
                    }
                    else
                    {
                        cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                        getchar();
                        getchar();
                        goto l2;
                    }
                }
                else
                {
                    cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                        getchar();
                        getchar();
                    goto l1;
                }
            }//Fim do triangulo 

            if (qlados == 4)
            {   
                float la1, la2, la3, la4;
                la1 = 0;
                la2 = 0;
                la3 = 0;
                la4 = 0;

                la1:
                system("clear");
                cout << "Digite o valor numérico do primeiro lado em cm: ";
                cin >> la1;
                if (la1 > 0)
                {
                    la2:
                    system("clear");
                    cout << "Digite o valor numérico do segundo lado em cm: ";
                    cin >> la2;
                    if (la2 > 0)
                    {   
                        la3:
                        system("clear");
                        cout << "Digite o valor numérico do terceiro lado em cm: ";
                        cin >> la3;
                        if (la3 > 0)
                        {   
                            la4:
                            system("clear");
                            cout << "Digite o valor numérico do quarto lado em cm: ";
                            cin >> la4;
                            if (la4 > 0){
                                float area;
                                area = 0;
                                area = (la1 + la2 + la3 + la4)/4;
                                cout << "QUADRADO!\nÁrea do triangulo: " << area * area << " cm\n";
                                cout << "\nAperte qualquer tecla para continuar!\n";
                                getchar();
                                getchar();
                            }else
                            {
                                cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                                getchar();
                                getchar();
                                goto la4;
                            }            
                        }
                        else
                        {
                            cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                            getchar();
                            getchar();
                            goto la3;
                        }
                    }
                    else
                    {
                        cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                        getchar();
                        getchar();
                        goto la2;
                    }
                }
                else
                {
                    cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                        getchar();
                        getchar();
                    goto la1;
                }
            }//Fim do quadrado

            if (qlados == 5)
            {   
                float lb1, lb2, lb3, lb4, lb5;
                lb1 = 0;
                lb2 = 0;
                lb3 = 0;
                lb4 = 0;
                lb5 = 0;

                lb1:
                system("clear");
                cout << "Digite o valor numérico do primeiro lado em cm: ";
                cin >> lb1;
                if (lb1 > 0)
                {
                    lb2:
                    system("clear");
                    cout << "Digite o valor numérico do segundo lado em cm: ";
                    cin >> lb2;
                    if (lb2 > 0)
                    {   
                        lb3:
                        system("clear");
                        cout << "Digite o valor numérico do terceiro lado em cm: ";
                        cin >> lb3;
                        if (lb3 > 0)
                        {   
                            lb4:
                            system("clear");
                            cout << "Digite o valor numérico do quarto lado em cm: ";
                            cin >> lb4;
                            if (lb4 > 0){
                                l5:
                                system("clear");
                                cout << "Digite o valor numérico do quarto lado em cm: ";
                                cin >> lb5;

                                lb5:
                                if (lb5 > 0){
                                    float area;
                                    area = 0;
                                    area = (lb1 + lb2 + lb3 + lb4 + lb5)/4;
                                    cout << "PENTÁGONO!\nÁrea do pentágono: " << area * area << " cm\n";
                                    cout << "\nAperte qualquer tecla para continuar!\n";
                                    getchar();
                                    getchar();
                                }else
                                {
                                    cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                                    getchar();
                                    getchar();
                                    goto lb5;
                                }
                            }else
                            {
                                cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                                getchar();
                                getchar();
                                goto lb4;
                            }            
                        }
                        else
                        {
                            cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                            getchar();
                            getchar();
                            goto lb3;
                        }
                    }
                    else
                    {
                        cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                        getchar();
                        getchar();
                        goto lb2;
                    }
                }
                else
                {
                    cout << "\nO programa aceita apenas valores numéricos maiores que 0 para os lados\nAperte qualquer tecla para continuar!\n";
                        getchar();
                        getchar();
                    goto lb1;
                }
            }//Fim do pentagono
             }
        else
        {
            goto LADOS;
        }
    }
};//Fim da Class Poligonos