#include "pwdsignupdialog.h"
#include "ui_pwdsignupdialog.h"
#include "mainwindow.h"
#include <QPushButton>
#include <QLineEdit>
#include <QMessageBox>

PwdSignUpDialog::PwdSignUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PwdSignUpDialog)
{
    ui->setupUi(this);
}

PwdSignUpDialog::~PwdSignUpDialog()
{
    delete ui;
}
    //最高权限账号和密码
    QString HighestAuthorityNum = "13805592862";
    QString HighestAuthorityPwd = "28622862yc";

void PwdSignUpDialog::on_SignUpButton_clicked()
{
    QString phoneNum = ui->phoneNumberEdit->text();
    QString password = ui->passwordEdit->text();
    bool isCheckedAutSign = ui->agreeAutoSignUpCheckBox->isChecked();
    bool isCheckedRemPwd  = ui->agreeRememberPwdCheckBox->isChecked();

    //检查手机号和密码是否填写
    if (phoneNum.isEmpty() || password.isEmpty() ) {
        QMessageBox::warning(this, tr("警告"), tr("请将手机号或者密码填写完整"));
        return;
    }
    //验证手机号码格式是否正确：检查长度是否为11位
    if (phoneNum.length() != 11) {
        QMessageBox::warning(this, tr("警告"), tr("请输入一个有效长度的手机号码"));
        return;
    }

    //验证手机密码是否正确
    if (phoneNum == HighestAuthorityNum && password == HighestAuthorityPwd){
        //验证是否自动登录
        if(isCheckedAutSign){
            phoneNum = HighestAuthorityNum;
            password = HighestAuthorityPwd;
        }
        //登录成功：发送提示信息，并进行跳转至mainwindow,关闭登录窗口
        QMessageBox::information(this, "登录成功", "欢迎您，杨超管理员！");
        MainWindow *mainWindow = new MainWindow;
        mainWindow->show();
        this->close();
    }else{
        QMessageBox::information(this, "登录失败", "用户名或密码错误");
    }

    //验证是否勾选记住密码
}


