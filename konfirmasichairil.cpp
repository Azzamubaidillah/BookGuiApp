#include "konfirmasichairil.h"
#include "ui_konfirmasichairil.h"

KonfirmasiChairil::KonfirmasiChairil(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KonfirmasiChairil)
{
    ui->setupUi(this);
}

KonfirmasiChairil::~KonfirmasiChairil()
{
    delete ui;
}

void KonfirmasiChairil::on_pushButton_2_clicked()
{
    hide();
    TerimaKasih = new class TerimaKasih(this);
    TerimaKasih->show();

}
