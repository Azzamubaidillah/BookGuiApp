#include "konfirmasihujan.h"
#include "ui_konfirmasihujan.h"

KonfirmasiHujan::KonfirmasiHujan(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KonfirmasiHujan)
{
    ui->setupUi(this);
}

KonfirmasiHujan::~KonfirmasiHujan()
{
    delete ui;
}

void KonfirmasiHujan::on_pushButton_2_clicked()
{
    hide();
    TerimaKasih = new class TerimaKasih(this);
    TerimaKasih->show();
}
