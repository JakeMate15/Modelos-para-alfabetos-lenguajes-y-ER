#include "operaciones.h"
#include<bits/stdc++.h>

using namespace std;
typedef set<char> sc;

void lecturaInd(sc &alfabeto){
    char lectura;
    while(cin>>lectura){
        alfabeto.insert(lectura);
    }

    cout << "Alfabeto leido" << endl;
}

void lecturaRango(set<char> &alfabeto) {
    char l, r;
    
    do{
        cout << "Ingresa los rangos: ";
        cin >> l >> r;

        for (char c = l; c <= r; c++) {
            alfabeto.insert(c);
        }
    }while (r<=l);

    cout << "Alfabeto creado\n";
}

void impresionAlfabeto(const sc &alfabeto){
    cout << "El alfabeto es: " << endl;
    for(char c: alfabeto)
        cout << c << " ";
    cout << endl;
}

bool validacionCad(const sc &alfabeto, string s){
    for(char c: s){
        if(!alfabeto.count(c))  
            return false;
    }

    return true;
}

