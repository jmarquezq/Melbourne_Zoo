#include "mainForm.h"
#include "loginForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(cli::array<String^>^ arg)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Crea una instancia de tu formulario principal y lo ejecuta
    MelbourneZoo::mainForm form;
    Application::Run(% form);



}



