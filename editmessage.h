#ifndef EDITMESSAGE_H
#define EDITMESSAGE_H

#include <QWidget>

namespace Ui {
class EditMessage;
}

class EditMessage : public QWidget
{
    Q_OBJECT

public:
    explicit EditMessage(QWidget *parent = nullptr);
    ~EditMessage();

private:
    Ui::EditMessage *ui;
};

#endif // EDITMESSAGE_H
