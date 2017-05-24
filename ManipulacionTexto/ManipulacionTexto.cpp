#include "stdafx.h"  //________________________________________ ManipulacionTexto.cpp
#include "ManipulacionTexto.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ManipulacionTexto app;
	return app.BeginDialog(IDI_ManipulacionTexto, hInstance);
}

void ManipulacionTexto::Window_Open(Win::Event& e)
{

}



void ManipulacionTexto::btCalcular_Click(Win::Event& e)
{
	this->tbxString.IntValue = tbxEntrada.Text.length();
	this->tbxChar.IntValue = wcslen(tbxEntrada.Text.c_str());
}

