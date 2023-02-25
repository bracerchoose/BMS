#include "forgetpwddialog.h"
#include "ui_forgetpwddialog.h"

ForgetPwdDialog::ForgetPwdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ForgetPwdDialog)
{
    ui->setupUi(this);
}

ForgetPwdDialog::~ForgetPwdDialog()
{
    delete ui;
}
