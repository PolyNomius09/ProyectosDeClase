#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;
/* Problema 1
Class Punto{ //Class no debe llevar Mayuscula // class Punto{};
    Public: //public no debe llevar Mayuscula // public()
        int x, y;

void fijarX(int v){
    x = v;
    }

void fijarY(int v){
    y = v;
    }
};
*/

//Problema 2
/*
class Fecha{
public:

int dia, mes, ano;

void iniciar_fecha(){
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);

    dia = local->tm_mday;            // obtener el día del mes (1 a 31)
    mes = local->tm_mon + 1;      // obtener el mes del año (0 a 11)
    ano = local->tm_year + 1900;   // obtener el año desde 1900
    return;
    }

void imprimir(){
     printf("La Fecha Actual es: %02d/%02d/%d\n", dia, mes, ano);
     return;
    }
};
*/
//Problema 3

class Racional{
public:
    float numerador, denominador, aux, opc1;
    float res;
void asignar(){
    cout<<"Inserta el numerador"<<endl;
    cin>>numerador;
    cout<<"Inserta el denominador"<<endl;
    cin>>denominador;
}
void convertir(){
    res = numerador /  denominador;
}
void invertir(){
    aux = numerador;
    numerador = denominador;
    denominador = aux;
}
void imprimir(){
    cout<<"Fraccion Convertida: "<<res<<endl;
    cout<<"Fraccion Invertida: "<<numerador<<"/"<<denominador<<endl;
    cout<<endl;
    }
};

//Problema 4
/*
class LibroCalificaciones{
public:
string nombreCurso;
string nombreProfesor;
float calfinal = 8; //Opcional, para que se vea mas bonito
void mostrar_mensaje(){
    cout<<"Sea Bienvenido a su Libro de Calificaciones"<<endl;
    cout<<"Ingresa el nombre del curso: "<<endl;
    cin>>nombreCurso;
    cout<<"Este curso es presentado por: "<<endl;
    cin>>nombreProfesor;
    cout<<endl;
    cout<<"El curso de "<<nombreCurso<<" presentado por el docente: "<<nombreProfesor<<" ha Finalizado."<<endl;
    cout<<"Tu calificacion final fue: "<<calfinal<<endl;
    return;
    }
};
*/
int main()
{
    //Problema 2
    /*
    Fecha actual;
    actual.iniciar_fecha();
    actual.imprimir();

    return 0;
    */
    //Problema 3

    Racional uno;
    int opc;
    cout<<"Bienvenido a tu menu de numeros racionales"<<endl;
    do{
    cout<<"Elige lo que quieras hacer: "<<endl;
    cout<<"0 = Asignar Valores"<<endl;
    cout<<"1 = Convertir"<<endl;
    cout<<"2 = Invertir"<<endl;
    cout<<"3 = Imprimir"<<endl;
    cout<<"4 = Salir"<<endl;
    cin >> opc;

    switch(opc){
    case 0: uno.asignar();
    break;
    case 1: uno.convertir();
    break;
    case 2: uno.invertir();
    break;
    case 3: uno.imprimir();
    break;
    case 4: cout<<"ok, vuelva pronto"<<endl;
    exit(3);
    break;
            }
    } while(true);

/*
    LibroCalificaciones Uno;
    Uno.mostrar_mensaje();
*/
}
