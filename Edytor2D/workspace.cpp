#include "workspace.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String ^> ^argss) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Edytor2D::workspace forma;
	Application::Run(%forma);
	return 0;
}