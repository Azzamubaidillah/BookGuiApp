#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::on_pushButton_clicked()
{

//SecDialog secDeialog;
//secDeialog.setModal(true);
//secDeialog.exec();

Window2 = new class Window2(this);
Window2->show();

}
