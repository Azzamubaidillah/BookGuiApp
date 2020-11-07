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
