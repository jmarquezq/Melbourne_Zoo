#include "Empleado.h"

Empleado::Empleado() {}

Empleado::~Empleado() {}

void Empleado::setCargo(string c) {
    cargo = c;
}

void Empleado::setSalario(double s) {
    salario = s;
}

void Empleado::setFechaIngreso(string f) {
    fechaIngreso = f;
}

void Empleado::setEstado(string e) {
    estado = e;
}

string Empleado::getCargo() {
    return cargo;
}

double Empleado::getSalario() {
    return salario;
}

string Empleado::getFechaIngreso() {
    return fechaIngreso;
}

string Empleado::getEstado() {
    return estado;
}

