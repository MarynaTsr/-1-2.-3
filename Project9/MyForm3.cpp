#include "MyForm3.h"
#include <Windows.h>


using namespace Project9;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {


	Application::EnableVisualStyles();


	Application::SetCompatibleTextRenderingDefault(false);


	Application::Run(gcnew MyForm3);


	return 0;
}

