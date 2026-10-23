#include "MyForm.h"
#include "SplashForm.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace test;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Твоя заставка
    test::SplashForm^ splash = gcnew test::SplashForm();
    splash->ShowDialog();

    // Головна форма
    Application::Run(gcnew test::MyForm());
}

