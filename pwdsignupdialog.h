#ifndef PWDSIGNUPDIALOG_H
#define PWDSIGNUPDIALOG_H

#include <QDialog>

namespace Ui {
class PwdSignUpDialog;
}

class PwdSignUpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PwdSignUpDialog(QWidget *parent = nullptr);
    ~PwdSignUpDialog();

private slots:
    void on_ShrinkLabel_linkActivated(const QString &link);

    void on_SignUpButton_clicked();

private:
    Ui::PwdSignUpDialog *ui;
};

#endif // PWDSIGNUPDIALOG_H
