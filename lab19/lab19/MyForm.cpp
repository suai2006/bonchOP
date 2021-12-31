#include "MyForm.h"

using namespace lab19;
using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//AllocConsole();
	//AttachConsole(GetCurrentProcessId());
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	Application::Run(gcnew MyForm);
}