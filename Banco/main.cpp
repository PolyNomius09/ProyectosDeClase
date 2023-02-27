#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

class cuenta_bancaria{
    public:
    float saldo = 1550;

void depositar(){
        float deposito;
        cout<<"Ingrese el monto a depositar:"<<endl;
        cin>>deposito;
        saldo = saldo + deposito;
        cout<<"tu nuevo saldo es de:$ "<<saldo<<endl;
    return;
    }
void retirar(){
    float retiro;
    cout<<"Ingrese la cantidad a retirar:"<<endl;
    cin>>retiro;
    saldo = saldo - retiro;
    cout<<"tu nuevo saldo es de:$ "<<saldo<<endl;
    return;
    }
void devolver_saldo(){
    int opc;
    cout<<"Gustas verificar tu saldo!?"<<endl;
    cout<<"0 = si, 1 = no"<<endl;
    cin>>opc;
    saldo = saldo;
    switch(opc){
    case 0: cout<<"Tu saldo es de: "<<saldo<<endl;
    break;
    case 1: cout<<"ok, vuelva pronto"<<endl;
    exit(3);
    break;
    }

    }
};
int main()
{
    cuenta_bancaria una;
    int opc1;
    do{
    cout<<endl;
    cout << "Hola, que tal, Soy banco MexiRata, que es lo que quieres hacer!?" << endl;
    cout<<"0 = depositar"<<endl;
    cout<<"1 = retirar"<<endl;
    cout<<"2 = consultar saldo"<<endl;
    cout<<"3 = salir"<<endl;
    cin >> opc1;

    switch(opc1){
    case 0: una.depositar();
    break;
    case 1: una.retirar();
    break;
    case 2: una.devolver_saldo();
    break;
    case 3: cout<<"ok, vuelva pronto"<<endl;
    exit(3);
    break;
            }
    } while(true);
}
