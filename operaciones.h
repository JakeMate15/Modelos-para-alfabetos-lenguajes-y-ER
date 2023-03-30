#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <set>
#include <unordered_set>
#include <string>

typedef std::set<char> sc;
typedef std::unordered_set<std::string> uss;
typedef std::set<std::string> ss;
typedef std::string string;

void lecturaInd(sc&);
void lecturaRango(sc&);
void impresionAlfabeto(const sc&);
bool validacionCad(const sc&, string);
bool esPrefijo(string, string);
bool esSufijo(string, string);
bool esPrefPropio(string, string);
bool esSufPropio(string, string);
bool esSubcadena(string, string);
bool esSubsecuencia(string, string);
void generaLenguaje(ss&, const sc&, int, int);
void difLenguaje(const ss&, const ss&, ss&);
void potencia(const sc&, ss&, int, string);
void potN(const ss&);

#endif
