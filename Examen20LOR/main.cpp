#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "examen20.h"

using namespace std;

int main(){
    cliente uno;
    uno.login();

    int opc;
    cuenta_inversion bancos("56487952", 15000);

    cout<<"Bienvenido a BanUpii!!"<<endl;
    cout<<endl;
    cout<<"Tu Cuenta de Inversion es:"<<endl;
    cout<<"1. "<<bancos.num_cuenta;
    cout<<endl;
    cout<<endl;

    do{
        cout << "MENU" << endl;
        cout<<"2. Comprar tiempo aire"<<endl;
        cout<<"3. Ver saldo"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opc;

    switch(opc){
        case 2: bancos.compra_tiempo_aire();
        break;
        case 3: bancos.ver_saldo();
        break;
        case 4: cout<<"Saliendo de la cuenta..."<<endl;
        //exit(3);
        break;
                }
    }   while (opc!=4);
}
