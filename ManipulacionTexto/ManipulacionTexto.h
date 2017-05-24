#pragma once  //______________________________________ ManipulacionTexto.h  
#include "Resource.h"
class ManipulacionTexto : public Win::Dialog
{
public:
	ManipulacionTexto()
	{
	}
	~ManipulacionTexto()
	{
	}
	wchar_t* GetDayByChar(wchar_t entrada);
	wchar_t* GetDayByNumb(int entrada);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button btCalcular;
	Win::Label lb2;
	Win::Textbox tbxSalida;
	Win::Button gbox1;
	Win::Button radioNumero;
	Win::Button radioLetra;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(369);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(114);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ManipulacionTexto";
		lb1.Create(NULL, L"Entrada", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 145, 4, 68, 25, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 213, 4, 52, 25, hWnd, 1001);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 285, 4, 77, 28, hWnd, 1002);
		lb2.Create(NULL, L"Salida", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 146, 48, 48, 25, hWnd, 1003);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 194, 49, 89, 25, hWnd, 1004);
		gbox1.Create(WS_EX_TRANSPARENT, L"Entrada", WS_CHILD | WS_VISIBLE | BS_GROUPBOX, 8, 9, 133, 98, hWnd, 1005);
		radioNumero.Create(NULL, L"Numero", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 21, 30, 111, 26, hWnd, 1006);
		radioLetra.Create(NULL, L"Letra", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTORADIOBUTTON | BS_LEFT | BS_VCENTER, 20, 55, 112, 26, hWnd, 1007);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
		lb2.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
		gbox1.Font = fontArial014A;
		radioNumero.Font = fontArial014A;
		radioLetra.Font = fontArial014A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) { btCalcular_Click(e); return true; }
		return false;
	}
};
