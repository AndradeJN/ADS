
using namespace std;

class MaiorValor{
    int n1;
    int n2;
    int n3;

    public: MaiorValor()
    {
        LEITURA:
        cout << "Digite 3 umeros diferentes!";
        cout << "\nValor 1: " ;
        cin >> n1;
        cout << "\nValor 2: "; 
        cin >> n2;
        cout << "\nValor 3: ";
        cin >> n3;
        
        system("clear");
        if (n1 == n2 || n1 == n3 || n2 == n3)
        {
            goto LEITURA;
        }else{

            if (n1 < n2  && n2 < n3 && n1 < n3)//123
            {
                cout << "Maior numero: " << n3 << endl;
                cout << "\nAperte qualquer tecla para continuar!\n";
                getchar();
                getchar();
            }
            else if (n1 < n2  && n2 > n3 && n3 > n1)//132
            { 
                cout << "Meio numero: " << n3 << endl;
                cout << "\nAperte qualquer tecla para continuar!\n";
                getchar();
                getchar(); 
            }
            else if (n1 > n2  && n2 < n3 && n3 > n1)//213
            {
                cout << "Maior numero: " << n3 << endl; 
                cout << "\nAperte qualquer tecla para continuar!\n";
                getchar();
                getchar();
            }
            else if (n1 < n2  && n1 > n3 && n3 < n2)//231
            {
                cout << "Maior numero: " << n2 << endl; 
                cout << "\nAperte qualquer tecla para continuar!\n";
                getchar();
                getchar();
            }
            else if (n1 > n2 && n1 > n3 && n2 < n3)//312
            {
                cout << "Maior numero: " << n1 << endl;  
                cout << "\nAperte qualquer tecla para continuar!\n";
                getchar();
                getchar();
            }
            else//321
            {
                cout << "Maior numero: " << n1 << endl;
                cout << "\nAperte qualquer tecla para continuar!\n";
                getchar();
                getchar();
            }        
        }
    }
};//Fim maior numero