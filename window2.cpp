#include "window2.h"
#include "ui_window2.h"
#include <QPixmap>

Window2::Window2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Window2)
{
    ui->setupUi(this);
}

Window2::~Window2()
{
    delete ui;
}
