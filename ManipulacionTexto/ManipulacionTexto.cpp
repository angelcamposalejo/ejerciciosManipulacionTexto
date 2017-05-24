#include "stdafx.h"  //________________________________________ ManipulacionTexto.cpp
#include "ManipulacionTexto.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ManipulacionTexto app;
	return app.BeginDialog(IDI_ManipulacionTexto, hInstance);
}

void ManipulacionTexto::Window_Open(Win::Event& e)
{
	this->radioNumero.Checked = true;
	this->radioLetra.Checked = false;

}



void ManipulacionTexto::btCalcular_Click(Win::Event& e)
{
	if (radioNumero.Checked == true)
	{
		tbxSalida.Text = GetDayByNumb(tbxEntrada.IntValue);
	}
	else
	{
		wstring entrada = tbxEntrada.Text;
		if (entrada.length() == 1)
		{
			tbxSalida.Text = GetDayByChar(entrada[0]);
		}
	}
}
wchar_t* ManipulacionTexto::GetDayByChar(wchar_t entrada)
{
	switch (entrada)
	{
	case 'S':
		return L"Sunday";
	case 'M':
		return L"Monday";
	case 'T':
		return L"Tuesday";
	case 'W':
		return L"Wednesday";
	case 'H':
		return L"Thursday";
	case 'F':
		return L"Friday";
	case 'A':
		return L"Saturday";
	}
}
wchar_t* ManipulacionTexto::GetDayByNumb(int entrada)
{
	switch (entrada)
	{
	case 0:
		return L"Sunday";
	case 1:
		return L"Monday";
	case 2:
		return L"Tuesday";
	case 3:
		return L"Wednesday";
	case 4:
		return L"Thursday";
	case 5:
		return L"Friday";
	case 6:
		return L"Saturday";
	}
}