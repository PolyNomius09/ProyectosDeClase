#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Rectangulo{
public:
    float base;
    float altura;

    float calcular_perimetro(){
        float res = 2*base+2*altura;
        return res;
    }

    float calcular_area(){
        float res2=base*altura;
        return res2;
    }
};

int main(){
    Rectangulo Chompy1;
    Chompy1.altura = 10;
    Chompy1.base = 20;
    float perimetro = Chompy1.calcular_perimetro();
    float area = Chompy1.calcular_area();
    cout<<"Chompy 1"<<endl;
    cout<<"Perimetro: "<<perimetro<<endl;
    cout<<"Area: "<<area<<endl;

    cout<<endl;

    Rectangulo Chompy2;
    cout<<"introduce la base:"<<endl;
    cin>>Chompy2.base;
    cout<<"introduce la altura:"<<endl;
    cin>>Chompy2.altura;
    cout<<endl;
    perimetro = Chompy2.calcular_perimetro();
    area = Chompy2.calcular_area();
    cout<<"Chompy 2"<<endl;
    cout<<"Perimetro: "<<perimetro<<endl;
    cout<<"Area: "<<area<<endl;
}
