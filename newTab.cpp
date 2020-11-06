#include "newTab.h"
#include "ui_newTab.h"

list::list(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::list)
{
    ui->setupUi(this);
}

list::~list()
{
    delete ui;
}
