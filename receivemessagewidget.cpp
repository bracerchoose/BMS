#include "receivemessagewidget.h"
#include "ui_receivemessagewidget.h"

ReceiveMessageWidget::ReceiveMessageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReceiveMessageWidget)
{
    ui->setupUi(this);
}

ReceiveMessageWidget::~ReceiveMessageWidget()
{
    delete ui;
}
