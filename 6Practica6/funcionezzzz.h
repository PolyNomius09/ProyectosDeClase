#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

class radioMP3{
private: float frecuencia;
private: int volumen;

// inicializa frec. y volumen;
public: radioMP3(){
        frecuencia = 89.7;
        volumen = 50;
}

      ~radioMP3(){
        cout<<"Apagando..."<<endl;
        exit(3);
    }

public: void aumentarFrecuencia();

public: void disminuirFrecuencia();

public: void bajarVolumen();

public: void subirVolumen();

public: void verOpciones();

};

void radioMP3::aumentarFrecuencia(){
        if(frecuencia>=0){
        cout<<"******Aumentando Frecuencia****** "<<endl;
        frecuencia+=0.2;
        cout<<endl;
        }
};

void radioMP3::disminuirFrecuencia(){
        if(frecuencia>=0){
        cout<<"******Bajando Frecuencia****** "<<endl;
        frecuencia-=0.2;
        cout<<endl;
        }
};

void radioMP3::bajarVolumen(){
        if(volumen>=0){
        cout<<"******Bajando Volumen****** "<<endl;
        volumen-=5.0;
        cout<<endl;
        }
};

void radioMP3::subirVolumen(){
        if(volumen>0){
        cout<<"******Aumentando Volumen****** "<<endl;
        volumen+=5.0;
        cout<<endl;
        }
};

void radioMP3::verOpciones(){
    cout<<"La Frecuencia/Estacion actual es: "<<frecuencia<<endl;
    cout<<"El Volumen actual es de: "<<volumen<<endl;
    cout<<endl;
};
