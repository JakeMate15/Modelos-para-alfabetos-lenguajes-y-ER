#include<bits/stdc++.h>
#include "operaciones.h"
using namespace std;

void potenciaAlf(int);
void lecturaAlf();
void menu();
void menuER();
void menuAlf();
void menuProc();

sc alfabeto;
ss l1,l2,ld,pot,potn;
string w1,w2;

int main(){

    menu();
    
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

    //potenciaAlf(alfabeto,3);
    //potenciaAlf(alfabeto,-3);

    return 0;
}

void menu(){
    int op=-1;
    do{
        system("clear");
        cout << "Elija una opcion"<<endl;
        cout << "1. Alfabetos, lenguajes y cadenas" << endl;
        cout << "2. Expresion Regular"<<endl;
        cout << "3. Salir"<<endl;
        cout << "Opcion: " ;
        cin>>op;
    }while(op<1 || op>3);
    system("clear");
    if(op==1){
        lecturaAlf();
    }
    else if(op==2){
        menuER();
    }
    else{
        exit(0);
    }
}

void lecturaAlf(){
    int op=-1;
    do{
        system("clear");
        cout << "¿Como quiere introducir el alfabeto?"<<endl;
        cout << "1. Por rango" << endl;
        cout << "2. Por caracteres individuales"<<endl;
        cout << "Opcion: ";
        cin>>op;
    }while(op<1 || op>2);
    
    if(op==1){
        lecturaRango(alfabeto);
    }
    else{
        lecturaInd(alfabeto);
    }

    menuProc();
}

void menuER(){
    string aux;
    int op=1;
    do{
        system("clear");
        cout << "Se va a comprobar si la cadena ingresada esta formada de letras minusculas y tiene las cinco vocales en orden." << endl;
        cout << "Ingrese su palabra" << endl;
        cin>>aux;

        if (manejoExpresionRegular(aux)) {
            cout << "La palabra es válida." << endl;
        } else {
            cout << "La palabra no es válida." << endl;
        }

        cout << endl << "¿Quiere probar con otra palabra? Si(1) No(Cualquier otra respuesta): " ;
        cin>>op;
    }while(op==1);
    menu();
}

void menuProc(){
    int op=-1;
    do{
        system("clear");
        cout << "Elije una opcion" << endl;
        cout << "1. Validacion y lectura de dos cadenas" << endl; 
        cout << "2. Creacion de 2 lenguajes y sus diferencia" << endl;
        cout << "3. Potencia de un alfabeto" << endl;
        cout << "4. Regresar al menu principal" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: ";
        cin>>op;
    }while(op<1 || op>3);
    if(op==1){
        cout << "Introduza dos cadenas, ambas formadas con elementos del alfabeto generado" << endl;
        do{
            cout << "Ingresa la cadena 1: ";
            cin>>w1;
        }while(!validacionCad(alfabeto,w1));
        do{
            cout << "Ingresa la cadena 2: ";
            cin>>w2;
        }while(!validacionCad(alfabeto,w2));
        
    }
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


