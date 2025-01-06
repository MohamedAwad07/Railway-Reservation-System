#include "MyForm.h"
#include <iostream>

using namespace std;
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main() {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew RailwayGUI::MyForm());

	return 0;
}
