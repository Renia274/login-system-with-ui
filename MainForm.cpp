//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include "LoginForm2.h"
#include "RegistrationForm2.h""
#include "MainForm14.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyMainForm *MyMainForm;
//---------------------------------------------------------------------------
__fastcall TMyMainForm::TMyMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMyMainForm::LoginNavigationBtnClick(TObject *Sender)
{
    MyLoginForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMyMainForm::RegistrationNavigationFormClick(TObject *Sender)
{
     MyRegistrationForm->Show();
}
//---------------------------------------------------------------------------
