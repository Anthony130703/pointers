#include<iostream>
using namespace std;

int suma(int a, int b)
{
    return a+b;
}
int resta(int a, int b)
{
    return a-b;
}
void aplicarOperacion(int (*p)(int, int),int x, int y)
{
    int resultado = p(x,y);
    cout << "Resultado: "<< resultado;

}

int main()
{
    int (*p)(int , int) = nullptr;
    int n,m, opcion;
    cout << "Digite dos numeros: "<<endl;
    cout << "Numero: ";
    cin>>n;
    cout << "Numero: ";
    cin>>m;
    cout << "Digite la operacion a realizar: "<<endl;
    cout << "1. Suma"<<endl;
    cout << "2. Resta" <<endl;
    cin >>opcion;

    switch(opcion)
    {
        case 1:
        p = suma;
        break;
        case 2:
        p = resta;
        break;
        default:
        cout << "Opcion invalida"<<endl;
        return 1;
    }

    aplicarOperacion(p, n, m);

    return 0;
}