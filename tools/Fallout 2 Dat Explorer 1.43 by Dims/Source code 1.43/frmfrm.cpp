//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "frmfrm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmForm *FrmForm;
//---------------------------------------------------------------------------
__fastcall TFrmForm::TFrmForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------