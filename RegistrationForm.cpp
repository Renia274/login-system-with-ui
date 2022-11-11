//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include<fstream>
#include "RegistrationForm14.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyRegistrationForm *MyRegistrationForm;
//---------------------------------------------------------------------------
__fastcall TMyRegistrationForm::TMyRegistrationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMyRegistrationForm::SignupButtonClick(TObject *Sender)
{
	fstream testFile;
	//reads file and if not created then creates a new one
	testFile.open("registered.txt",ios::app);

	if(testFile.is_open())
	{
		AnsiString name = nameEdit->Text;
		AnsiString age =  ageEdit->Text;
		AnsiString username = usernameEdit->Text;
		AnsiString password = passwordEdit->Text;

		//insert data to our file
		testFile<<name<<","<<age<<","<<username<<","<<password<<"\n";
		//closes file
		testFile.close();
        //closes registration form
		this->Close();

	}
}
//---------------------------------------------------------------------------
