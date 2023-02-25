#ifndef RECEIVEMESSAGEWIDGET_H
#define RECEIVEMESSAGEWIDGET_H

#include <QWidget>

namespace Ui {
class ReceiveMessageWidget;
}

class ReceiveMessageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ReceiveMessageWidget(QWidget *parent = nullptr);
    ~ReceiveMessageWidget();

private:
    Ui::ReceiveMessageWidget *ui;
};

#endif // RECEIVEMESSAGEWIDGET_H
