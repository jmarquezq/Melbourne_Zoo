#pragma once
#include <string>
using namespace std;

class Permiso {
private:
    string tipo;
    string responsable;
    string area;
    string fechaInicio;
    string fechaFin;
    string motivo;

public:
    Permiso();
    ~Permiso();

    void setTipo(string t);
    void setResponsable(string r);
    void setArea(string a);
    void setFechaInicio(string f);
    void setFechaFin(string f);
    void setMotivo(string m);

    string getTipo();
    string getResponsable();
    string getArea();
    string getFechaInicio();
    string getFechaFin();
    string getMotivo();
};


