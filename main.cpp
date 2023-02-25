#include "widget.h"
#include "logindialog.h"
#include <QApplication>
#include "mainwindow.h"
#include "pwdsignupdialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainwindow;
    mainwindow.show();
    //PwdSignUpDialog sign;
    //sign.show();
    //LoginDialog login;
    //login.show();
    //Widget w;
    //w.show();
    return a.exec();
}
