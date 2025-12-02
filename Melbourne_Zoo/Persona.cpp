#include "Persona.h"

Persona::Persona() {}

Persona::~Persona() {}

void Persona::setCedula(string c) {
    cedula = c;
}

void Persona::setNombre(string n) {
    nombre = n;
}

void Persona::setApellido(string a) {
    apellido = a;
}

string Persona::getCedula() {
    return cedula;
}

string Persona::getNombre() {
    return nombre;
}

string Persona::getApellido() {
    return apellido;
}
