#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

class celular{
public:
long saldo; //el saldo lo modificas tu
string numero;
string mensaje;
string num_cel;

void mensajes();

void llamar();

void ver_saldo();

    //constructor predeterminado // No recibe parametros
    celular(){
        saldo = 100;
        num_cel = "5540227213";
    }

    //Constructor por parametro
    celular(float s, string c){
        saldo = s;
        num_cel = c;
    }

    celular(float s){
        saldo = s;
    }

    ~celular(){
        cout<<"Apagando..."<<endl;
        system("pause");
    }

};

void celular::mensajes(){
    if(saldo>=1.0){
        cout<<"Ingrese el numero al cual quiere mandar mensaje: "<<endl;
        cin>>numero;
        cout<<"Ingresa el mensaje: "<<endl;
        cin>>mensaje;
        cout<<"*****Mensaje Enviado*****"<<endl;
        saldo--;
        cout<<endl;
        }
    else{
        cout<<"No tienes Saldo, recarga para poder hacer esta accion"<<endl;
        cout<<endl;
        }
    }

void celular::llamar(){
    if(saldo>=2.0){
        cout<<"Ingrese el numero al cual quiere llamar: "<<endl;
        cin>>numero;
        cout<<"Llamando al numero: "<<numero<<endl;
        cout<<"*****Llamando*****"<<endl;
        cout<<"El Numero que usted marco, esta ocupado, intente mas tarde"<<endl;
        saldo-=2;
        cout<<endl;
        }
    else{
        cout<<"No tienes Saldo, recarga para poder hacer esta accion"<<endl;
        cout<<endl;
        }
    }

void celular::ver_saldo(){
        cout<<"Tu numero es: "<<num_cel<<endl;
        cout<<"Tu saldo es de: "<<saldo<<endl;
        cout<<endl;
    }
