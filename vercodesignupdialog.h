#ifndef VERCODESIGNUPDIALOG_H
#define VERCODESIGNUPDIALOG_H

#include <QDialog>

namespace Ui {
class VerCodeSignUpDialog;
}

class VerCodeSignUpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit VerCodeSignUpDialog(QWidget *parent = nullptr);
    ~VerCodeSignUpDialog();

private:
    Ui::VerCodeSignUpDialog *ui;
};

#endif // VERCODESIGNUPDIALOG_H
