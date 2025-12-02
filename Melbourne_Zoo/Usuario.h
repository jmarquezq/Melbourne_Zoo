#pragma once
#include "Persona.h"
class Usuario : public Persona
{
     private:
		string usuario;
		string clave;
		string perfil;

    public:

		Usuario();
		~Usuario();
		void setPerfil(string nperfil);
		string getPerfil();
		bool verificarUsuario(string nusuario, string nclave);
};

