#pragma once
#include "Persona.h"
class Empleado : public Persona
{
private:
    string cargo;
    double salario;
    string fechaIngreso;
    string estado;

public:
    Empleado();
    ~Empleado();

    void setCargo(string c);
    void setSalario(double s);
    void setFechaIngreso(string f);
    void setEstado(string e);

    string getCargo();
    double getSalario();
    string getFechaIngreso();
    string getEstado();
};

