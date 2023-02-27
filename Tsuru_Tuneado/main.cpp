#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

class automovil{
public:
    string color;
    string placa;
    int num_de_puertas;

    void pedir_datos(){

        cout<<"introduce el color:"<<endl;
        cin>>color;
        cout<<"introduce el numero de placa:"<<endl;
        cin>>placa;
        cout<<"introduce el numero de puertas:"<<endl;
        cin>>num_de_puertas;

        cout<<"El color de su auto es: "<<color<<endl;
        cout<<"El numero de placa de su auto es: "<<placa<<endl;
        cout<<"El numero de rines que coloco en su auto es de: "<<num_de_puertas<<endl;

    }

};

int main()
{
    automovil Tsuru;
    Tsuru.pedir_datos();
    cout<<endl;

    automovil Ferrari;
    Ferrari.pedir_datos();
    cout<<endl;

}
