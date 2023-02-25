#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_agreeCheckBox_stateChanged(int arg1)
{

}

// 检查密码强度，密码长度应为6到16位，且包含字母和数字
bool checkPasswordStrength(const QString &password) {
    if (password.length() < 6 || password.length() > 16) {
        return false;
    }
    bool hasDigit = false;
    bool hasLetter = false;
    for (int i = 0; i < password.length(); i++) {
        QChar ch = password.at(i);
        if (ch.isDigit()) {
            hasDigit = true;
        } else if (ch.isLetter()) {
            hasLetter = true;
        }
    }
    return hasDigit && hasLetter;
}

void LoginDialog::on_LoginButton_clicked()
{
    QString phoneNumber = ui->phoneNumberEdit->text();
    QString password = ui->passwordEdit->text();
    QString confirmPassword = ui->confirmPasswordEdit->text();
    bool isChecked = ui->agreeCheckBox->isChecked();

    // 检查手机号、密码和确认密码是否为空
    if (phoneNumber.isEmpty() || password.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, tr("警告"), tr("请将信息填写完整"));
        return;
    }

    // 检查手机号是否合法
    //1.检查长度是否为11位
    if (phoneNumber.length() != 11) {
        QMessageBox::warning(this, tr("警告"), tr("请输入一个有效长度的手机号码"));
        return;
    }
    //2.检查密码强度：必须包含数字、字母和特殊字符；长度不能小于8且大于16
    if (!checkPasswordStrength(password)) {
        QMessageBox::warning(this, tr("密码错误"), tr("密码应为6到16位，且包含字母和数字"));
        return;
    }
    //3.检查手机号是否被注册(未实现)

    // 检查密码和确认密码是否一致
    if (password != confirmPassword) {
        QMessageBox::warning(this, tr("警告"), tr("密码输入不一致"));
        return;
    }

    //检查checkbox是否被勾选
    if (!isChecked) {
        QMessageBox::warning(this, tr("用户协议未同意"), tr("请先同意用户协议"));
        return;
    }
    // 注册成功
    QMessageBox::information(this, tr("提示"), tr("注册成功"));
}
