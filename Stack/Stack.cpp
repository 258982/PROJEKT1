#include "Stack.h"

#include "Stack.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Stack::Stack form;
	Application::Run(% form);
}