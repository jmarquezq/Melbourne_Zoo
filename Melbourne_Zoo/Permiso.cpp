#include "Permiso.h"

Permiso::Permiso() {}

Permiso::~Permiso() {}

void Permiso::setTipo(string t) {
    tipo = t;
}

void Permiso::setResponsable(string r) {
    responsable = r;
}

void Permiso::setArea(string a) {
    area = a;
}

void Permiso::setFechaInicio(string f) {
    fechaInicio = f;
}

void Permiso::setFechaFin(string f) {
    fechaFin = f;
}

void Permiso::setMotivo(string m) {
    motivo = m;
}

string Permiso::getTipo() {
    return tipo;
}

string Permiso::getResponsable() {
    return responsable;
}

string Permiso::getArea() {
    return area;
}

string Permiso::getFechaInicio() {
    return fechaInicio;
}

string Permiso::getFechaFin() {
    return fechaFin;
}

string Permiso::getMotivo() {
    return motivo;
}

