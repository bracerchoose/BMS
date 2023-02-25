#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reandtramessagewidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_BatInfoComboBox_activated(int index)
{
    if(index == 1){
        ReAndTraMessageWidget *reAndTraMessage = new ReAndTraMessageWidget;
        reAndTraMessage->show();
    }
}
