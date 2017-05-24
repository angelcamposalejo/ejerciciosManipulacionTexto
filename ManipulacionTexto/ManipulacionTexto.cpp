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
	wstring entrada = tbxEntrada.Text;
	const int len = entrada.length();
	int contador = 0;
	for (int i = 0; i < len; i++)
	{
		if (entrada[i] == 'a')
		{
			contador++;
		}
	}
	tbxString.IntValue = contador;
}

