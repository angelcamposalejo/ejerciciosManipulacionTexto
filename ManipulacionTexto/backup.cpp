#include "stdafx.h"  //________________________________________ ManipulacionTexto.cpp
#include "ManipulacionTexto.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	ManipulacionTexto app;
	return app.BeginDialog(IDI_ManipulacionTexto, hInstance);
}

void ManipulacionTexto::Window_Open(Win::Event& e)
{
}

void ManipulacionTexto::btAgregar_Click(Win::Event& e)
{
}

void ManipulacionTexto::btOrdenar_Click(Win::Event& e)
{
}

