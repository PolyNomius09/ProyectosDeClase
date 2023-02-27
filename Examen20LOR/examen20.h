#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

class cuenta{
public:

    float saldo;
    string num_cuenta;

    void compra_tiempo_aire();

    cuenta(){}

    cuenta(string n, float s){
    num_cuenta = n;
    saldo = s;
    }

    ~cuenta(){
        cout<<"Gracias por utilizar BanUpii, Vuelva pronto..."<<endl;
        system("pause");
        cout<<endl;
    }
};

void cuenta::compra_tiempo_aire(){
    int opc1;
        do{
        cout << "Tiempo Aire" << endl;
        cout<<"Cuanto desea comprar!?"<<endl;
        cin>>opc1;
        saldo = saldo - opc1;
        cout<<"......Tiempo Comprado......"<<endl;
        cout<<"Cuenta: "<<num_cuenta<<endl;
        cout<<"Saldo: "<<saldo<<endl;
        } while(false);
        cout<<endl;

    }

class cliente{
    public:
        string nombre;
        string usuario;
        string contrasenia;

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

class cuenta_inversion: public cuenta{
    public:

    int plazo_inversion = 15;
    string fecha_vencimiento = "09/07/2023";

    void ver_saldo();

     cuenta_inversion(string n, float s):cuenta(n,s){}

};

void cuenta_inversion:: ver_saldo(){
        cout<<"Tu cuenta es: "<<num_cuenta<<endl;
        cout<<"Tu saldo es de: "<<saldo<<endl;
        cout<<"Plazo de Inversion: "<<plazo_inversion<<" dias"<<endl;
        cout<<"Su Fecha de vencimiento es el dia: "<<fecha_vencimiento<<endl;
        cout<<endl;
    }
