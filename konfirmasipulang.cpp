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
