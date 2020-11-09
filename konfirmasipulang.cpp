#include "konfirmasipulang.h"
#include "ui_konfirmasipulang.h"

KonfirmasiPulang::KonfirmasiPulang(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KonfirmasiPulang)
{
    ui->setupUi(this);
}

KonfirmasiPulang::~KonfirmasiPulang()
{
    delete ui;
}

void KonfirmasiPulang::on_pushButton_2_clicked()
{
    hide();
    TerimaKasih = new class TerimaKasih(this);
    TerimaKasih->show();
}
