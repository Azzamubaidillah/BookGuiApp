#include "konfirmasihabibi.h"
#include "ui_konfirmasihabibi.h"

KonfirmasiHabibi::KonfirmasiHabibi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KonfirmasiHabibi)
{
    ui->setupUi(this);
}

KonfirmasiHabibi::~KonfirmasiHabibi()
{
    delete ui;
}

void KonfirmasiHabibi::on_pushButton_2_clicked()
{
    hide();
    TerimaKasih = new class TerimaKasih(this);
    TerimaKasih->show();
}
