#include "login.h"
using namespace System;
[STAThreadAttribute]
int main()
{
	Windows::Forms::Application::EnableVisualStyles();
	Windows::Forms::Application::Run(gcnew FinalProject::login());
	return 0;
}