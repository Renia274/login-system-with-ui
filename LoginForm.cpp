//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "string.h"
#pragma hdrstop

#include "LoginForm14.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyLoginForm *MyLoginForm;
//---------------------------------------------------------------------------
__fastcall TMyLoginForm::TMyLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}

//this function returns vector of string at takes one record from our file
//each time takes a record from a line
std::vector<std::string> parseCommaDelimitedString(std::string line)
{
	std::vector<std::string> test_result;
	std::stringstream test_stream(line);



	//iterates our when we have no errors
	while(test_stream.good()){
		std::string substr;
		//reads from stream and then read substr from line until you come to ','
		getline(test_stream,substr,',');
		//push until nothing else to read
		test_result.push_back(substr);

	}
	return test_result;
}

//---------------------------------------------------------------------------
void __fastcall TMyLoginForm::LoginButtonClick(TObject *Sender)
{
	fstream testFile;

	//reads from our file
	testFile.open("registered.txt",ios::in);

	//checks if it is open
	if (testFile.is_open) {
		std::string line;

		//reads our file until no lines to read
		while(getline(testFile,line))
		{
		  std::vector<std::string> parsedLine=parseCommaDelimitedString(line);
		  const char* username= parsedLine.at(2).c_str();


		  AnsiString editUsername=usernameEdit->Text;
		  const char* usernameString=editUsername.c_str();

		  //comparison of two strs if they have the same content
		  if(std::strcmp(username,usernameString)==0){
				 const char* password= parsedLine.at(3).c_str();

				 AnsiString editPassword=passwordEdit->Text;
				 const char* passwordString=editPassword.c_str();

				 if(std::strcmp(password,passwordString)==0)  {

					 messageLabel->Text="Success!!";

				 }
				 else {

					 messageLabel->Text="Incorrect password!!";
				 }
		  }

		}
	}
}

