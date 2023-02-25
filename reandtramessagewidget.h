#ifndef REANDTRAMESSAGEWIDGET_H
#define REANDTRAMESSAGEWIDGET_H

#include <QWidget>
#include <QTableWidgetItem>

namespace Ui {
class ReAndTraMessageWidget;
}

class ReAndTraMessageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ReAndTraMessageWidget(QWidget *parent = nullptr);
    ~ReAndTraMessageWidget();

private slots:

    void on_TransmitWidget_itemEntered(QTableWidgetItem *item);

    void on_TransmitWidget_cellActivated(int row, int column);

private:
    Ui::ReAndTraMessageWidget *ui;
};

#endif // REANDTRAMESSAGEWIDGET_H
