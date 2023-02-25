#include "reandtramessagewidget.h"
#include "ui_reandtramessagewidget.h"
#include "editmessage.h"
#include <QTableWidgetItem>

ReAndTraMessageWidget::ReAndTraMessageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReAndTraMessageWidget)
{
    ui->setupUi(this);
}

ReAndTraMessageWidget::~ReAndTraMessageWidget()
{
    delete ui;
}

void ReAndTraMessageWidget::on_TransmitWidget_itemEntered(QTableWidgetItem *item)
{
    EditMessage *editmessage = new EditMessage;
    editmessage->show();
}


void ReAndTraMessageWidget::on_TransmitWidget_cellActivated(int row, int column)
{
    if(0<row<255){
    EditMessage *editmessage = new EditMessage;
    editmessage->show();
    }
}
