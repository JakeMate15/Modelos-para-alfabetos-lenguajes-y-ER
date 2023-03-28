#include<bits/stdc++.h>
#include "operaciones.h"
using namespace std;

int main(){
    set<char>alfabeto;
    set<string> l1,l2,ld;
    //string w1,w2;

    
    //lecturaInd(alfabeto);
    lecturaRango(alfabeto);
    /*
    impresionAlfabeto(alfabeto);

    do{
        cout << "Ingresa la cadena 1: ";
        cin>>w1;
    }while(!validacionCad(alfabeto,w1));
    do{
        cout << "Ingresa la cadena 2: ";
        cin>>w2;
    }while(!validacionCad(alfabeto,w2));
    */
    
    /*
    string w1 = "ola";
    string w2 = "hola";
    cout << esPrefijo(w1,w2) << endl;
    cout << esPrefPropio(w1,w2) << endl;
    cout << esSufijo(w1,w2) << endl;
    cout << esSufPropio(w1,w2) << endl;
    cout << esSubcadena(w1,w2) << endl;
    cout << esSubsecuencia(w1,w2) << endl;
    */

    int np,l;
    cin>>np>>l;
    generaLenguaje(l1,alfabeto,np,l);
    generaLenguaje(l2,alfabeto,np,l);

    imprimeLenguaje(l1);
    imprimeLenguaje(l2);

    difLenguaje(l1,l2,ld);
    imprimeLenguaje(ld);

    return 0;
}

