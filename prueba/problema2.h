#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

class cuenta{
public:

    float saldo;
    string numero;
    string num_cuenta;

    void retiro();

    void compra_tiempo_aire();

    void ver_saldo();

    cuenta(){
    num_cuenta = "56487952";
    saldo = 15000;
    }

    cuenta(string n, float s){
        num_cuenta = n;
        saldo = s;
    }

    ~cuenta(){
        cout<<"Gracias por utilizar cajeros BanUpii"<<endl;
        system("pause");
        cout<<endl;
    }
};

void cuenta::retiro(){
    int opc2;
        do{
        cout << "Cuanto desea Retirar" << endl;
        cout<<"1. $20"<<endl;
        cout<<"2. $50"<<endl;
        cout<<"3. $100"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opc2;

    switch(opc2){
        case 1: saldo = saldo - 20;
        break;
        case 2: saldo = saldo - 50;
        break;
        case 3: saldo = saldo - 100;
        break;
        case 4: cout<<"Regresando al menu..."<<endl;
        //exit(3);
        break;
                }
    }   while (opc2!=4);
    }

void cuenta::compra_tiempo_aire(){
    int opc1;
        do{
        cout << "Tiempo Aire" << endl;
        cout<<"1. $20"<<endl;
        cout<<"2. $50"<<endl;
        cout<<"3. $100"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opc1;

    switch(opc1){
        case 1:
        if(saldo>=20.0){
        cout<<"Ingrese el numero al cual quiere comprar el tiempo aire: "<<endl;
        cin>>numero;
        cout<<"*****Tiempo Aire Comprado*****"<<endl;
        saldo-=20;
        cout<<endl;
        }
    else{
        cout<<"No tienes Saldo, recarga para poder hacer esta accion"<<endl;
        cout<<endl;
        }
        break;

        case 2:
        if(saldo>=50.0){
        cout<<"Ingrese el numero al cual quiere comprar el tiempo aire: "<<endl;
        cin>>numero;
        cout<<"*****Tiempo Aire Comprado*****"<<endl;
        saldo-=50;
        cout<<endl;
        }
    else{
        cout<<"No tienes Saldo, recarga para poder hacer esta accion"<<endl;
        cout<<endl;
        }

        break;

        case 3:
        if(saldo>=100.0){
        cout<<"Ingrese el numero al cual quiere comprar el tiempo aire: "<<endl;
        cin>>numero;
        cout<<"*****Tiempo Aire Comprado*****"<<endl;
        saldo-=100;
        cout<<endl;
        }
    else{
        cout<<"No tienes Saldo, recarga para poder hacer esta accion"<<endl;
        cout<<endl;
        }
        break;
        case 4: cout<<"Regresando al menu..."<<endl;
        //exit(3);
        break;
                }
        }   while (opc1!=4);
    }

void cuenta::ver_saldo(){
        cout<<"Tu cuenta es: "<<num_cuenta<<endl;
        cout<<"Tu saldo es de: "<<saldo<<endl;
        cout<<endl;
    }

class cliente{
    public:
        string nombre;
        string usuario;
        string contrasenia;
        int num_cuentas;

    void login();
};

void cliente::login(){
        cout<<"Usuario: "<<endl;
        cin>>usuario;
        cout<<"Contrasenia: "<<endl;
        cin>>contrasenia;
        system("cls");

        nombre = "Rafael";
        cout<<"Bienvenid@: "<<nombre<<endl;
}
