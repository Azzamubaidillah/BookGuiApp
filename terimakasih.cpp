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
