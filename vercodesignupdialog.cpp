#include "vercodesignupdialog.h"
#include "ui_vercodesignupdialog.h"

VerCodeSignUpDialog::VerCodeSignUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VerCodeSignUpDialog)
{
    ui->setupUi(this);
}

VerCodeSignUpDialog::~VerCodeSignUpDialog()
{
    delete ui;
}
