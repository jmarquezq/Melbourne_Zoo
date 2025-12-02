#pragma once
#include <string>
using namespace std;

class Persona {
private:
    string cedula;
    string nombre;
    string apellido;

public:
    Persona();
    ~Persona();

    void setCedula(string c);
    void setNombre(string n);
    void setApellido(string a);

    string getCedula();
    string getNombre();
    string getApellido();
};




