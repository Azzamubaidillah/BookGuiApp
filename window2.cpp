#include "window2.h"
#include "ui_window2.h"
#include <QPixmap>

char judul[5][2][40] = {
                            {"B.J. Habibie" , "Chairil"},
                            {"Be the New You", "Be, Calm Be Strong, Be Grateful" },
                            {"Dilan 1990", "Dilan 1991"},
                            {"Pergi", "Pulang"},
                            {"Bumi", "Hujan"},
                        };

char penulis[5][1][20] = {
                            {"Tere Liye"},
                            {"Pidi Baiq"},
                            {"Wirda Mansur"},
                            {"Weda S. Atma"},
                            {"Hasan Aspahani"},
                        };



Window2::Window2(QWidget *parent) :

    QMainWindow(parent),
    ui(new Ui::Window2)

{
    ui->setupUi(this);

    //POPULER
    ui->judul_populer1->setText(judul[2][1]);
    ui->judul_populer2->setText(judul[0][0]);
    ui->penulis_populer1->setText(penulis[1][0]);
    ui->penulis_populer2->setText(penulis[3][0]);

    //TERE LIYE
    ui->judul_tere1->setText(judul[4][0]);
    ui->judul_tere2->setText(judul[4][1]);
    ui->penulistere1->setText(penulis[0][0]);
    ui->penulistere2->setText(penulis[0][0]);
    ui->judul_tere3->setText(judul[3][0]);
    ui->judul_tere4->setText(judul[3][1]);
    ui->penulistere3->setText(penulis[0][0]);
    ui->penulistere4->setText(penulis[0][0]);

    //BIOGRAFI
    ui->judulbio1->setText(judul[0][0]);
    ui->judulbio2->setText(judul[0][1]);
    ui->penulisbio1->setText(penulis[0][3]);
    ui->penulisbio2->setText(penulis[0][4]);

    //DILAN
    ui->judul_dilan1->setText(judul[2][0]);
    ui->judul_dilan2->setText(judul[2][1]);
    ui->penulisdilan1->setText(penulis[1][0]);
    ui->penulisdilan2->setText(penulis[1][0]);

}

Window2::~Window2()
{
    delete ui;
}

void Window2::on_verticalScrollBar_actionTriggered(int action)
{

}

void Window2::on_pushButton_2_clicked()
{
    hide();
    Konfirmasi = new class Konfirmasi(this);
    Konfirmasi->show();
}

void Window2::on_pushButton_3_clicked()
{
    hide();
    KonfirmasiHabibi = new class KonfirmasiHabibi(this);
    KonfirmasiHabibi->show();
}

void Window2::on_pushButton_5_clicked()
{
    hide();
    KonfirmasiBumi = new class KonfirmasiBumi(this);
    KonfirmasiBumi->show();
}

void Window2::on_pushButton_4_clicked()
{
    hide();
    KonfirmasiHujan = new class KonfirmasiHujan(this);
    KonfirmasiHujan->show();
}

void Window2::on_pushButton_6_clicked()
{
    hide();
    KonfirmasiPulang = new class KonfirmasiPulang(this);
    KonfirmasiPulang->show();
}

void Window2::on_pushButton_7_clicked()
{
    hide();
    KonfirmasiPergi = new class KonfirmasiPergi(this);
    KonfirmasiPergi->show();
}

void Window2::on_pushButton_8_clicked()
{
    hide();
    KonfirmasiHabibi = new class KonfirmasiHabibi(this);
    KonfirmasiHabibi->show();
}

void Window2::on_pushButton_9_clicked()
{
    hide();
    KonfirmasiChairil = new class KonfirmasiChairil(this);
    KonfirmasiChairil->show();
}

void Window2::on_pushButton_10_clicked()
{
    hide();
    Konfirmasi = new class Konfirmasi(this);
    Konfirmasi->show();
}

void Window2::on_pushButton_11_clicked()
{
    hide();
    KonfirmasiMilea = new class KonfirmasiMilea(this);
    KonfirmasiMilea->show();
}
