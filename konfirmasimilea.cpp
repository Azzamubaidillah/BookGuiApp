#include "konfirmasimilea.h"
#include "ui_konfirmasimilea.h"

KonfirmasiMilea::KonfirmasiMilea(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KonfirmasiMilea)
{
    ui->setupUi(this);
}

KonfirmasiMilea::~KonfirmasiMilea()
{
    delete ui;
}

void KonfirmasiMilea::on_pushButton_2_clicked()
{
    hide();
    TerimaKasih = new class TerimaKasih(this);
    TerimaKasih->show();
}
