#include "operaciones.h"
#include<bits/stdc++.h>

using namespace std;
typedef set<char> sc;
typedef set<string> ss;

void lecturaInd(sc &alfabeto){
    alfabeto.clear();
    char lectura;
    while(cin>>lectura){
        alfabeto.insert(lectura);
    }

    cout << "Alfabeto leido" << endl;
}

void lecturaRango(sc &alfabeto) {
    char l, r;
    alfabeto.clear();
    
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
    if(s=="")   return true;
    for(char c: s){
        if(!alfabeto.count(c))  
            return false;
    }

    return true;
}

bool esPrefijo(string w1,string w2){
    return w2.find(w1)==0;
}

bool esSufijo(string w1, string w2) {
    int n = w1.length();
    if (w2.length() < n) {
        return false;
    }
    return w2.compare(w2.length() - n, n, w1) == 0;
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

void imprimeLenguaje(const ss& l){
    for(string s: l){
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

void potencia(const sc &alfabeto, ss &res, int n,string pref){
    if(n > 5 || n < -5){
        cout << "Rango no válido" << endl;
        return;
    }

    if(n == 0){
        res.insert(pref);
        return;
    }

    if(n > 0){
        for(char c: alfabeto){
            potencia(alfabeto,res,n-1,pref+c);
        }
    }
}

void potN(const ss &p){
    for (const auto& s : p) {
        string aux = s;
        reverse(aux.begin(), aux.end());
        cout << aux << endl;
    }

    cout << endl;
}

bool manejoExpresionRegular(string palabra){
    regex er("(((?=.*[a])[a-d|f-h|j-n|p-t|v-z]+)((?=.*[e])[b-d|e-h|j-n|p-t|v-z]+)((?=.*[i])[b-d|f-h|i-n|p-t|v-z]+)((?=.*[o])[b-d|f-h|j-n|o-t|v-z]+)((?=.*[u])[b-d|f-h|j-n|p-t|u-z]+))+");
    /*
    (
        ((?=.*[a])[a-d|f-h|j-n|p-t|v-z]+)
        ((?=.*[e])[b-d|e-h|j-n|p-t|v-z]+)
        ((?=.*[i])[b-d|f-h|i-n|p-t|v-z]+)
        ((?=.*[o])[b-d|f-h|j-n|o-t|v-z]+)
        ((?=.*[u])[b-d|f-h|j-n|p-t|u-z]+)
    )+
    */
   
    return(regex_match(palabra, er));
}