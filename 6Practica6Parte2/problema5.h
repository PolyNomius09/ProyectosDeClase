#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//Problema 5

using namespace std;

class Transporte{
    public:
    int no_pasajeros;
    string nombre;
    string modelo;
    string aerolinea;
    int asientos;
    int no_asientos;

    void comprar_asientos();

    Transporte(int p, int a){
        no_pasajeros = p;
        asientos = a;
    }

};

void Transporte::comprar_asientos(){

}

class avion: public Transporte{
    public:

    void mostrar_info(){
    cout<<"El numero de pasajeros de este avion es de: "<<no_pasajeros<<endl;
    cout<<"Cuenta con: "<<no_asientos<<endl;
    }

    void mostrar_avion(){
        cout<<"Los asientos disponibles son: "<<asientos<<endl;
    }

        avion(int p, int a):Transporte(p, a){
        }
};

class avion_premium: public Transporte{
    public:

        int no_pisos = 3;

        void mostrar_info(){
    cout<<"El numero de pasajeros de este avion es de: "<<no_pasajeros<<endl;
    cout<<"El numero de pisos que tiene es de: "<<no_pisos<<endl;
    cout<<"Cuenta con: "<<no_asientos<<endl;
    cout<<"Los asientos disponibles son: "<<asientos<<endl;
    }

    void mostrar_avion(){
        cout<<"Los asientos disponibles son: "<<asientos<<endl;
    }

        avion_premium(int p, int a):Transporte(p, a){
        }
};
