#include <iostream>
#include <stdlib.h>
#include <math.h>


using namespace std;

class empleado{
    public:
    string nomb;
    string apell;
    float salario;
    float salarioanual;
    float salarioaumentado;

void Solicitar_datos_empleado(){
    cout<<"Ingresa tu nombre"<<endl;
    cin>>nomb;
    cout<<"Ingresa tus apellidos"<<endl;
    cin>>apell;
    cout<<"Ingresa tu salario"<<endl;
    cin>>salario;
    }

void imprimir_datos_empleado(){
    salarioanual = salario*12;
    salarioaumentado = salario+(salario*.1);
    cout<<"El nombre del empleado es: "<<nomb<<endl;
    cout<<"El apellido del empleado es: "<<apell<<endl;
    cout<<"El salario del empleado es: $"<<salario<<endl;
    cout<<"El salario anual del empleado es: $"<<salarioanual<<endl;
    cout<<"El salario del empleado con bono del 10% es: $"<<salarioaumentado<<endl;
    }

};

int main()
{
    empleado uno;
    cout << "****************************************************************************************" << endl;
    cout << "Bienvenido, para poder comenzar con sus 'acciones' necesitamos unos datos personales..." << endl;
    cout << "****************************************************************************************" << endl;
    uno.Solicitar_datos_empleado();
    uno.imprimir_datos_empleado();
    cout<<endl;

    empleado does;
    cout << "****************************************************************************************" << endl;
    cout << "Hola, para poder comenzar con sus 'acciones' necesitamos unos datos personales..." << endl;
    cout << "****************************************************************************************" << endl;
    does.Solicitar_datos_empleado();
    does.imprimir_datos_empleado();
    cout<<endl;

}

