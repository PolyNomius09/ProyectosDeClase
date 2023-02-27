#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

void busqueda_de_numeros(int melate[],int numeros_usu[]){
    cout<<"Increible, los numeros que adivinaste fueron:"<<endl;
        for(int i=0;i<=5;i++){
        if(melate[i]==numeros_usu[i]){
    cout<<numeros_usu[i]<<"\t";
 }

}
 if(melate[0]!=numeros_usu[0] && melate[1]!=numeros_usu[1] && melate[2]!=numeros_usu[2] && melate[3]!=numeros_usu[3] &&
melate[4]!=numeros_usu[4] && melate[5]!=numeros_usu[5]){
 cout<<"Lamentablemente, no atinaste a ningun numero"<<endl;
 }


 if(melate[0]==numeros_usu[0] && melate[1]==numeros_usu[1] && melate[2]==numeros_usu[2] && melate[3]==numeros_usu[3]
&& melate[4]==numeros_usu[4] && melate[5]==numeros_usu[5]){
 cout<<"USTED A GANADO EL PREMIO MAYOR VALUADO EN 100 MILLONES DE PESOS"<<endl;
 }
}

void imprimir_melate(int melate[], int numeros_usu[]){
 cout<<"Resultados del melate:"<<endl;
 for(int i=0;i<=5;i++){
 cout<<melate[i]<<"\t";
 }

 cout<<endl;
 cout<<"Sus numeros fueron:"<<endl;
 for(int i=0;i<=5;i++){
        cout<<numeros_usu[i]<<"\t";
    }
}
int main()
{
    srand(time(NULL));
    int numeros_usu[6];
    int melate[6];
        for(int i=0;i<=5;i++){
    melate[i] = 1+rand()%56;
 }

    for(int i=0;i<=5;i++){
    for(int j=i+1;j<=5;j++){
    if(melate[i]==melate[j]){
    melate[j] = 1+rand()%56;
        }
    }
 }

 cout<<"Bienvenido al juego del melate"<<endl;
 cout<<"Introduzca 6 numeros diferentes del 1 al 56"<<endl;

    for(int i=0;i<=5;i++){
    cin>>numeros_usu[i];
}

 system("cls");
 imprimir_melate(melate, numeros_usu);
 cout<<endl;
 busqueda_de_numeros(melate, numeros_usu);
 return 0;
}
