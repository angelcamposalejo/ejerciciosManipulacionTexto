#pragma once  //______________________________________ ManipulacionTexto.h  
#include "Resource.h"
class ManipulacionTexto: public Win::Dialog
{
public:
	ManipulacionTexto()
	{
	}
	~ManipulacionTexto()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button btAgregar;
	Win::Textbox tbxLista;
	Win::Button btOrdenar;
	Win::Textbox tbxSalida;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(469);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(281);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ManipulacionTexto";
		lb1.Create(NULL, L"Nombre", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 6, 4, 68, 25, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 74, 4, 106, 25, hWnd, 1001);
		btAgregar.Create(NULL, L"Agregar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 190, 3, 77, 28, hWnd, 1002);
		tbxLista.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 9, 43, 180, 231, hWnd, 1003);
		btOrdenar.Create(NULL, L"Ordenar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 201, 136, 72, 28, hWnd, 1004);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_AUTOVSCROLL | ES_MULTILINE | ES_READONLY | ES_LEFT | ES_WINNORMALCASE, 280, 42, 182, 231, hWnd, 1005);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btAgregar.Font = fontArial014A;
		tbxLista.Font = fontArial014A;
		btOrdenar.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
	}
	//_________________________________________________
	void btAgregar_Click(Win::Event& e);
	void btOrdenar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btAgregar.IsEvent(e, BN_CLICKED)) {btAgregar_Click(e); return true;}
		if (btOrdenar.IsEvent(e, BN_CLICKED)) {btOrdenar_Click(e); return true;}
		return false;
	}
};
