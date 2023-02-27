#include <iostream>
#include <stdlib.h>
#include "celularhdp.h"

using namespace std;

int main()
{
    celular uno[2];

    uno[0] = celular();
    uno[1] = celular(30, "5553231388");

    int opc, niggas_phone;

    cout<<endl;
    cout<<"Con que celular quieres trabajar? (0, 1)"<<endl;
        cin>>niggas_phone;
        cout<<endl;

        if (niggas_phone>1)
        {
            cout<<"Te CREES CHITOCHITO LA CDTM"<<endl;
            cout<<"YO SOY EL QUE HACE LOS CHISTES"<<endl;
            cout<<"LARRRGATE, LAAARRRGATEEEEE"<<endl;
            exit(3);
        }

        cout<<"Bienvenido a tu celular!!"<<endl;

    do{
        cout << "Que quieres hacer!?" << endl;
        cout<<"1. Llamar"<<endl;
        cout<<"2. Enviar mensaje"<<endl;
        cout<<"3. Consultar Saldo"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opc;

    switch(opc){
        case 1: uno[niggas_phone].llamar();
        break;
        case 2: uno[niggas_phone].mensajes();
        break;
        case 3: uno[niggas_phone].ver_saldo();
        break;
        case 4: cout<<"Apagando Dispositivo..."<<endl;
        //exit(3);
        break;
                }
    }   while (opc!=4);
}
