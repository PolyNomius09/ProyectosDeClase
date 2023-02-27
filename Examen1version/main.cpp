#include <bits/stdc++.h>
using namespace std;

bool usada[12];
vector<int> preguntas;
vector<int> dif;

int cambiar(int num){
    dif.clear();
    usada[num] = false;
    for(int i = 0; i < 5; ++i){
        if(preguntas[i] != num){
            dif.push_back(preguntas[i]);
        }
    }
    preguntas = dif;
    while(true){
        int aux = rand() % 10;
        aux+=1;
        if(!usada[aux] && aux != num){
            usada[aux] = true;
            preguntas.push_back(aux);
            return aux;
        }
    }
}

void f3(){
    /// genera el numero aletorio
    while(true){
        int aux = rand() % 10;
        aux+=1;
        if(!usada[aux]){
            usada[aux] = true;
            preguntas.push_back(aux);
            break;
        }
    }
}

void f4(int numPregunta, vector<int> listaPreguntas){
    cout << listaPreguntas[numPregunta - 1] << "\n";
}

int main(){
    for(int i = 1; i <= 5; ++i){
        f3();
    }
    for(int i = 0; i < 5; ++i){
        cout << "Pregunta No " << preguntas[i] << "\n";
        cout << "Desea cambiar la pregunta?\n";
        cout << "ingrese SI o NO\n";
        string res;
        cin >> res;
        if(res == "SI"){
            int nueva = cambiar(preguntas[i]);
            cout << "Ahora la pregunta es la No " << nueva << "\n";
        }
    }
    cout << "Conteste las siguientes preguntas\n";
    vector<int> listaPreguntas;
    for(int i = 0; i < 5; ++i){
        f4(preguntas[i], listaPreguntas);
        cout << "\n Ingrese su respuesta:\n";
        string resp;
        getline(cin, resp);
    }
    return 0;
}
