#ifndef WINDOW2_H
#define WINDOW2_H

#include <QMainWindow>
#include "konfirmasi.h"
#include "konfirmasihabibi.h"
#include "konfirmasibumi.h"
#include "konfirmasihujan.h"
#include "konfirmasipergi.h"
#include "konfirmasipulang.h"

namespace Ui {
class Window2;

}

class Window2 : public QMainWindow
{
    Q_OBJECT

public:

    explicit Window2(QWidget *parent = nullptr);
    ~Window2();

private slots:

    void on_verticalScrollBar_actionTriggered(int action);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:

    Ui::Window2 *ui;
    Konfirmasi *Konfirmasi;
    KonfirmasiHabibi *KonfirmasiHabibi;
    KonfirmasiBumi *KonfirmasiBumi;
    KonfirmasiHujan *KonfirmasiHujan;
    KonfirmasiPergi *KonfirmasiPergi;
    KonfirmasiPulang *KonfirmasiPulang;

};

#endif // WINDOW2_H
