#include<bits/stdc++.h>
#include "operaciones.h"
using namespace std;

int main(){
    set<char>alfabeto;
    string w1,w2;

    //lecturaInd(alfabeto);
    lecturaRango(alfabeto);
    impresionAlfabeto(alfabeto);

    do{
        cout << "Ingresa la cadena 1: ";
        cin>>w1;
    }while(!validacionCad(alfabeto,w1));
    do{
        cout << "Ingresa la cadena 2: ";
        cin>>w2;
    }while(!validacionCad(alfabeto,w2));
        


    return 0;
}

