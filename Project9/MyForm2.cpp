#include "MyForm2.h"
#include <Windows.h>


using namespace Project9;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {


	Application::EnableVisualStyles();


	Application::SetCompatibleTextRenderingDefault(false);


	Application::Run(gcnew MyForm2);


	return 0;
}



