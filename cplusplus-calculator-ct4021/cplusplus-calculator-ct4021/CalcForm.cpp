#include "CalcForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	cpluspluscalculatorct4021::CalcForm form;
	Application::Run(%form);
}