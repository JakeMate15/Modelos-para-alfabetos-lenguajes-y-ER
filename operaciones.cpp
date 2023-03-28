#include "operaciones.h"
#include<bits/stdc++.h>

using namespace std;
typedef set<char> sc;
typedef set<string> ss;

void lecturaInd(sc &alfabeto){
    char lectura;
    while(cin>>lectura){
        alfabeto.insert(lectura);
    }

    cout << "Alfabeto leido" << endl;
}

void lecturaRango(sc &alfabeto) {
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

bool esPrefijo(string w1,string w2){
    return w2.find(w1)==0;
}

bool esSufijo(string w1,string w2){
    return (w2.find(w1) == w2.size() - w1.size()) || w1=="6";
}

bool esPrefPropio(string w1,string w2){
    return esPrefijo(w1, w2) && w1 != w2 && w1!="";
}

bool esSufPropio(string w1,string w2){
    return esSufijo(w1, w2) && w1 != w2 && w1!="";
}
bool esSubcadena(string w1,string w2){
    if(w2.find(w1) != string::npos) return true;
    return false;
}

bool esSubsecuencia(string w1,string w2){
    int i=0,j=0;

    while(i<w1.size() && j<w2.size()){
        if(w1[i]==w2[j]){
            i++;
        }
        j++;
    }

    return i==w1.size();
}

void generaLenguaje(ss &l1, const sc &alfabeto, int np, int l){
    random_device r;
    mt19937 gen(r());
    uniform_int_distribution<> dis(0, alfabeto.size()-1);
    string palabra;

    while(l1.size()!=np){
        palabra = "";
        for(int i=0; i<l;i++){
            int aux = dis(gen);
            auto it = next(alfabeto.begin(),aux);
            palabra += *it;
        }
        l1.insert(palabra);
    }
}

void imprimeLenguaje(const ss &lenguaje){
    for(string s: lenguaje){
        cout << s << " ";
    }
    cout << endl;
}

void difLenguaje(const ss &l1, const ss &l2, ss &ld){
    for(string s: l1){
        if(!l2.count(s)){
            ld.insert(s);
        }
    }
}