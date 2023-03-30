#include<bits/stdc++.h>
#include "operaciones.h"
using namespace std;

void potenciaAlf(sc,int);
void menu();

int main(){
    sc alfabeto;
    ss l1,l2,ld,pot,potn;
    //string w1,w2;

    
    //lecturaInd(alfabeto);
    lecturaRango(alfabeto);
    
    impresionAlfabeto(alfabeto);
    /*
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

    /*
    int np,l;
    cin>>np>>l;
    generaLenguaje(l1,alfabeto,np,l);
    generaLenguaje(l2,alfabeto,np,l);

    imprimeLenguaje(l1);
    imprimeLenguaje(l2);

    difLenguaje(l1,l2,ld);
    imprimeLenguaje(ld);
    */

    potenciaAlf(alfabeto,3);
    potenciaAlf(alfabeto,-3);

    return 0;
}


void potenciaAlf(sc alfabeto, int n){
    if(n>5 || n<-5){
        cout << "Rango no valido" << endl;
        return;
    }

    cout << "\nEl alfabeto elevado a " << n << " es:\n";
    if(n==0){
        cout << " " << endl;
        return;
    }

    ss aux;
    potencia(alfabeto,aux,abs(n),"");

    if(n>0){
        for(string s: aux){
            cout << s << " ";
        }
        cout << endl;
    }
    else{
        
        for (string s : aux) {
            string auxS = s;
            reverse(auxS.begin(), auxS.end());
            cout << auxS << " ";
        }

        /*
        auto it = aux.end();
        it--;
        while(it!=aux.begin()){
            cout << *it << " ";
            it--;
        }
        */

        cout << endl;
    }
}

void menu(){

}
