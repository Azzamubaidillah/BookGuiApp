#include "konfirmasi.h"
#include "ui_konfirmasi.h"
#include "window2.h"


Konfirmasi::Konfirmasi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Konfirmasi)
{
    ui->setupUi(this);
}

Konfirmasi::~Konfirmasi()
{
    delete ui;
}

void Konfirmasi::on_pushButton_2_clicked()
{
    hide();
    TerimaKasih = new class TerimaKasih(this);
    TerimaKasih->show();
}
