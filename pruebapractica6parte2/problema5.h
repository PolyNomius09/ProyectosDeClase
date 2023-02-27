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

};

void Transporte::comprar_asientos(){

}

class avion: public Transporte{
    public:

    void mostrar_info(){
    cout<<"El numero de pasajeros de este avion es de: "<<no_pasajeros<<endl;
    }

    void mostrar_avion(){

    }

        avion(int p = 0){
            no_pasajeros = p;
        }
};

class avion_premium: public Transporte{
    public:

        void mostrar_info(){
    cout<<"El numero de pasajeros de este avion es de: "<<no_pasajeros<<endl;
    }

    void mostrar_avion(){

    }

        avion_premium(int t = 0){
            no_pasajeros = t;
        }
};
