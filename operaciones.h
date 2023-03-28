#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <set>
#include <string>

void lecturaInd(std::set<char>&);
void lecturaRango(std::set<char>&);
void impresionAlfabeto(const std::set<char>&);
bool validacionCad(const std::set<char>&,std::string);
bool esPrefijo(std::string,std::string);
bool esSufijo(std::string,std::string);
bool esPrefPropio(std::string,std::string);
bool esSufPropio(std::string,std::string);
bool esSubcadena(std::string,std::string);
bool esSubsecuencia(std::string,std::string);
void generaLenguaje(std::set<std::string>&,const std::set<char>&,int,int);
void imprimeLenguaje(const std::set<std::string>&);
void difLenguaje(const std::set<std::string>&,const std::set<std::string>&,std::set<std::string>&);

#endif
