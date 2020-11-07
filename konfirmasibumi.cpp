#include "konfirmasibumi.h"
#include "ui_konfirmasibumi.h"

KonfirmasiBumi::KonfirmasiBumi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KonfirmasiBumi)
{
    ui->setupUi(this);
}

KonfirmasiBumi::~KonfirmasiBumi()
{
    delete ui;
}
