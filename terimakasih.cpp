#include "terimakasih.h"
#include "ui_terimakasih.h"

TerimaKasih::TerimaKasih(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TerimaKasih)
{
    ui->setupUi(this);
}

TerimaKasih::~TerimaKasih()
{
    delete ui;
}

void TerimaKasih::on_pushButton_5_clicked()
{
    hide();
    Window2 = new class Window2(this);
    Window2->show();
}
