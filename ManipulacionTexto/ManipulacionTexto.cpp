#include "stdafx.h"  //________________________________________ ManipulacionTexto.cpp
#include "ManipulacionTexto.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ManipulacionTexto app;
	return app.BeginDialog(IDI_ManipulacionTexto, hInstance);
}

void ManipulacionTexto::Window_Open(Win::Event& e)
{

}

void ManipulacionTexto::btAgregar_Click(Win::Event& e)
{
	nameList.push_back(tbxEntrada.Text);
	tbxLista.Text += tbxEntrada.Text;
	tbxLista.Text += L"\r\n";
	tbxEntrada.Text = L"";
	tbxEntrada.SetFocus();
}

void ManipulacionTexto::btOrdenar_Click(Win::Event& e)
{
	nameList.sort();
	tbxSalida.Text = L"";
	const list<wstring>::iterator listEnd = nameList.end();
	for (list<wstring>::iterator names = nameList.begin(); names != listEnd; names++)
	{
		tbxSalida.Text += *names;
		tbxSalida.Text += L"\r\n";
	}
}

