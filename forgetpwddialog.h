#ifndef FORGETPWDDIALOG_H
#define FORGETPWDDIALOG_H

#include <QDialog>

namespace Ui {
class ForgetPwdDialog;
}

class ForgetPwdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ForgetPwdDialog(QWidget *parent = nullptr);
    ~ForgetPwdDialog();

private:
    Ui::ForgetPwdDialog *ui;
};

#endif // FORGETPWDDIALOG_H
