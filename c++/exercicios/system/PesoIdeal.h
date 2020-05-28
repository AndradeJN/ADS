using namespace std;

class PesoIdeal{
    int sexo;
    float altura;
    float pesoideal;

    public: PesoIdeal()
    { 

    cout << "Digite sua altura: ";
    cin >> altura; 

    ESCOLHA:
    cout << "Digite 1 para sexo FEMININO ou 2 para sexo MASCULINO: ";
    cin >> sexo;

    if (sexo == 1 or sexo == 2)
    {
        if(sexo == 2)
        {
            pesoideal = (72.7 * altura) - 58;
            cout << "Sexo MASCULINO!" << endl << "Seu peso ideal é: " << pesoideal << "Kg" <<endl;
            cout << "\nAperte qualquer tecla para continuar!\n";
            getchar();
            getchar();  
        }else
            {
                pesoideal = (62.1 * altura) - 44.7;
                cout << "Sexo FEMININO!" << endl << "Seu peso ideal é: " << pesoideal << "Kg" <<endl; 
                cout << "\nAperte qualquer tecla para continuar!\n";
                getchar();
                getchar();          
            } 
        }else
        {
        goto ESCOLHA;
    }
    }
};//Fima da Class PesoIdeal