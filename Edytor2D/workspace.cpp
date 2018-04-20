#include "msclr\marshal_cppstd.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include "workspace.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String ^> ^argss) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Edytor2D::workspace forma;
	Application::Run(%forma);
	return 0;
	//test
}
