#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//Problema 4

using namespace std;

class MiembroEscuela
{
    public:
    string boleta;
    string nombre;
    string num_empleado;
    string contrasenia;
    long promedio;

void bienvenida()
    {
        cout<<"Se Bienvenido a la Plataforma"<<endl;
    }
void salida ()
    {
        cout<<"Esperemos haya sido de su agrado"<<endl;
    }
/*
    MiembroEscuela(){
        boleta = "2020090749";
    }
*/
   MiembroEscuela(string bol){
        boleta = bol;
    }

/*  ~MiembroEscuela(){
        cout<<"Saliendo..."<<endl;
        exit(3);
*/
};

class Empleado: public MiembroEscuela{
public:
    void login(){
        cout<<"Bienvenid@: "<<nombre<<endl;
}

    Empleado(string doc):MiembroEscuela(doc){
    }

};

class Estudiante: public MiembroEscuela{
public:
    void login_alumno(){
        cout<<"Boleta: "<<endl;
        cin>>boleta;
        cout<<"Contrasenia: "<<endl;
        cin>>contrasenia;
        system("cls");

        cout<<"Bienvenid@: "<<nombre<<endl;
    }

    void clases()
    {
        cout<<"El alumno tiene clases de 2 pm a 9 pm"<<endl;
    }

    Estudiante(string bolet):MiembroEscuela(bolet){

    }

};

class ExAlumno: public MiembroEscuela{
public:
    void login_exalumno(){
        cout<<"Boleta: "<<endl;
        cin>>boleta;
        cout<<"Contrasenia: "<<endl;
        cin>>contrasenia;
        system("cls");

        cout<<"Bienvenid@: "<<nombre<<endl;
    }

    void promedio_final()
    {
        cout<<"Tu promedio final fue de: 8.2"<<endl;
    }

    ExAlumno(string bole):MiembroEscuela(bole){

    }

};

class Docente: public Empleado{
public:
    void login_Docente(){
        cout<<"Numero de Empleado: "<<endl;
        cin>>num_empleado;
        cout<<"Contrasenia: "<<endl;
        cin>>contrasenia;
        system("cls");

        cout<<"Bienvenid@: "<<nombre<<endl;
}

    void clases_prof()
    {
        cout<<"Usted tiene clases de:"<<endl;
        cout<<"1 pm a 2 pm"<<endl;
        cout<<"4 pm a 6 pm"<<endl;
        cout<<"7 pm a 8 pm"<<endl;
    }

    Docente(string doc):Empleado(doc){
    }

};

class Administrativo: public Empleado{
public:
    void login_Admin(){
        cout<<"Numero de Empleado: "<<endl;
        cin>>num_empleado;
        cout<<"Contrasenia: "<<endl;
        cin>>contrasenia;
        system("cls");

        cout<<"Bienvenid@: "<<nombre<<endl;
}

    void papeleo()
    {
        cout<<"Tienes como pendientes:"<<endl;
        cout<<"Publicar informacion de becas"<<endl;
        cout<<"Dar de alta Servicios Sociales"<<endl;
    }


    Administrativo(string a):Empleado(a){
    }

};
