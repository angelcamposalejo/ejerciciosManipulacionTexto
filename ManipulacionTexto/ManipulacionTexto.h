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

protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button btCalcular;
	Win::Label lb2;
	Win::Label lb3;
	Win::Textbox tbxString;
	Win::Textbox tbxChar;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(275);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(126);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ManipulacionTexto";
		lb1.Create(NULL, L"Nombre", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 6, 4, 68, 25, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 74, 4, 106, 25, hWnd, 1001);
		btCalcular.Create(NULL, L"Calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 190, 3, 77, 28, hWnd, 1002);
		lb2.Create(NULL, L"Length using wstring", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 7, 48, 173, 25, hWnd, 1003);
		lb3.Create(NULL, L"Length using wchar_t", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 7, 94, 172, 25, hWnd, 1004);
		tbxString.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 179, 49, 89, 25, hWnd, 1005);
		tbxChar.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 178, 92, 89, 25, hWnd, 1006);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btCalcular.Font = fontArial014A;
		lb2.Font = fontArial014A;
		lb3.Font = fontArial014A;
		tbxString.Font = fontArial014A;
		tbxChar.Font = fontArial014A;
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
