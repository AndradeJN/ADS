using namespace std;

class TipoTriangulo{
    public: TipoTriangulo(){
        int anguloa, angulob, anguloc;

        cout << "Entre com o os três angulos do triângulo! ";
        cout << "\nÂngulo 1: ";
        cin >> anguloa;
        cout << "\nÂngulo 2: ";
        cin >> angulob;
        cout << "\nÂngulo 3: ";
        cin >> anguloc;

        if (anguloa == 90 || angulob == 90 || anguloc == 90)
        {
            cout << "Triângulo  Retângulo";
        }
         if (anguloa  < 90 && angulob < 90 && anguloc < 90)
        {
            cout << "Triângulo Acutângulo";
        }
        if (anguloa > 90 || angulob > 90 || anguloc > 90)
        {
            cout << "Triângulo Obtusângulo";
        }
        cout << "\nAperte qualquer tecla para continuar!\n";
        getchar();
        getchar();
    }
};//Fim classe triangulo