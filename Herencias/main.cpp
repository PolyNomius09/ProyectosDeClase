#include <iostream>
#include "herencias.h"

using namespace std;

int main()
{
    herviboro Cebra;
    carnivoro Leon;

    Cebra.color = "Negro con Rayas Blancas";
    Cebra.peso = 280;
    Cebra.tamanio=2.4;
    cout<<"Cebra\n color: "<<Cebra.color<<"\nPeso: "<<Cebra.peso<<"\nTamanio: "<<Cebra.tamanio<<endl;
    Cebra.correr();
    Cebra.esconderse();
    Cebra.dormir();

    cout<<endl;

    Leon.color = "Naranja amarillento";
    Leon.peso = 190;
    Leon.tamanio = 2.1;
    cout<<"Leon\n color: "<<Leon.color<<"\nPeso: "<<Leon.peso<<"\nTamanio: "<<Leon.tamanio<<endl;
    Leon.cazar();
    Leon.correr();
}
