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
