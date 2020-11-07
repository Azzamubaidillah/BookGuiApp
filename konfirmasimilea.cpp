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
