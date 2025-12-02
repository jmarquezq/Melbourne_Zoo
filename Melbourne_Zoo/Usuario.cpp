#include "Usuario.h"

Usuario::Usuario() {}
Usuario::~Usuario() {}

void Usuario::setPerfil(string nperfil)
{
    this->perfil = nperfil;
}

string Usuario::getPerfil()
{
    return this->perfil;
}

bool Usuario::verificarUsuario(string nusuario, string nclave)
{
    if (nusuario == "dueno" && nclave == "dueno") {
        perfil = "dueno";
        return true;
    }
    if (nusuario == "admin" && nclave == "admin") {
        perfil = "admin";
        return true;
    }
    if (nusuario == "cajero" && nclave == "cajero") {
        perfil = "cajero";
        return true;
    }
    return false;
}

