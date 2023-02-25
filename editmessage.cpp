#include "editmessage.h"
#include "ui_editmessage.h"

EditMessage::EditMessage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditMessage)
{
    ui->setupUi(this);
}

EditMessage::~EditMessage()
{
    delete ui;
}
