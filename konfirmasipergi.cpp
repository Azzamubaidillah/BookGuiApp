#include "konfirmasipergi.h"
#include "ui_konfirmasipergi.h"

KonfirmasiPergi::KonfirmasiPergi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KonfirmasiPergi)
{
    ui->setupUi(this);
}

KonfirmasiPergi::~KonfirmasiPergi()
{
    delete ui;
}
