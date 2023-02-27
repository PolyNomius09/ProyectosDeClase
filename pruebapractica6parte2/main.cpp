#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include "problema4.h"
//#include "problema5.h"

using namespace std;

int main(){
    /*
    avion uno;
    avion_premium dos;

    avion.no_pasajeros = avion();

    avion_premium.no_pasajeros = avion_premium();


    int opc1, boletos;

    cout<<"Bienvenido al Aeropuerto!!"<<endl;
    do{
    cout<<"Que tipo de boleto desea comprar?"<<endl;
    cout<<"0. Boleto Estandar"<<endl;
    cout<<"1. Boleto Premium"<<endl;
        cin>>boletos;
        cout<<endl;

        if (boletos>1)
        {
            cout<<"Elige una opcion Valida"<<endl;
        }
    } while (true);

    do{
        cout<<"1. Mostrar informacion del avion"<<endl;
        cout<<"2. Comprar Boleto"<<endl;
        cout<<"3. Mostrar Avion"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opc1;

    switch(opc1){
        case 1: Transporte[boletos].mostrar_info();
        break;
        case 2: Transporte[boletos].comprar_asientos();
        break;
        case 3: Transporte[boletos].mostrar_avion();
        break;
        case 4: cout<<"Apagando Dispositivo..."<<endl;
        //exit(3);
        break;
                }
    }   while (opc1!=4);
    */

    int opc;
    MiembroEscuela uno();
    Estudiante Alex;
    ExAlumno Rafael;
    Docente Minor;
    Administrativo Dorina;

   // MiembroEscuela uno;
    Alex.login_alumno();
    Alex.bienvenida();
    Alex.boleta = MiembroEscuela("2020090749").boleta;
    Alex.nombre = "Alejandro Jimenez";
    Alex.promedio = 7.6;
    cout<<"Tu promedio actual es de: "<<Alex.promedio<<endl;
    Alex.clases();

   // MiembroEscuela dos;
    Rafael.login_exalumno();
    Rafael.bienvenida();
    Rafael.boleta = MiembroEscuela("2020090292").boleta;
    Rafael.nombre = "Rafael Lopez";
    Rafael.promedio_final();

   // MiembroEscuela tres;
    Minor.login_Docente();
    Minor.bienvenida();
    Minor.num_empleado = MiembroEscuela("365978451265").num_empleado;
    Minor.nombre = "Jaime Minor";
    Minor.clases_prof();

  //  MiembroEscuela cuatro;
    Dorina.login_Admin();
    Dorina.bienvenida();
    Dorina.num_empleado = MiembroEscuela("2020090292").num_empleado;
    Dorina.nombre = "Dorina Cortes";
    Dorina.papeleo();

    do{
        cout << "Plataforma PIDAEN'T    " << endl;
        cout<<"1. Docente"<<endl;
        cout<<"2. Administrativo"<<endl;
        cout<<"3. Alumno"<<endl;
        cout<<"4. ExAlumno"<<endl;
        cout<<"5. Salir"<<endl;
        cin>>opc;

    switch(opc){
        case 1: MiembroEscuela uno();
        break;
        case 2: MiembroEscuela uno();
        break;
        case 3: MiembroEscuela uno();
        break;
        case 4: MiembroEscuela uno();
        break;
        case 5: cout<<"Saliendo de la plataforma..."<<endl;
        exit(3);
        break;
                }
    }   while (opc!=5);

}
