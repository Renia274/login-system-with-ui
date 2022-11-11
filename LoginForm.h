//---------------------------------------------------------------------------

#ifndef LoginForm14H
#define LoginForm14H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TMyLoginForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *usernameEdit;
	TEdit *passwordEdit;
	TButton *LoginButton;
	TLabel *Label2;
	TLabel *messageLabel;
	void __fastcall LoginButtonClick(TObject *Sender);
	void __fastcall messageLabelClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMyLoginForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMyLoginForm *MyLoginForm;
//---------------------------------------------------------------------------
#endif
