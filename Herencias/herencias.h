#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

class animal
{
    public:
    string color;
    double tamanio;
    double peso;

void correr()
    {
        cout<<"Este animal esta CORRIENDO..."<<endl;
    }
void dormir ()
    {
        cout<<"Este animal esta DURMIENDO... *Zzzzz...*"<<endl;
    }
};

class herviboro: public animal
{
public:
    void esconderse()
    {
        cout<<"Este animal se esta ESCONDIENDO..."<<endl;
    }
};

class carnivoro: public animal
{
public:
    void cazar()
    {
        cout<<"Este animal esta CAZANDO..."<<endl;
    }
};
