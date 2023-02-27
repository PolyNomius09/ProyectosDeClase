#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int calcular_edad(int dactual, int mactual, int aactual, int dnac, int mnac, int anac){
    cout<<"Hola, soy una calculadora que sabe tu edad, solo con saber la fecha actual"<<endl;
    cout<<"//Fecha de Nacimiento//"<<endl;

    cout<<"Introduce tu dia de nacimiento:"<<endl;
    cin>>dnac;
    cout<<"Introduce tu mes de nacimiento:"<<endl;
    cin>>mnac;
    cout<<"Introduce tu año de nacimiento:"<<endl;
    cin>>anac;

    system("cls");

    cout<<"//Fecha Actual//"<<endl;
    cout<<"Introduce el dia actual:"<<endl;
    cin>>dactual;
    cout<<"Introduce el mes actual:"<<endl;
    cin>>mactual;
    cout<<"Introduce el año actual:"<<endl;
    cin>>aactual;

    system("cls");

    int edad = aactual - anac;
    if(mnac>mactual)
        edad--;
    else if(mactual==mnac)
        if(dnac>dactual)
            edad--;
                else if(dactual==dnac)
                    cout<<"Feliz Cumpleaños"<<endl;
    return edad;
        }


int main()
{
    int dactual, mactual, dnac, aactual, mnac, anac, edadtot;
    int r = calcular_edad(dactual, mactual, dnac, aactual, mnac, anac);
    cout<<"Tu edad es de: "<<r<<" anos"<<endl;

    edadtot = edadtot + r;
    r = 0;
    return 0;
}
