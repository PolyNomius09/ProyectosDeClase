#include <iostream>
#include <stdlib.h>
#include <windows.h>
//Problema 1: #include "funcionezzzz.h"
//Problema 2 y 3:
#include "problema2.h"

using namespace std;

int main()
{
    cliente uno;
    uno.login();

    int opc, niggas_phone;
    cuenta bancos[2];
    bancos[0] = cuenta();
    bancos[1] = cuenta("32654784", 5700);

    cout<<"Bienvenido a Cajeros BanUpii!!"<<endl;
    cout<<endl;
    cout<<"Tus Cuentas son:"<<endl;
    cout<<"0. "<<bancos[0].num_cuenta;
    cout<<"1. "<<bancos[1].num_cuenta;

    cout<<"Con que cuenta quieres trabajar? (0, 1)"<<endl;
        cin>>niggas_phone;
        cout<<endl;

        if (niggas_phone>1)
        {
            cout<<"Elige una opcion valida"<<endl;
        }

    do{
        cout << "MENU" << endl;
       // cout<<"1. Realizar un retiro"<<endl;
        cout<<"2. Comprar tiempo aire"<<endl;
        cout<<"3. Ver saldo"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opc;

    switch(opc){
      // case 1: bancos.retiro();
      //  break;
        case 2: bancos[niggas_phone].compra_tiempo_aire();
        break;
        case 3: bancos[niggas_phone].ver_saldo();
        break;
        case 4: cout<<"Saliendo de la cuenta..."<<endl;
        //exit(3);
        break;
                }
    }   while (opc!=4);
}
